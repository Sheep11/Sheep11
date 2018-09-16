///*
//2018年4月9日 像贪心的dp
//*/
//
//#include<stdio.h>
//#include<algorithm>
//const int MAXN = 1510;
//
//int father[MAXN] = { 0 };
//int dp[MAXN][2] = { 0 };
//int n;
//
//void makeDP(int root) {
//	dp[root][0] = 0;
//	dp[root][1] = 1;
//	for (int i = 0; i < n; i++) 
//		if (father[i] == root) {
//			makeDP(i);
//			dp[root][0] += dp[i][1];
//			dp[root][1] += std::min(dp[i][0], dp[i][1]);
//		}
//}
//
//int main() {
//	int p, d, to;
//	int root;
//
//	while (scanf("%d", &n) != EOF) {
//		int ans = 0;
//		for (int num = 1; num <= n; num++) {
//			scanf("%d:(%d)", &p, &d);
//			if (num == 1){
//				father[p] = -1;
//				root = p;
//			}
//			for (int i = 0; i < d; i++) {
//				scanf("%d", &to);
//				father[to] = p;
//			}
//		}
//		
//		makeDP(root);
//		printf("%d\n", std::min(dp[root][0], dp[root][1]));
//	}
//
//	return 0;
//}