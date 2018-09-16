#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>

const int MAXN = 110000;
const int INF = 0x7fffffff;

class Point {
private:

public:
	double x, y;

	Point() = default;
	Point(const double &x, const double &y) :x(x), y(y) {}

	double getDistance(const Point &b) const {
		double dx = this->x - b.x;
		double dy = this->y - b.y;
		return sqrt(dx*dx + dy*dy);
	}
};

bool CompX(const Point &a, const Point &b) {
	return a.x < b.x;
}

bool CompY(const Point &a, const Point &b) {
	return a.y < b.y;
}

void Merge(Point Dst[], Point Src[], int left, int right) {
	int mid = (left + right) / 2;
	int i = left, j = mid + 1, loc = left;

	while ((i <= mid) && (j <= right)){
		if (Src[i].y <= Src[j].y)    Dst[loc++] = Src[i++];
		else    Dst[loc++] = Src[j++];
	}
	while (i <= mid){
		Dst[loc++] = Src[i++];
	}
	while (j <= right){
		Dst[loc++] = Src[j++];
	}
}


//X是根据x坐标排序好，固定不变的数组，用以二分，left与right均指的是在此当中的位置
//Y中Y[left:right]是X[left:right]中数据根据y坐标排序
//Tmp是Y再排序时所用的临时数组
//Note：实际上，为了避免重复的申请内存，Tmp与Y是相互变换的。首先Tmp存Y二分后的数据，这样在递归调用（conquer部分）时，Tmp变为Y，Y变为Tmp
//当调用完后，作为Tmp传递的Y被改变，需要有Tmp进行Merge来复原
double getClosest(const Point X[], Point Y[], Point Tmp[],
	const int left, const int right) {
	if (left == right) return INF;
	if (right - left + 1 == 2)//two points
		return X[left].getDistance(X[right]);

	//divide,O(n)
	int mid = (right + left) / 2, mid_xvalue = X[mid].x;
	for (int i = left, lbegin = left, rbegin = mid + 1; i <= right; i++)
		if (Y[i].x <= mid_xvalue&&lbegin <= mid)
			Tmp[lbegin++] = Y[i];
		else
			Tmp[rbegin++] = Y[i];

	//conquer,2T(n/2)
	double ldis = getClosest(X, Tmp, Y, left, mid),
		rdis = getClosest(X, Tmp, Y, mid + 1, right);
	double dis = std::min(ldis, rdis);
	Merge(Y, Tmp, left, right);

	//solve,O(n)
	int sub_len = 0;
	for (int i = left; i <= right; i++)
		if (abs(Y[i].x - mid_xvalue) <= dis) Tmp[sub_len++];
	for (int i = 0; i < sub_len; i++)
		for (int j = i + 1; j < sub_len&&Tmp[j].y - Tmp[i].y <= dis; j++) {
			double tmp_dis = Y[i].getDistance(Y[j]);
			if (tmp_dis < dis) dis = tmp_dis;
		}

	return dis;
}

Point X[MAXN], Y[MAXN], Tmp[MAXN];

int main() {
	int len;
	while (scanf("%d",&len)&&len) {
		//process data
		for (int i = 0; i < len; i++)
			scanf("%lf %lf", &X[i].x, &X[i].y);
		for (int i = 0; i < len; i++)
			Y[i] = X[i];
		std::sort(X, X + len, CompX);
		std::sort(Y, Y + len, CompY);

		//get min_dis
		double r = getClosest(X, Y, Tmp, 0, len - 1) / 2;
		printf("%.2lf\n", r);
	}
	return 0;
}