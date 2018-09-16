///*
//2017Äê12ÔÂ8ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 10
//
//int main() {
//	int n; scanf("%d", &n);
//	int matrix[MAXN][MAXN] = { 0 };
//	int visited[MAXN] = { 0 };
//
//	int a, b;
//	while (scanf("%d %d", &a, &b), a != -1) {
//		matrix[a][b] = 1;
//		matrix[b][a] = 1;
//	}
//
//	int seq[100000] = { 0 }, front = 0, rear = 0;
//	for (int i = 0; i < n; i++) {
//		if (visited[i]) continue;
//
//		seq[rear++] = i;
//		visited[i] = 1; printf("%d", i);
//		while (front != rear) {
//			int vex = seq[front++];
//			for (int next = 0; next < n; next++) 
//				if (matrix[vex][next] && visited[next] == 0) {
//					seq[rear++] = next;
//					visited[next] = 1; printf("-%d", next);
//				}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}