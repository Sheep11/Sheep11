//#include<stdio.h>
//
//const int MAXN = 11000;
//
//int main() {
//	int n, s;//n=n weeks,s=storage price/week
//	int prices[MAXN] = { 0 }, delivery[MAXN] = { 0 };
//	scanf("%d %d", &n, &s);
//	for (int i = 1; i <= n; i++)
//		scanf("%d %d", &prices[i], &delivery[i]);
//
//	int res[MAXN] = { 0 };
//	res[1] = prices[1];
//	for (int i = 2; i <= n; i++)
//		if (prices[i] < res[i - 1] + s) res[i] = prices[i];
//		else
//			res[i] = res[i - 1] + s;
//
//	long long sum = 0;
//	for (int i = 1; i <= n; i++)
//		sum += res[i] * delivery[i];
//	printf("%lld\n", sum);
//	return 0;
//}