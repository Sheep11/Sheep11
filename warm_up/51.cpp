//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAXN 2005
//
//int q[MAXN*MAXN], portal[MAXN*MAXN] = { 0 };
//int front = 0, rear = 0;
//int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
//char map[MAXN][MAXN];
//int vis[MAXN][MAXN];
//int m, n;
//int bfs(int x, int y)
//{
//	int pos = x*n + y;
//	vis[x][y] = 0;
//	q[rear++] = pos;
//
//	while (front < rear)
//	{
//		pos = q[front++];
//		x = (pos - 1) / n; y = pos - x*n;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i], ny = y + dy[i];
//
//			if (map[nx][ny] == 'C') return vis[x][y] + 1;
//			if (vis[nx][ny] < 0 && map[nx][ny] == 'E')
//			{
//				int i = 0;
//				vis[nx][ny] = vis[x][y] + 1;
//				while (portal[i] != 0)
//				{
//					pos = portal[i++];
//					vis[pos / n][pos%n] = vis[nx][ny];
//					q[rear++] = pos;
//				}
//			}
//			else if (vis[nx][ny] < 0 && map[nx][ny] == '.')
//			{
//				vis[nx][ny] = vis[x][y] + 1;
//				q[rear++] = nx*n + ny;
//			}
//		}
//	}
//	return 0;
//}
//
//
//int main() {
//	scanf("%d %d", &m, &n);
//	memset(map, 0, sizeof(map));
//	memset(vis, -1, sizeof(vis));
//	for (int i = 1; i <= m; i++)
//		scanf("%s", &map[i][1]);
//
//	int x_beg, y_beg, por = 0;
//	for(int i=1;i<=m;i++)
//		for (int j = 1; j <= n; j++)
//		{
//			if (map[i][j] == 'N') { x_beg = i, y_beg = j; }
//			if (map[i][j] == 'E') portal[por++] = i * n + j;
//		}
//
//	int res = bfs(x_beg, y_beg);
//	if (res) printf("%d\n", res);
//	else printf("Bad Eureka\n");
//	return 0;
//}