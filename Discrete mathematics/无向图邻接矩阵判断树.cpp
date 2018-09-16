///*
//2017Äê12ÔÂ13ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 1000
//
//int visited[MAXN] = { 0 }, count = 0, n;
//int matrix[MAXN][MAXN] = { 0 };
//
//int DFS(int cur, int source) {
//	if (!visited[cur]) {
//		visited[cur] = 1; count++;
//		for (int next = 1; next <= n; next++) {
//			if (next != source&&matrix[cur][next])
//				if (visited[next]) return false;
//				else if (!DFS(next, cur)) return false;
//		}
//		return true;
//	}
//	else return false;
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			scanf("%d", &matrix[i][j]);
//
//	if (DFS(1, 0) && count == n) printf("yes\n");
//	else printf("no\n");
//
//	return 0;
//}