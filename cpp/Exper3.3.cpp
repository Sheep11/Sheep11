//#include<iostream>
//#include"Exper3.1.cpp"
//
//class LINT:public MyString {
//private:
//
//public:
//	LINT() = default;
//	//�������๹�죨��_data��_len��ֵ��,�ٷ�ת_data������,����ȥ'\0'
//	LINT(const char *data):MyString(data) {
//		for (int i = 0; i < _len; i++)
//			_data[_len - 1 - i] = data[i] - '0';
//	}
//	
//	LINT Add(const LINT &num) {
//		char *data = new char[this->_len + num._len + 1];//��֤�����㹻���ڴ�
//		int carry = 0, i = 0;
//		//��λ��ӣ����Ϊdata
//		for (i = 0; i < this->_len || i < num._len; i++) {
//			int a = i < this->_len ? this->_data[i] : 0,
//				b = i < num._len ? num._data[i] : 0;
//			data[i] = (a + b + carry) % 10;
//			carry = (a + b + carry) / 10;
//		}
//		//������޽�λ
//		if (carry != 0) data[i++] = carry;
//		data[i] = '\0';
//
//		//�������롰011����������������
//		while (data[i - 1] == '\0') i--;
//
//		//����Ŀռ��ڶ����ڣ���������������delete
//		LINT res;
//		res._len = i, res._data = data;
//		return res;
//	}
//
//	//����洢�����Դ�β���
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