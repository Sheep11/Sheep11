///*小学期程设之动态规划 23 谁更机智（博弈dp）
//	2017.9.17
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAXN 50010
//
//long long dp[MAXN];
//
//int cmp(const void *a, const void *b) {
//	if (*(int*)a > *(int*)b) return 1;
//	else return 0;
//}
//
//int main() {
//	int T;
//	scanf("%d", &T);
//
//	while (T--) {
//		int rec[MAXN], n;
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++)
//			scanf("%d", &rec[i]);
//		qsort(&rec[1], n, sizeof(int), cmp);
//
//		dp[1] = rec[1];
//		for (int i = 2; i <= n; i++)
//			dp[i] = rec[i] - dp[i - 1] > dp[i - 1] ? rec[i] - dp[i - 1] : dp[i - 1];
//
//		printf("%lld\n", dp[n]);
//	}
//	return 0;
//}
