//#ifndef IOSTREAM
//	#include<iostream>
//#endif // !IOSTREAM
//
//class MyString {
//private:
//	//为了赋值构造和赋值运算符重载时方便，将构造函数的主体部分作为私有函数，方便调用
//	//包括了：赋值，空间的申请
//	void assignObj(const char *data) {
//		//_len = getStrLen(data);//data长度
//
//		_data = new char[_len + 1];//多申请一位用来放末尾'\0'
//		memcpy(_data, data, _len + 1);
//	}
//
//protected:
//	char *_data;
//	int _len;
//
//	//返回data字符串的长度
//	int getStrLen(const char *data) const {
//		int len = 0;
//		while (data[len] != '\0')
//			len++;
//		return len;
//	}
//
//public:
//	MyString() = default;
//	//构造过程由assignObj(const char*)完成
//	MyString(const char *data) {
//		_len = getStrLen(data);
//		assignObj(data);
//	}
//	~MyString() {
//		if (_data != NULL)
//			delete[]  _data;
//		_data = NULL;
//	}
//	//根据string._data构造this
//	MyString(const MyString &str) {
//		_len = str._len;
//		this->assignObj(str._data);
//	}
//
//	//先析构释放自身的data，再重新构造
//	//对于常字符串，会通过构造函数隐式类型转换为MyString来进行
//	MyString operator=(const MyString &str) {
//		this->~MyString();
//		_len = str._len;
//		this->assignObj(str._data);
//		return *this;
//	}
//
//	//分别copy到res.data中
//	friend MyString operator+(const MyString &str1, const MyString &str2) {
//		MyString res;
//		res._len = str1._len + str2._len;
//		res._data = new char[res._len + 1];
//
//		memcpy(res._data, str1._data, str1._len);
//		memcpy(res._data + str1._len, str2._data, str2._len + 1);
//
//		return res;
//	}
//
//	//重载输出<<
//	friend std::ostream& operator<<(std::ostream& os, const MyString str) {
//		os << str._data;
//		return os;
//	}
//
//	//Find重载字符串形式
//	int Find(const char *data) const {
//		int loc, data_len = getStrLen(data);
//		for (loc = 0; loc < this->_len - data_len; loc++) {//在_data中依次找
//			for (int i = 0; i < data_len; i++)//判断字符串相等
//				if (this->_data[loc + i] != data[i]) break;
//			return loc;
//		}
//		return 0;
//	}
//	//Find重载字符形式
//	int Find(char ch) const {
//		int loc = 0;
//		for (loc = 0; loc < this->_len; loc++)
//			if (this->_data[loc] == ch) return loc + 1;//第一个符合即返回，+1为了接口友好
//		return 0;//遍历没找到则为0
//	}
//
//	MyString Mid(int a, int b) const {
//		int len = b;
//		char *data = new char[len + 1];//构造返回对象所需的data
//
//		for (int i = 0; i < len; i++)//为data赋值
//			data[i] = this->_data[a - 1 + i];
//		data[len] = '\0';
//		
//		MyString res(data);
//		delete[] data;//释放仅作临时存储的data
//		return res;
//	}
//
//	//exper2所需的接口
//	int getLen() const {
//		return this->_len;
//	}
//};
//
////int main() {
////	MyString s1("China"), s2;
////
////	s2 = "Love";
////	MyString tmp= "I" + s2 + s1;
////	std::cout << "I" + s2 + s1;
////
////	int pos = s1.Find('a');     // pos is 4, or zero if  'a'  is not found.
////
////	int a = 1, b = 3;
////	MyString my = s2.Mid(a, b);
////
////
////	return 0;
////}