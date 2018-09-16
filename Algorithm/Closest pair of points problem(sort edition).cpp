//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<stdio.h>
//
//const int MAXN = 110000;
//const int INF = 0x7fffffff;
//class Point {
//private:
//
//public:
//	double x, y;
//
//	Point() = default;
//	Point(const double &x, const double &y) :x(x), y(y) {}
//
//	double getDistance(const Point &b) const {
//		double dx = this->x - b.x;
//		double dy = this->y - b.y;
//		return sqrt(dx*dx + dy*dy);
//	}
//};
//
//bool CompX(const Point &a, const Point &b) {
//	return a.x < b.x;
//}
//
//bool CompY(const Point &a, const Point &b) {
//	return a.y < b.y;
//}
//
//double getClosest(const Point X[], Point Tmp[],
//	const int left, const int right) {
//	if (left == right) return INF;//one point
//	else if (right - left + 1 == 2)//two points
//		return X[left].getDistance(X[right]);
//
//	//divide
//	int mid = (right + left) / 2, mid_xvalue = X[mid].x;
//
//	//conquer,2T(n/2)
//	double ldis = getClosest(X, Tmp, left, mid),
//		rdis = getClosest(X, Tmp, mid + 1, right);
//	double dis = std::min(ldis, rdis);
//
//	//solve,O(n)+O(nlogn):n+n+nlogn
//	int sub_len = 0;
//	for (int i = left; i <= right; i++)
//		if (abs(X[i].x - mid_xvalue) <= dis) Tmp[sub_len++] = X[i];
//	std::sort(Tmp, Tmp + sub_len, CompY);
//	for (int i = 0; i < sub_len; i++)
//		for (int j = i + 1; j < sub_len && Tmp[j].y - Tmp[i].y <= dis; j++) {
//			double tmp_dis = Tmp[i].getDistance(Tmp[j]);
//			if (tmp_dis < dis) dis = tmp_dis;
//		}
//
//	return dis;
//}
//
//Point X[MAXN], Tmp[MAXN];
//
//int main() {
//	int len;
//	while (scanf("%d",&len)&&len) {
//		//process data
//		for (int i = 0; i < len; i++)
//			scanf("%lf %lf", &X[i].x, &X[i].y);
//		std::sort(X, X + len, CompX);
//
//		//get min_dis
//		double r = getClosest(X, Tmp, 0, len - 1) / 2;
//		printf("%.2lf\n", r);
//	}
//	return 0;
//}