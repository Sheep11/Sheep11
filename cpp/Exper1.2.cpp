//#include<iostream>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
//class FileCounter {
//private:
//	string filename;
//
//	//�ж��Ƿ�Ϊwords��һ���������ֲ���words��
//	bool judge(const string &_word)const {
//		for (auto i : _word)
//			if ('0' <= i&&'9' >= i) return false;
//		return true;
//	}
//public:
//	//Ĭ�Ϲ��캯��
//	//�����һ��string���ļ������Ĺ��캯��
//	FileCounter() = default;
//	FileCounter(const string& _filename) {
//		filename = _filename;
//	}
//
//	//���ļ���words�����ж�
//	int words_count() const {
//		ifstream fin(filename);
//		string word;
//		int count = 0;
//
//		while (fin >> word)
//			if (judge(word))
//				count++;
//		return count;
//	}
//};
//
//int main() {
//	string filename;
//	cin >> filename;
//
//	FileCounter file(filename);
//	cout << file.words_count() << endl;
//
//	return 0;
//}