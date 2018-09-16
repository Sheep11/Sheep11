//#include<iostream>
//#include"Exper3.1.cpp"
//
//class LINT:public MyString {
//private:
//
//public:
//	LINT() = default;
//	//先用子类构造（对_data与_len赋值）,再反转_data中数据,并减去'\0'
//	LINT(const char *data):MyString(data) {
//		for (int i = 0; i < _len; i++)
//			_data[_len - 1 - i] = data[i] - '0';
//	}
//	
//	LINT Add(const LINT &num) {
//		char *data = new char[this->_len + num._len + 1];//保证申请足够大内存
//		int carry = 0, i = 0;
//		//逐位相加，结果为data
//		for (i = 0; i < this->_len || i < num._len; i++) {
//			int a = i < this->_len ? this->_data[i] : 0,
//				b = i < num._len ? num._data[i] : 0;
//			data[i] = (a + b + carry) % 10;
//			carry = (a + b + carry) / 10;
//		}
//		//最后有无进位
//		if (carry != 0) data[i++] = carry;
//		data[i] = '\0';
//
//		//避免输入“011”这种情况输出错误
//		while (data[i - 1] == '\0') i--;
//
//		//申请的空间在对象内，会跟随对象析构被delete
//		LINT res;
//		res._len = i, res._data = data;
//		return res;
//	}
//
//	//倒序存储，所以从尾输出
//	volatile friend std::ostream& operator<<(std::ostream &os, const LINT& num) {
//		for (int i = num._len - 1; i >= 0; i--) {
//			int tmp = num._data[i];
//			std::cout << tmp;
//		}
//		return os;
//	}
//};
//
//int main() {
//	LINT a = "", b = "";
//	std::cout << a.Add(b);
//
//	return 0;
//}