///*
//2017Äê12ÔÂ14ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 200
//
//int main() {
//	int matrix[MAXN][MAXN] = { 0 }, loc[MAXN] = { 0 }, dim;
//	scanf("%d", &dim);
//	int n = 1 << dim;
//
//	for (int i = 0, tmp; i < n; i++) {
//		scanf("%d", &tmp);
//		loc[tmp] = i;
//	}
//
//	for (int i = 0; i < n; i++) {
//		int vex = 0;
//		while (loc[vex] != i) vex++;
//
//		for (int j = 0; j < dim; j++) {
//			int temp = vex >> j;
//			if (temp % 2 == 1) matrix[i][loc[vex - (1 << j)]] = 1;
//			else
//				matrix[i][loc[vex + (1 << j)]] = 1;
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++)
//			if (j == 0) printf("%d", matrix[i][j]);
//			else printf(" %d", matrix[i][j]);
//			printf("\n");
//	}
//
//	return 0;
//}