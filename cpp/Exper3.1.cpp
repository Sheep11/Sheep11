//#ifndef IOSTREAM
//	#include<iostream>
//#endif // !IOSTREAM
//
//class MyString {
//private:
//	//Ϊ�˸�ֵ����͸�ֵ���������ʱ���㣬�����캯�������岿����Ϊ˽�к������������
//	//�����ˣ���ֵ���ռ������
//	void assignObj(const char *data) {
//		//_len = getStrLen(data);//data����
//
//		_data = new char[_len + 1];//������һλ������ĩβ'\0'
//		memcpy(_data, data, _len + 1);
//	}
//
//protected:
//	char *_data;
//	int _len;
//
//	//����data�ַ����ĳ���
//	int getStrLen(const char *data) const {
//		int len = 0;
//		while (data[len] != '\0')
//			len++;
//		return len;
//	}
//
//public:
//	MyString() = default;
//	//���������assignObj(const char*)���
//	MyString(const char *data) {
//		_len = getStrLen(data);
//		assignObj(data);
//	}
//	~MyString() {
//		if (_data != NULL)
//			delete[]  _data;
//		_data = NULL;
//	}
//	//����string._data����this
//	MyString(const MyString &str) {
//		_len = str._len;
//		this->assignObj(str._data);
//	}
//
//	//�������ͷ������data�������¹���
//	//���ڳ��ַ�������ͨ�����캯����ʽ����ת��ΪMyString������
//	MyString operator=(const MyString &str) {
//		this->~MyString();
//		_len = str._len;
//		this->assignObj(str._data);
//		return *this;
//	}
//
//	//�ֱ�copy��res.data��
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
//	//�������<<
//	friend std::ostream& operator<<(std::ostream& os, const MyString str) {
//		os << str._data;
//		return os;
//	}
//
//	//Find�����ַ�����ʽ
//	int Find(const char *data) const {
//		int loc, data_len = getStrLen(data);
//		for (loc = 0; loc < this->_len - data_len; loc++) {//��_data��������
//			for (int i = 0; i < data_len; i++)//�ж��ַ������
//				if (this->_data[loc + i] != data[i]) break;
//			return loc;
//		}
//		return 0;
//	}
//	//Find�����ַ���ʽ
//	int Find(char ch) const {
//		int loc = 0;
//		for (loc = 0; loc < this->_len; loc++)
//			if (this->_data[loc] == ch) return loc + 1;//��һ�����ϼ����أ�+1Ϊ�˽ӿ��Ѻ�
//		return 0;//����û�ҵ���Ϊ0
//	}
//
//	MyString Mid(int a, int b) const {
//		int len = b;
//		char *data = new char[len + 1];//���췵�ض��������data
//
//		for (int i = 0; i < len; i++)//Ϊdata��ֵ
//			data[i] = this->_data[a - 1 + i];
//		data[len] = '\0';
//		
//		MyString res(data);
//		delete[] data;//�ͷŽ�����ʱ�洢��data
//		return res;
//	}
//
//	//exper2����Ľӿ�
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