///*小学期程设之欢度国庆 30 递归
//2017.9.25
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#define MAXN 131172
//#define N 100
//
//int a[N + 5][MAXN + 5], ans[N + 10][N + 10];
//int main() {
//	//freopen("in76.txt", "r", stdin);
//	for (int i = 2; i <= MAXN; i++)
//		scanf("%d", &a[1][i]);
//	for (int i = 2; i <= N; i++)
//		scanf("%d", &a[i][1]);
//
//	for (int i = 2; i <= N; i++)
//		for (int j = 2; j <= MAXN; j++) {
//			a[i][j] = a[i - 1][j] ^ a[i][j - 1];
//			if (j >= MAXN - N + 2) ans[i][j - MAXN + N] = a[i][j];
//		}
//
//	for (int i = 2, tmp; i <= N; i++) {
//		tmp = a[1][i];
//		a[1][i] = a[i][1];
//		a[i][1] = tmp;
//	}
//	for (int i = N + 1; i <= MAXN; i++)
//		scanf("%d", &a[1][i]);
//
//	for(int j=2;j<=N;j++)
//		for (int i = 2; i <= MAXN; i++) {
//			a[j][i] = a[j - 1][i] ^ a[j][i - 1];
//			if (i >= MAXN - N + 2) ans[i - MAXN + N][j] ^= a[j][i];
//		}
//
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int tmp1, tmp2;
//		scanf("%d %d", &tmp1, &tmp2);
//
//		printf("%d\n", ans[tmp1][tmp2]);
//	}
//
//	return 0;
//}