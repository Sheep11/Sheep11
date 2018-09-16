///*
//2017Äê10ÔÂ28ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 105
//
//int n, found = 0;
//int path[MAXN][2], pos = 0;
//int map[MAXN][MAXN], dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
//
//void Search(int, int);
//
//int main() {
//	for (int i = 0; i < MAXN; i++)
//		for (int j = 0; j < MAXN; j++)
//			map[i][j] = 1;
//
//	scanf("%d %d", &n,&n);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			scanf("%d", &map[i][j]);
//
//	Search(1,1);
//
//	//output
//	if (!found) printf("There is no solution!");
//	else 
//		for (int i = pos - 1; i >=0; i--) 
//			printf("<%d,%d> ", path[i][0], path[i][1]);
//	printf("\n");
//
//	return 0;
//}
//
//void Search(int x, int y) {
//	if (map[x][y] == 1) return;
//	if (x == n&&y == n)
//		found = 1;
//
//	map[x][y] = 1;
//	for (int i = 0; i < 4; i++) 
//		if (!found) Search(x + dx[i], y + dy[i]);
//
//	if (found) {
//		path[pos][0] = x;
//		path[pos][1] = y;
//		pos++;
//	}
//}