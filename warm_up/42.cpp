//#include<stdio.h>
//#include<stdlib.h>
//
//struct Conveyor {
//	double length;
//	double v;
//};
//
//int cmp(const void* a, const void* b) {
//	return ((struct Conveyor*)a)->v > ((struct Conveyor*)b)->v;
//}
//
//struct Conveyor cb[1000001];
//int main() {
//	int T;
//	scanf("%d", &T);
//
//	while (T--)
//	{
//		double x, w, r, t;
//		double beg, end, v, cb_x = 0;
//		double time = 0;
//		int n;
//		scanf("%lf %lf %lf %lf %d", &x, &w, &r, &t, &n);
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%lf %lf %lf", &beg, &end, &v);
//			cb[i].length = end - beg;
//			cb[i].v = v;
//			cb_x += cb[i].length;
//		}
//		cb[0].length = x - cb_x;
//		cb[0].v = 0;
//		qsort(cb, n + 1, sizeof(struct Conveyor), cmp);
//
//		double sub_time = (x - cb_x) / r;
//		int pos;
//
//		for (pos = 0; pos <= n; pos++)
//		{
//			sub_time = cb[pos].length / (cb[pos].v + r);
//			if (sub_time > t) break;
//			time += sub_time;
//			t -= sub_time;
//		}
//		if (pos <= n)
//		{
//			time = time + (cb[pos].length - (cb[pos].v + r)*t) / (cb[pos].v + w) + t;
//			pos += 1;
//			while (pos <= n)
//				time += cb[pos].length / (cb[pos++].v + w);
//		}
//		printf("%.6lf\n", time);
//
//	}
//		return 0;
//}