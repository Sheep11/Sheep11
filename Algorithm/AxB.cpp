/////*
////2018Äê3ÔÂ5ÈÕ
////*/
////
////#include<iostream>
////#include<string>
////#include<algorithm>
////using namespace std;
////
////class BigData {
////private:
////	string _data;
////	int _len;
////
////	BigData(const string &data) {
////		_data = data;
////		_len = _data.length();
////	}
////
////	const BigData& 
////		operator+(const BigData& rvalue) {
////		string a = this->_data, b = rvalue._data;
////
////		string ans;
////		int tmp = 0;
////		for (int i = a.length() - 1, j = b.length() - 1; i >= 0 || j >= 0;i--,j--) {
////			int avalue, bvalue, value;
////			avalue = i >= 0 ? static_cast<int>(a[i]) : 0;
////			bvalue = i >= 0 ? static_cast<int>(b[i]) : 0;
////			value = avalue + bvalue + tmp;
////
////			tmp = value / 10;
////			value %= 10;
////			ans += static_cast<char>(value);
////		}
////		reverse(ans.begin(), ans.end());
////		return BigData(ans);
////	}
////
////	const BigData&
////		operator-(const BigData& rvalue) {
////
////	}
////
////public:
////	const int& getLen() {
////		return _len;
////	}
////};
//
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//const int BASE = 10;
//
//const vector<int> &add(const vector<int> &a,const vector<int> &b) {
//	vector<int> ans;
//	
//	auto a_iter = a.rbegin(), b_iter = b.rbegin();
//	while (a_iter != a.rend() || b_iter != b.rend()) {
//		int avalue, bvalue;
//
//		if (a_iter != a.rend()) avalue = *(a_iter++);
//		else avalue = 0;
//		if (b_iter != b.rend()) bvalue = *(b_iter++);
//		else bvalue = 0;
//
//		ans.push_back(*a_iter + *b_iter);
//	}
//	
//	for (auto iter = ans.begin(); iter != ans.end() - 2; iter++) {
//		if (abs(*iter) >= BASE) {
//			*(iter + 1) += (*iter) / BASE;
//			*iter %= BASE;
//
//		}
//		if (*iter < 0) {
//			*(iter + 1) -= 1;
//			*iter += BASE;
//		}
//	}
//	while (ans.back() == 0)
//		ans.pop_back();
//
//	if (ans.size() == 0) return ans;
//	else {
//		if (ans.back() > 0) {
//			auto iter = ans.end() - 1;
//			int tmp = (*iter) / 10;
//			*iter = (*iter) % 10;
//			ans.push_back(tmp);
//		}
//		else 
//			for (auto iter = ans.begin(); iter != ans.end() - 2; iter++) {
//				if (*iter > 0) 
//					if (*iter >= BASE) {
//						*(iter + 1) += 1;
//						*iter -= BASE;
//					}
//					else {
//						*iter
//					}
//
//		}
//
//	}
//
//
//
//	reverse(ans.begin(), ans.end());
//
//	return ans;
//}
//
//const vector<int> &minus(const vector<int> &a, const vector<int> &b) {
//	vector<int> ans = b;
//	
//	for (auto iter = ans.begin(); iter != ans.end(); iter++)
//		*iter = -(*iter);
//	ans = add(a, ans);
//
//	return ans;
//}
//
//int main() {
//
//	cout << -17 % 10 << endl << -17 / 10;//-7 -1
//	return 0;
//}