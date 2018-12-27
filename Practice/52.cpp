//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 12
//
//int n, res = 0;
//struct Node {
//	int row;
//	int colm;
//	int count;
//	int vis[MAXN];
//	int left_dia[2 * MAXN], right_dia[2 * MAXN];
//};
//
//int CheckNode(struct Node node) {
//	if (node.vis[node.colm] == 0 && node.left_dia[node.colm - node.row + MAXN] == 0 && node.right_dia[node.colm + node.row] == 0) return 1;
//	else return 0;
//}
//
//void dfs(struct Node node) {
//	for (int i = 0; i < n; i++)
//	{
//		struct Node newnode = node;
//		newnode.row += 1;
//		if (newnode.row >= n) return;
//		newnode.colm = i;
//		if (CheckNode(newnode))
//		{
//			newnode.vis[i] = 1;
//			newnode.left_dia[newnode.colm - newnode.row + MAXN] = 1;
//			newnode.right_dia[newnode.colm + newnode.row] = 1;
//			newnode.count += 1;
//			if (newnode.count == n) res += 1;
//			dfs(newnode);
//		}
//	}
//	return;
//}
//
//int main() {
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		struct Node node;
//		node.row = 0; node.colm = i; node.count = 1;
//		memset(node.vis, 0, sizeof(node.vis));
//		memset(node.left_dia, 0, sizeof(node.left_dia));
//		memset(node.right_dia, 0, sizeof(node.right_dia));
//
//		node.vis[i] = 1;
//		node.left_dia[node.colm - node.row + MAXN] = 1;
//		node.right_dia[node.colm + node.row] = 1;
//		if (node.count == n) res += 1;
//		dfs(node);
//	}
//	printf("%d\n", res);
//	return 0;
//}