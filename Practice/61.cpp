//#include<stdio.h>
//#include<string.h>
//#define MAXN 101
//
//
//int main() {
//	int n1, n2, T = 0;
//	while (scanf("%d %d",&n1,&n2), !(n1 == 0 && n2 == 0))
//	{
//		int dp[MAXN][MAXN], tow1[MAXN], tow2[MAXN];
//		memset(dp, 0, sizeof(dp));
//		for (int i = 1; i <= n1; i++)
//			scanf("%d", &tow1[i]);
//		for (int i = 1; i <= n2; i++)
//			scanf("%d", &tow2[i]);
//
//
//		for(int i=1;i<=n1;i++)
//			for (int j = 1; j <= n2; j++)
//			{
//				if (tow1[i] == tow2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
//				else dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
//			}
//
//		printf("Twin Towers #%d\n", ++T);
//		printf("Number of Tiles : %d\n", dp[n1][n2]);
//	}
//
//	return 0;
//}