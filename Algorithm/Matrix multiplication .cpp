///*
//2018年3月31日
//*/
//#include<stdio.h>
//const int MAXN = 110;
//const int INF = 0x7fffffff;
//
//int n, rec[MAXN] = { 0 };
//int dp[MAXN][MAXN] = { 0 };
//int dpflag[MAXN][MAXN] = { 0 };
//	
//void Solve(int n1, int n2) {
//	if (n1 == n2) {
//		printf("A%d", n1);
//		return;
//	}
//
//	int d = dpflag[n1][n2];
//	printf("(");
//	Solve(n1, d); Solve(d + 1, n2);
//	printf(")");
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n + 1; i++)
//		scanf("%d", &rec[i]);
//
//	//完成dp
//	for (int j = 2; j <= n; j++) 
//		for (int i = 1; i <= n - j + 1; i++) {
//			int s = i, e = i + j - 1;
//			dp[s][e] = INF;
//				for (int d = s; d <= e; d++) {
//					int tmp = rec[s] * rec[d + 1] * rec[e + 1] + dp[s][d] + dp[d + 1][e];
//					if (tmp < dp[s][e]) {
//						dp[s][e] = tmp;
//						dpflag[s][e] = d;
//					}
//				}
//		}
//	if (n == 1) {
//		printf("0\n");
//		printf("(A1)\n");
//	}
//	else {
//		printf("%d\n", dp[1][n]);
//		Solve(1, n);
//		printf("\n");
//	}
//	return 0;
//}