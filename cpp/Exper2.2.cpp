//#include<iostream>
//#include<algorithm>
//
//class Set {
//private:
//	int *data;
//	int len = 0, size;
//
//	int *infalte(int *souce, int newsize) {
//		int *newdata = new int[newsize];
//		memcpy(newdata, souce, len * sizeof(int));
//
//		return newdata;
//	}
//
//public:
//	Set() = default;
//	Set(int size) :size(size) {
//		data = new int[size];
//	}
//	~Set() {
//		delete[] data;
//	}
//	//由于动态分配，不能用默认的拷贝构造函数
//	Set(const Set &b) {
//		if (b.size > this->size) {
//			data = infalte(this->data, b.size);
//		}
//		memcpy(this->data, b.data, b.len * sizeof(int));
//		this->len = b.len, this->size = b.size;
//	}
//
////*************************************************************
//	bool IsExist(const int &value) const{
//		for (int i = 0; i < len; i++)
//			if (value == data[i]) return true;
//		return false;
//	}
//	bool RemoveItem(const int &value) {
//		if (!IsExist(value)) return false;
//		int pos = 0;
//		while (data[pos] != value) pos++;
//		while (pos != len) {
//			data[pos] = data[pos + 1];
//			pos++;
//		}
//		len -= 1;
//		return true;
//	}
//	bool IsEqual(const Set &b) const {
//		if (this->len != b.len) return false;
//		for (int i = 0; i < len; i++)
//			if (data[i] != b.data[i]) return false;
//		return true;
//	}
//	Set Intersection(const Set &b) const {
//		Set res(this->size + b.size);
//		int len = 0;
//		for (int i = 0, j = 0; i < this->len; i++) {
//			while (b.data[j] < data[i] && j < b.len)
//				j++;
//			if (b.data[j] == data[i]) res.data[len++] = data[i];
//		}
//		res.len = len;
//
//		return res;
//	}
//	Set Union(const Set &b) const {
//		Set res(this->size + b.size);
//		for (int i = 0; i < this->len; i++)
//			res.AddItem(this->data[i]);
//		for (int i = 0; i < b.len; i++)
//			res.AddItem(b.data[i]);
//
//		return res;
//	}
//	bool AddItem(const int &value) {
//		if (IsExist(value)) return false;
//		
//		//空间不够时再申请大空间
//		if (len == size) {
//			data = infalte(data, size * 2);
//			size *= 2;
//		}
//
//		//新值放到尾，再排序
//		data[len++] = value;
//		std::sort(data, data + len);
//
//		return true;
//	}
////*************************************************************
//
//	//完全输出
//	void Print() {
//		for (int i = 0; i < len; i++)
//			std::cout << data[i] << " ";
//		std::cout << std::endl;
//	}
//};
//
////测试
//int main() {
//	Set set1(10), set2(10);
//	for (int i = 0; i <15; i++)
//		set1.AddItem(i);
//	for (int i = 5; i < 30; i++)
//		set2.AddItem(i);
//	//add后的原始数据
//	std::cout << "原始数据" << std::endl;
//	set1.Print();
//	set2.Print();
//	//相等？
//	std::cout << "相等？" << std::endl;
//	if (set1.IsEqual(set2))
//		std::cout << "true" << std::endl;
//	else std::cout << "flase" << std::endl;
//	//交集与并集
//	std::cout << "并与交" << std::endl;
//	Set set3 = set1.Union(set2);
//	Set set4 = set1.Intersection(set2);
//	set3.Print();
//	set4.Print();
//	//删除
//	std::cout << "删除" << std::endl;
//	for (int i = 0; i < 5; i++)
//		set1.RemoveItem(i);
//	for (int i = 15; i < 30; i++)
//		set2.RemoveItem(i);
//	set1.Print();
//	set2.Print();
//	//相等
//	std::cout << "相等？" << std::endl;
//	if (set1.IsEqual(set2))
//		std::cout << "true" << std::endl;
//
//	return 0;
//}