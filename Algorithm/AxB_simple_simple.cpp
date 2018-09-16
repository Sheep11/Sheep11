//#include<iostream>
//#include<stdio.h>
//#include<string>
//#include<memory.h>
//using namespace std;
//
//const int MAXN = 50000;
//
//class BigUIntger {
//private:
//	int _num[MAXN];
//	int _len;
//
//	void _Reverse(int num[], const int &len) {
//		for (int i = 0, j = len - 1; i < j; i++, j--)
//			swap(num[i], num[j]);
//	}
//
//public:
//	BigUIntger() {
//		memset(_num, 0, sizeof(_num));
//	}
//
//	BigUIntger(const string &rec) {
//		_len = 0;
//		for (auto iter = rec.begin(); iter != rec.end(); iter++)
//			_num[_len++] = *iter - '0';
//		_Reverse(_num, _len);
//	}
//
//	BigUIntger 
//		operator* (const BigUIntger& b) const{
//		BigUIntger ans;
//		for (int i = 0; i < this->_len; i++)
//			for (int j = 0; j < b._len; j++)
//				ans._num[i + j] += this->_num[i] * b._num[j];
//
//		int ans_len = this->_len + b._len;
//		for (int i = 0; i < ans_len; i++) {
//			ans._num[i + 1] += ans._num[i] / 10;
//			ans._num[i] %= 10;
//		}
//		while (ans_len > 1 && ans._num[ans_len - 1] == 0)
//			ans_len--;
//		ans._len = ans_len;
//		
//		return ans;
//	}
//
//	void Output() {
//		for (int i = this->_len - 1; i >= 0; i--)
//			printf("%d", this->_num[i]);
//		printf("\n");
//	}
//};
//
//
//int main() {
//	string rec1, rec2;
//	cin >> rec1 >> rec2;
//
//	BigUIntger *a = new BigUIntger(rec1), *b = new BigUIntger(rec2);
//	BigUIntger ans = (*a)*(*b);
//	ans.Output();
//
//	return 0;
//}