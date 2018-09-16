///*
//2018年4月14日 dp->多个贪心
//*/
//
//#include<stdio.h>
//#include<string.h>
//#define MAXN 30
//
//int pool[MAXN];
//int dec[MAXN];
//int dis[MAXN];
//
//int fish[MAXN];
//int route[MAXN][MAXN];
//
//int main() {
//	int n, N = 0;
//	while (scanf("%d", &n), n != 0) {
//		N++;
//
//		int time; scanf("%d", &time); time *= 12;
//		for (int i = 1; i <= n; i++)
//			scanf("%d", &pool[i]);
//		for (int i = 1; i <= n; i++)
//			scanf("%d", &dec[i]);
//		for (int i = 1; i < n; i++)
//			scanf("%d", &dis[i]);
//
//		memset(fish, 0, sizeof(fish));
//		memset(route, 0, sizeof(route));
//
//		for (int i = 1; i <= n; i++) {
//			int time_left = time;
//			for (int j = 1; j < i; j++)
//				time_left -= dis[j];
//			if (time_left <= 0) break;
//			int p[MAXN];
//			for (int j = 1; j <= n; j++)
//				p[j] = pool[j];
//
//			while (time_left) {
//				int pos = 0, max = 0;
//				for (int j = 1; j <= i; j++) {
//					if (p[j] > max) { pos = j; max = p[j]; }
//				}
//
//				if (max == 0) { route[i][1] += time_left; break; }
//
//				fish[i] += max;
//				route[i][pos]++;
//				p[pos] -= dec[pos];
//				p[pos] = p[pos] < 0 ? 0 : p[pos];
//				time_left--;
//			}
//		}
//
//		int pos = 0;
//		for (int i = 1; i <= n; i++)
//			if (fish[i] > fish[pos]) pos = i;
//
//		if (N != 1) printf("\n");
//		for (int i = 1; i <= n; i++)
//			if (i != 1)
//				printf(", %d", route[pos][i] * 5);
//			else
//				printf("%d", route[pos][i] * 5);
//		printf("\nNumber of fish expected: %d\n", fish[pos]);
//	}
//
//	return 0;
//}