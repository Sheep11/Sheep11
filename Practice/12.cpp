//#include<stdlib.h>
//#include<stdio.h>
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int rec[101][101] = { -1 };
//
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			scanf("%d", &rec[i][j]);
//
//	int flag = 0;
//	for(int i=0;i<n;i++)
//		for (int j = 0; j < m; j++)
//		{
//			for(int tmp1=0;tmp1<m;tmp1++)
//				if (rec[i][j] < rec[i][tmp1])
//				{
//					for (int tmp2 = 0; tmp2 < n; tmp2++)
//						if (rec[i][j] < rec[tmp2][j]) flag = 1;
//				} 
//			if (flag == 1) goto res;
//		}
//
//res: if (flag == 0) printf("YES\n");
//	 else printf("NO\n");
//}