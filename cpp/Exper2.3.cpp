//#include<iostream>
//#include<string>
//
//class IntChar {
//private:
//	int content = 0, len = 0;//�����ַ���������content����Ч���ȵ�len
//	const int INT_SIZE = 4;
//	char *plow, *phigh;//�ֱ�ָ��content�ĵ�λ���λ��ַ
//
//	//����һ��int����������ת��Ϊ������
//	void Covertt2Binary(int value, char buf[]) {
//		for (int i = 31; i >= 0; i--) {
//			buf[i] = value % 2;
//			value >>= 1;
//		}
//	}
//
//public:
//	//����һ���ַ����Ĺ��캯��
//	IntChar(const std::string &str) {
//		plow = reinterpret_cast<char*>(&content);
//		phigh = plow + INT_SIZE - 1;
//		
//		len = str.length();
//		for (int i = 0; i < len; i++)
//			*(phigh - i) = str[i];
//	}
//
//	//Ҫ����������
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