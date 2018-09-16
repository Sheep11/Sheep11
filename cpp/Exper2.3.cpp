//#include<iostream>
//#include<string>
//
//class IntChar {
//private:
//	int content = 0, len = 0;//保存字符串的整数content，有效长度的len
//	const int INT_SIZE = 4;
//	char *plow, *phigh;//分别指向content的低位与高位地址
//
//	//接受一个int整数，将其转换为二进制
//	void Covertt2Binary(int value, char buf[]) {
//		for (int i = 31; i >= 0; i--) {
//			buf[i] = value % 2;
//			value >>= 1;
//		}
//	}
//
//public:
//	//接受一个字符串的构造函数
//	IntChar(const std::string &str) {
//		plow = reinterpret_cast<char*>(&content);
//		phigh = plow + INT_SIZE - 1;
//		
//		len = str.length();
//		for (int i = 0; i < len; i++)
//			*(phigh - i) = str[i];
//	}
//
//	//要求的输出函数
//	void ASC_Print() {
//		for (int i = 0; i < len; i++)
//			std::cout << *(phigh - i);
//		std::cout << std::endl;
//	}
//	void Binary_print() {
//		char s[32];
//		Covertt2Binary(content, s);
//		for (int i = 0; i < 8; i++) {
//			for (int j = 0; j < 4; j++) {
//				int pos = 4 * i + j;
//				printf("%d", s[pos]);
//			}
//			std::cout << " ";
//		}
//		std::cout << std::endl;
//	}
//	void Int_Print() {
//		std::cout << content << std::endl;
//	}
//};
//
//int main() {
//	IntChar ic("Lo");
//
//	ic.ASC_Print();
//	ic.Binary_print();
//	ic.Int_Print();
//
//	return 0;
//}