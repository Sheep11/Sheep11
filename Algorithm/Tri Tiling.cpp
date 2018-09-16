///*
//2018年3月28日，简单动规
//*/
//
//#include<stdio.h>
//
//const int MAXN = 40;
//
//int main() {
//	int res[MAXN] = { 0 }, n;
//	res[0] = 1, res[1] = 2, res[2] = 3;
//
//	for (int i = 3; i <= MAXN; i++) {
//		if (i % 2 == 1)
//			res[i] = res[i - 2] + 2 * res[i - 1];
//		else
//			res[i] = res[i - 2] + res[i - 1];
//	}
//
//	while (scanf("%d", &n), n != -1) {
//		if (n % 2 == 1) printf("0\n");
//		else printf("%d\n", res[n]);
//	}
//
//	return 0;
//} 