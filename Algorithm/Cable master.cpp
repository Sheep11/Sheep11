///*
//2018年3月3日
//二分穷举,double精度问题
//*/
//
//#include<iostream>
//#include<vector>
//#include<stdio.h>
//using namespace std;
//
//const double LIMIT = 1e-2;
//const double MIN_VALUE = 0;
//
//int n, k;
//vector<double> rec(10000);
//
//bool Check(const double &len) {
//	int num = 0;
//
//	if (len == 0) return false;
//	for (int i = 0; i < n; i++)
//		num += rec[i] / len;
//
//	if (num >= k) return true;
//	else return false;
//}
//
//double Floor(const double &len) {
//	return floor(len * 100) / 100;
//}
//
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//		cin >> rec[i];
//
//	double lvalue = MIN_VALUE, rvalue = MIN_VALUE, midvalue;
//	for (int i = 0; i < n; i++)
//		if (rec[i] > rvalue) rvalue = rec[i];
//
//	while (rvalue - lvalue > LIMIT) {
//		midvalue = (lvalue + rvalue) / 2;
//		if (Check(midvalue))
//			lvalue = midvalue;
//		else
//			rvalue = midvalue;
//	}
//
//	double ans = Floor(lvalue);
//	if (Check(ans + 0.01)) ans += 0.01;
//
//	printf("%.2lf\n", ans);
//	return 0;
//}