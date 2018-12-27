//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAXN 31
//
//
//struct Node {
//	char h, r, c;
//	int time;
//	char flag;
//};
//
//int dh[6] = { 1,-1,0,0,0,0 }, dr[6] = { 0,0,-1,0,1,0 }, dc[6] = { 0,0,0,1,0,-1 };
//char map[MAXN][MAXN][MAXN], vis[MAXN][MAXN][MAXN];
//struct Node q[MAXN*MAXN*MAXN];
//int mst[MAXN*MAXN*MAXN][3], npos, feel;
//int height, row, col;
//
//void MeetMst(struct Node *node) {
//	int count = node->time % (2 * (npos - 1));
//	if (count >= npos) count = 2 * (npos - 1) - count;
//
//	int h = mst[count][0] + 1, r = mst[count][1] + 1, c = mst[count][2] + 1;
//	int dim = 0, gap = 0;
//
//	if (node->h == h) dim += 1;
//	else gap = abs(h - node->h);
//	if (node->r == r) dim += 1;
//	else gap = abs(r - node->r);
//	if (node->c == c) dim += 1;
//	else gap = abs(c - node->c);
//
//	if (dim >= 2 && gap<=feel) node->flag = 1;
//
//}
//
//int bfs() {
//	struct Node node;
//
//	for(int i=1;i<=height;i++)
//		for(int j=1;j<=row;j++)
//			for(int k=1;k<=col;k++)
//				if (map[i][j][k] == 'S') 
//				{
//					node.h = i; node.r = j; node.c = k; node.time = 0; node.flag = 0;
//					goto findout;
//				}
//findout:
//	;
//	int front = 0, rear = 0;
//	q[rear++] = node;
//
//	while (front < rear)
//	{
//		node = q[front++];
//
//		for (int i = 0; i < 6; i++)
//		{
//			struct Node newnode = node;
//			newnode.h += dh[i]; newnode.r += dr[i]; newnode.c += dc[i];
//
//			if (map[newnode.h][newnode.r][newnode.c] == 'E')
//			{
//				if (newnode.flag == 0) printf("Escaped in %d minute(s).\n", newnode.time + 1);
//				else printf("-1\n");
//				return 1;
//			}
//			if (map[newnode.h][newnode.r][newnode.c] == '.'&&vis[newnode.h][newnode.r][newnode.c] != 1)
//			{
//				vis[newnode.h][newnode.r][newnode.c] = 1;
//				newnode.time += 1;
//				MeetMst(&newnode);
//				q[rear++] = newnode;
//			}
//		}
//	}
//	return 0;
//}
//
//int main() {
//	while (scanf("%d %d %d", &height, &row, &col), !(height == 0 && row == 0 && col == 0))
//	{
//		if (height == 0 && row == 0 && col == 0) return 0;
//
//		for (int i = 1; i <= height; i++)
//			for (int j = 1; j <= row; j++)
//				scanf("%s", &map[i][j][1]);
//
//		scanf("%d %d", &npos, &feel);
//		for (int i = 0; i < npos; i++)
//			scanf("%d %d %d", &mst[i][0], &mst[i][1], &mst[i][2]);
//
//		if (!bfs()) printf("-1\n");
//	}
//}