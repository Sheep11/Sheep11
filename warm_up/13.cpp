//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int n, m, count = 0;
//	int movex[] = { -1,-1,0,1,1,1,0,-1 }, movey[] = { 0,1,1,1,0,-1,-1,-1 };
//	while (scanf("%d %d", &n, &m), !(n == 0 && m == 0))
//	{
//		count += 1;
//		char rec[101][101] = { '\0' }, res[101][101] = { '\0' };
//		for (int i = 0; getchar(), i < n; i++)
//			for (int j = 0; j < m; j++)
//				scanf("%c", &rec[i][j]);
//
//		for(int x = 0; x < n; x++)
//			for (int y = 0; y < m; y++)
//			{
//				int boom = 0;
//				if (rec[x][y] == '*') res[x][y] = '*';
//				else
//				{
//					for (int tmp = 0; tmp < 8; tmp++)
//					{
//						if (x + movex[tmp] >= 0 && x + movex[tmp] < n&&y + movey[tmp] >= 0 && y + movey[tmp] < m)
//							if (rec[x + movex[tmp]][y + movey[tmp]] == '*') boom += 1;
//					}
//					res[x][y] = boom + '0';
//				}
//			}
//		
//		if (count > 1) printf("\n");
//		printf("Field #%d:\n", count);
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j <= m; j++)
//			{
//				if (j != m) printf("%c", res[i][j]);
//				else printf("\n");
//			}
//	}
//}