//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int yes = 0;
//struct Node {
//	double num[4];
//};
//
//void dfs(struct Node node) {
//	if (yes == 1) return;
//	int count = 0, flag = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		if (node.num[i] == -1) count++;
//		else if (node.num[i] == 24) flag = 1;
//	}
//	if (count == 3 && flag == 1) { printf("YES\n"); yes = 1; return; }
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (node.num[i] == -1) continue;
//		for (int j = 0; j < 4; j++)
//		{
//			if (node.num[j] == -1 || j == i) continue;
//			for (int o = 0; o < 4; o++)
//			{
//				struct Node newnode = node;
//				switch (o)
//				{
//				case 0:newnode.num[i] += newnode.num[j]; break;
//				case 1:newnode.num[i] -= newnode.num[j]; break;
//				case 2:newnode.num[i] *= newnode.num[j]; break;
//				case 3:if (newnode.num[j] != 0)
//					newnode.num[i] /= newnode.num[j];
//					break;
//				default:
//					break;
//				}
//				newnode.num[j] = -1;
//				dfs(newnode);
//			}
//		}
//	}
//	return;
//}
//
//int main() {
//	int rec[4];
//
//	while (scanf("%d %d %d %d", &rec[0], &rec[1], &rec[2], &rec[3]))
//	{
//		if (rec[0] == 0 && rec[1] == 0 && rec[2] == 0 && rec[3] == 0) return 0;
//
//		yes = 0;
//		struct Node node;
//		for (int i = 0; i < 4; i++)
//			node.num[i] = rec[i];
//
//		for (int i = 0; i < 4; i++)
//			dfs(node);
//		if (yes == 0) printf("NO\n");
//
//	}
//	return 0;
//}