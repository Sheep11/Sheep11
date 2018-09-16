///*
//2017Äê12ÔÂ8ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 200
//
//int Search(char key, char table[]) {
//	for (int i = 1; table[i] != '\0'; i++)
//		if (table[i] == key) return i;
//	return 0;
//}
//
//int main() {
//	int n = 1;
//	char table[MAXN] = { '\0' };
//	char rec[MAXN][MAXN];
//
//	int row = 0;
//	while (gets(rec[row]) != nullptr)
//		row++;
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; rec[i][j] != '\0'; j++) {
//			char key = rec[i][j];
//			if (key != ' ') {
//				for (int k = 1; k <= n; k++) {
//					if (table[k] == key) break;
//					if (table[k] == '\0' || table[k] > rec[i][j]) {
//						for (int u = n - 1; u >= k; u--)
//							table[u + 1] = table[u];
//						table[k] = key; n++;
//						break;
//					}
//				}
//			}
//		}
//	}
//	int res[MAXN][MAXN] = { 0 };
//
//	for (int i = 0; i < row; i++) {
//		int a = Search(rec[i][0], table), b;
//		for (int j = 1; rec[i][j] != '\0'; j++) {
//			if (rec[i][j] != ' ') {
//				b = Search(rec[i][j], table);
//				res[a][b] += 1;
//			}
//		}
//	}
//
//	for (int i = 1; i < n; i++) {
//		for (int j = 1; j < n; j++) {
//			if (j == 1) printf("%d", res[i][j]);
//			else printf(" %d", res[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}