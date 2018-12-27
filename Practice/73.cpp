///*小学期程设之欢度国庆 27 孤独货运员（模拟队列和栈）
//2017.9.23
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#define MAXN 102
//
//char que[MAXN][MAXN*MAXN];
//int main() {
//	int T, n, s, q;
//	scanf("%d", &T);
//	while (T--) {
//		int start[MAXN] = { 1 }, end[MAXN] = { 0 }, bus[MAXN] = { 0 }, time = -4;
//		scanf("%d %d %d", &n, &s, &q);
//		for (int i = 1, tmp; i <= n; i++)
//		{
//			start[i] = 1; end[i] = 0;
//			scanf("%d", &tmp);
//			for (int j = 1; j <= tmp; j++, end[i]++)
//				scanf("%d", &que[i][j]);
//		}
//
//		while (1) {
//			for (int i = 1; i <= n; i++)
//			{
//				time += 2;
//				while (end[i] - start[i] < q && end[0] != 0 || bus[end[0]] == i) {
//					time += 1;
//					if (bus[end[0]] != i)
//						que[i][++end[i]] = bus[end[0]];
//					end[0]--;
//				}
//
//				while (start[i] <= end[i] && end[0] <= s) {
//					time += 1;
//					bus[++end[0]] = que[i][start[i]++];
//				}
//			}
//
//			int is_complete = 1;
//			for (int i = 1; i <= n; i++)
//				if (end[i] - start[i] >= 1)
//				{
//					is_complete = 0;
//					break;
//				}
//			if (is_complete && end[0] == 0) break;
//		}
//	
//		printf("%d\n", time);
//	}
//	return 0;
//}