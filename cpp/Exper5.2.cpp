//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class type, const int Capacity> class List {
//private:
//	//����List�еĵ����ڵ�
//	class Node {
//	public:
//		type _val;//�ڵ�ֵ
//		Node *next;
//
//		Node() :_val() {
//			next = nullptr;
//		}
//	};
//
//	Node *_head, *_tail,//�ֱ�Ϊ���ݽڵ��ͷָ���βָ��
//		*_freehead, *_freetail;//�ֱ�Ϊ���нڵ��ͷָ���βָ��
//	int _capacity, _len;//�ܿռ䡢���ݽڵ�ĳ���
//
//	//ɾ����head��ʼ�����е����нڵ㣬����head
//	void deleteNodes(Node *head) {
//		Node *p;
//		while (p = head->next, p) {
//			head->next = p->next;
//			delete p;
//		}
//		delete head;
//	}
//
//	//���������нڵ�
//	void addNode(int n) {
//		Node *p = _freehead;
//		//����n���½ڵ�
//		for (int i = 1; i <= n; i++) {
//			p->next = new Node;
//			p = p->next;
//
//			_capacity++;
//		}
//		//ά����������βָ��
//		_freetail = p;
//	}
//
//public:
//	List() {
//		_capacity = _len = 0;
//		_head = _tail = new Node;
//		_freehead = _freetail = new Node;
//
//		addNode(Capacity);//����ģ����Capacity���������㹻�ռ�
//	}
//	List(List &another) {
//		_capacity = _len = 0;
//		_head = _tail = new Node;
//		_freehead = _freetail = new Node;
//		
//		//��another�п������ݳ�Ա
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
//		if (_freehead->next == nullptr)//��û�п��нڵ�
//			addNode(10);
//		_len++;
//
//		//�ӿ�����ȡһ���ڵ�,ȡ������ͷ�ڵ����һ���ڵ�
//		Node *p = _freehead->next;
//		_freehead->next = p->next;
//
//		//������������β��
//		_tail->next = p; _tail = p;
//		p->_val = val; p->next = nullptr;
//	}
//
//	void Insert(int n, type val) {
//		if (_freehead->next == nullptr)//��û�п��нڵ�
//			addNode(10);
//		_len++;
//		
//		//�ӿ�����ȡһ���ڵ�
//		Node *newp = _freehead->next;
//		_freehead->next = newp->next;
//
//		//��λ������λ�õ�ǰһ���ڵ�
//		Node *p = head;
//		for (int i = 1; i <= n; i++)
//			p = p->next;
//
//		//����������
//		p->next = newp;
//		newp->_val = val; newp->next = p->next;
//	}
//
//	void Delete(int n) {
//		if (n + 1 > _len) return;//������������_len
//		_len--;
//
//		//��λ��ɾ��λ�õ�ǰһ���ڵ�
//		Node *p = _head;
//		for (int i = 1; i <= n; i++)
//			p = p->next;
//		
//		//����������ɾ���ڵ�
//		Node *tmp = p->next;
//		p->next = tmp->next;
//
//		//������β�����ӽڵ�
//		_freetail->next = tmp;
//		_freetail = tmp;
//	}
//
//	//����Ŀ��λ�õ����ã�ֻ�ܷ����������е�ֵ����Add()��Ľڵ�ſɱ��±����
//	//���ܻ�Խ��,���и�ֵ����ı�List��capacity��len
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
