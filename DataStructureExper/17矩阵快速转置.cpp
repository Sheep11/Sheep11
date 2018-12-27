///*
//2017Äê11ÔÂ6ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 10000
//
//typedef struct {
//	int row, col;
//	int e;
//}Triple;
//
//typedef struct TMatrix {
//	Triple data[MAXN];
//	int m, n, t;
//}TMatrix;
//
//int main() {
//	int num[MAXN] = { 0 }, cpot[MAXN] = { 0 };
//	TMatrix matrix;
//
//	scanf("%d %d %d", &matrix.m, &matrix.n, &matrix.t);
//	for (int i = 1; i <= matrix.t; i++) {
//		scanf("%d %d %d", &matrix.data[i].row, &matrix.data[i].col, &matrix.data[i].e);
//		num[matrix.data[i].col] += 1;
//	}
//	for (int i = 1; i <= matrix.n; i++)
//		cpot[i] = 1;
//	for (int i = 1; i < matrix.n; i++)
//		for (int j = i + 1; j <= matrix.n; j++)
//			cpot[j] += num[i];
//
//	printf("num:");
//	for (int i = 1; i <= matrix.n; i++)
//		printf("%d,", num[i]);
//	printf("\n");
//	printf("cpot:");
//	for (int i = 1; i <= matrix.n; i++)
//		printf("%d,", cpot[i]);
//	printf("\n");
//
//	TMatrix t;
//	t.m = matrix.n; t.n = matrix.m; t.t = matrix.t;
//	for (int i = 1; i <= matrix.t; i++) {
//		int pos = cpot[matrix.data[i].col]++;
//		t.data[pos].row = matrix.data[i].col;
//		t.data[pos].col = matrix.data[i].row;
//		t.data[pos].e = matrix.data[i].e;
//	}
//	
//	for (int i = 1; i <= t.t; i++)
//		printf("%d,%d,%d\n", t.data[i].row, t.data[i].col, t.data[i].e);
//	return 0;
//}