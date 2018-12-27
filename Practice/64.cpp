/////*小学期程设之动态规划 24 呵呵呵（男女男）
////	2017.9.16
////*/
//
//#include<stdio.h>
//#define MAXN 1000010
//#define INF 0x3f3f3f3f
//
//int dp[MAXN];
//int main() {
//	int T, n = -1, rec[1001];
//	scanf("%d", &T);
//
//	for (int i = 0; i < T; i++)
//	{
//		scanf("%d", &rec[i]);
//		if (rec[i] > n) n = rec[i];
//	}
//
//		dp[1] = 2; dp[2] = 4; dp[3] = 6; dp[4] = 9;
//		for (int i = 5; i <= n; i++)
//			dp[i] = (dp[i - 1] + dp[i - 3] + dp[i - 4]) % 666;
//
//		for(int i=0;i<T;i++)
//			printf("%d\n", dp[rec[i]]);
//
//
//	return 0;
//}