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
//	//判断是否为words（一个或多个数字不是words）
//	bool judge(const string &_word)const {
//		for (auto i : _word)
//			if ('0' <= i&&'9' >= i) return false;
//		return true;
//	}
//public:
//	//默认构造函数
//	//与接受一个string（文件名）的构造函数
//	FileCounter() = default;
//	FileCounter(const string& _filename) {
//		filename = _filename;
//	}
//
//	//对文件中words进行判断
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