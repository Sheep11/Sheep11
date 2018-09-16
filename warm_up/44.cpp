//#include<stdio.h>
//#include<stdlib.h>
//
//int rec[1000001];
//int main()
//{
//	long long n;
//	while (scanf("%lld", &n) != EOF)
//	{
//		long long res = 0;
//		for (int i = 0; i < n; i++)
//			scanf("%d", &rec[i]);
//
//		for (int i = n - 1; i >= 0; i--)
//		{
//			if (rec[i] >= 0) 
//				res += 1;
//			else 
//			{
//				int end = i, beg = i - 1;
//				long long tmp = rec[end];
//
//				while (beg >= 0)
//				{
//					tmp += rec[beg];
//					if (tmp >= 0) 
//					{
//						i = beg; break;
//					}
//					else beg--;
//				}
//				res += 1;
//			}
//		}
//
//		printf("%lld\n",res);
//	}
//	return 0;
//}