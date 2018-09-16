///*
//2017Äê11ÔÂ15ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 100
//
//int main() {
//	int matrix[MAXN][MAXN] = { 0 }, n = 0;
//	char rec[MAXN];
//
//	for (char c = getchar(); c != '*'; c = getchar())
//		if (c != '\n') {
//			rec[n] = c;
//			n += 1;
//			}
//
//	int i, j;
//	while (scanf("%d,%d", &i, &j), i != -1 || j != -1) {
//		matrix[i][j] = 1;
//		matrix[j][i] = 1;
//	}
//	printf("the ALGraph is\n");
//	for (int i = 0; i < n; i++) {
//		printf("%c", rec[i]);
//		for (int j = n - 1; j >= 0; j--)
//			for (int k = 0; k < matrix[i][j]; k++)
//				printf(" %d", j);
//		printf("\n");
//	}
//
//	int que[100000] = { 0 }, res[MAXN] = { 0 }, flag[MAXN] = { 0 };
//	int front = 0, rear = 0;
//	int count = 0, start = 0;
//
//	do {
//		que[rear++] = start;
//		flag[start] = 1;
//		while (front != rear) {
//			int h = que[front++];
//			res[count++] = h;
//			for (int col = n - 1; col >= 0; col--)
//				if (matrix[h][col] == 1 && flag[col] == 0) {
//					que[rear++] = col;
//					flag[col] = 1;
//				}
//		}
//
//		start = 0;
//		for (int i = 0; i < n; i++)
//			if (flag[i] == 0) {
//				start = i;
//				break;
//			}
//
//	} while (start != 0);
//
//	printf("the Breadth-First-Seacrh list:");
//	for (int i = 0; i < n; i++)
//		printf("%c", rec[res[i]]);
//	printf("\n");
//
//	return 0;
//}