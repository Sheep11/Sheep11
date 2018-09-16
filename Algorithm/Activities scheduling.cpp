///*
//2018年4月7日 区间图划分
//*/
//#include<stdio.h>
//#include<algorithm>
//const int MAXN = 1000010;
//
//struct TIME {
//	int isStart;
//	int time;
//};
//
//bool Compare(TIME a, TIME b) {
//	if (a.time!=b.time) return a.time < b.time;
//	else return a.isStart < b.isStart;
//}
//
//TIME times[2 * MAXN];
//int main() {
//	int n; scanf("%d", &n);
//	for (int i = 1; i <= 2 * n; i += 2) {
//		times[i].isStart = 1;
//		scanf("%d", &times[i].time);
//		times[i + 1].isStart = 0;
//		scanf("%d", &times[i + 1].time);
//	}
//	std::sort(&times[1], &times[1] + 2 * n, Compare);
//
//	int free_room = 0, busy_room = 0;
//	for (int i = 1; i <= 2 * n; i++) {
//		if (times[i].isStart) {
//			busy_room++;
//			if (free_room != 0) free_room--;
//		}
//		else {
//			busy_room--;
//			free_room++;
//		}
//	}
//	printf("%d\n", free_room);
//
//	return 0;
//}