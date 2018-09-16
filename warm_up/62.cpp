///*小学期程设之动态规划 22 穿越矩阵
//	2017.9.16
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAXR 11
//#define MAXC 101
//
//int row, col;
//struct Node {
//	int wasted;
//	int path[MAXC];
//};
//
//int cmp(const void *a, const void *b) {
//	if (*(int*)a > *(int*)b) return 1;
//	else return 0;
//}
//
//int cmp_path(struct Node a, struct Node b, int n) {
//	for (int i = 0; i < n; i++)
//	{
//		if (a.path[i] < b.path[i]) return 1;
//		else if (a.path[i] > b.path[i]) return 0;
//	}
//}
//
//int main() {
//	
//	while (scanf("%d %d", &row, &col)!=EOF) {
//		struct Node dp[MAXR][MAXC];
//		int map[MAXR][MAXC];
//
//		for (int i = 0; i < row; i++)
//			for (int j = 0; j < col; j++)
//				scanf("%d", &map[i][j]);
//
//		
//		for (int i = 0; i < row; i++)
//		{
//			struct Node node;
//			node.wasted = map[i][0];
//			node.path[0] = i + 1;
//			dp[i][0] = node;
//		}
//
//		for(int j=1;j < col;j++)
//			for (int i = 0; i < row; i++)
//			{
//				int a[3] = { i - 1,i,i + 1 };
//				if (i == 0) a[0] = row - 1;
//				if (i == row - 1) a[2] = 0;
//				qsort(a, 3, sizeof(int),cmp);
//
//				struct Node newnode = dp[a[0]][j - 1];
//				for (int k = 1; k < 3; k++)
//					if (dp[a[k]][j - 1].wasted < newnode.wasted || (dp[a[k]][j - 1].wasted == newnode.wasted && cmp_path(dp[a[k]][j - 1], newnode, j)))
//						newnode = dp[a[k]][j - 1];
//
//				newnode.wasted += map[i][j];
//				newnode.path[j] = i + 1;
//				dp[i][j] = newnode;
//			}
//
//		struct Node min = dp[0][col - 1];
//		for (int i = 1; i < row; i++)
//			if (dp[i][col - 1].wasted < min.wasted)
//				min = dp[i][col - 1];
//			else if (dp[i][col - 1].wasted == min.wasted && cmp_path(dp[i][col - 1], min, col))
//				min = dp[i][col - 1];
//
//		for (int i = 0; i < col - 1; i++)
//			printf("%d ", min.path[i]);
//		printf("%d\n%d\n", min.path[col - 1], min.wasted);
//	}
//	return 0;
//}