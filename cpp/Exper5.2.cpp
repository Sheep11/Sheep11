//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class type, const int Capacity> class List {
//private:
//	//定义List中的单个节点
//	class Node {
//	public:
//		type _val;//节点值
//		Node *next;
//
//		Node() :_val() {
//			next = nullptr;
//		}
//	};
//
//	Node *_head, *_tail,//分别为数据节点的头指针和尾指针
//		*_freehead, *_freetail;//分别为空闲节点的头指针和尾指针
//	int _capacity, _len;//总空间、数据节点的长度
//
//	//删除以head开始的链中的所有节点，包括head
//	void deleteNodes(Node *head) {
//		Node *p;
//		while (p = head->next, p) {
//			head->next = p->next;
//			delete p;
//		}
//		delete head;
//	}
//
//	//申请更多空闲节点
//	void addNode(int n) {
//		Node *p = _freehead;
//		//申请n个新节点
//		for (int i = 1; i <= n; i++) {
//			p->next = new Node;
//			p = p->next;
//
//			_capacity++;
//		}
//		//维护空闲链的尾指针
//		_freetail = p;
//	}
//
//public:
//	List() {
//		_capacity = _len = 0;
//		_head = _tail = new Node;
//		_freehead = _freetail = new Node;
//
//		addNode(Capacity);//根据模板中Capacity参数申请足够空间
//	}
//	List(List &another) {
//		_capacity = _len = 0;
//		_head = _tail = new Node;
//		_freehead = _freetail = new Node;
//		
//		//从another中拷贝数据成员
//		this->addNode(another._capacity);
//		for (int i = 1; i <= another._len; i++)
//			this->Add(another[i]);
//	}
//	~List() {
//		deleteNodes(_head);
//		deleteNodes(_freehead);
//	}
//
//	void Add(type val) {
//		if (_freehead->next == nullptr)//若没有空闲节点
//			addNode(10);
//		_len++;
//
//		//从空闲链取一个节点,取空闲链头节点的下一个节点
//		Node *p = _freehead->next;
//		_freehead->next = p->next;
//
//		//加入数据链的尾部
//		_tail->next = p; _tail = p;
//		p->_val = val; p->next = nullptr;
//	}
//
//	void Insert(int n, type val) {
//		if (_freehead->next == nullptr)//若没有空闲节点
//			addNode(10);
//		_len++;
//		
//		//从空闲链取一个节点
//		Node *newp = _freehead->next;
//		_freehead->next = newp->next;
//
//		//定位到插入位置的前一个节点
//		Node *p = head;
//		for (int i = 1; i <= n; i++)
//			p = p->next;
//
//		//插入数据链
//		p->next = newp;
//		newp->_val = val; newp->next = p->next;
//	}
//
//	void Delete(int n) {
//		if (n + 1 > _len) return;//超出数据链的_len
//		_len--;
//
//		//定位到删除位置的前一个节点
//		Node *p = _head;
//		for (int i = 1; i <= n; i++)
//			p = p->next;
//		
//		//从数据链中删除节点
//		Node *tmp = p->next;
//		p->next = tmp->next;
//
//		//空闲链尾部增加节点
//		_freetail->next = tmp;
//		_freetail = tmp;
//	}
//
//	//返回目标位置的引用，只能返回数据链中的值，即Add()后的节点才可被下标访问
//	//可能会越界,进行赋值不会改变List的capacity和len
//	type& operator[](int n); {
//		Node *p = _head;
//		for (int i = 1; i <= n + 1; i++)
//			p = p->next;
//		return p->_val;
//	}
//
//
//	//class iterator {
//	//private:
//	//	Node *iter;
//
//	//public:
//	//	iterator(Node *p) :iter(p) {}
//
//	//	bool operator=(type val) {
//	//		iter->_val = val;
//	//	}
//	//	bool operator++() {
//	//		iter = iter->_next;
//	//	}
//	//	bool operator++(int) {
//	//		iter = iter->_next;
//	//	}
//	//	bool operator!=(iterator &it) {
//	//		return !(*this->iter == *(it.iter));
//	//	}
//	//};
//
//	//iterator &begin() {
//	//	return iterator(head);
//	//}
//	//iterator *end() {
//	//	return iterator(nullptr);
//	//}
//};
//
//
//
//class Student {
//private:
//	string name;
//	int age;
//
//public:
//	Student(string n = "", int a = 0) :name(n), age(a) {}
//	
//	friend bool operator==(Student &s1, Student &s2) {
//		if (s1.name == s2.name&&s1.age == s2.age) return true;
//		else return false;
//	}
//};
//
//int main() {
//	Student s1("Joan", 22), s2("John", 19);
//	List<Student, 50> listStudent;
//	listStudent.Add(s1);
//	listStudent.Add(s2);
//
//	if (listStudent[0] == listStudent[1])
//		cout << "Equal." << endl;
//	else
//		cout << "Not equal." << endl;
//
//	return 0;
//}
