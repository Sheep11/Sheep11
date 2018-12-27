//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double rec[21] = { -1 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lf", &rec[i]);
//	}
//
//	double wide = rec[0], narrow = 0;
//	for (int i = 1; i < n; i++)
//	{
//		double res = rec[i] / rec[i - 1];
//		if (res > 1.9/1.05)
//		{
//			narrow = wide;
//			wide = rec[i];
//			break;
//		}
//	}
//
//	for(int i=0;i<n-1;i++)
//		for (int j = i + 1; j<n;j++)
//		{
//			if (!((rec[j] / rec[i] > 0.95 / 1.05&&rec[j] / rec[i] < 1.05 / 0.95) || (rec[j] / rec[i] > 1.9 / 1.05&&rec[j] / rec[i] < 2.1 / 0.95) || (rec[j] / rec[i] < 1.05 / 1.9&&rec[j] / rec[i] > 0.95 / 2.1)))
//			{
//				printf("Bad Barcodes\n");
//				return 0;
//			}
//		}
//
//	for (int i = 0; i < n; i++)
//	{
//		double res = rec[i] / wide;
//		if (res < 0.7) printf("0");
//		else printf("1");
//	}
//	printf("\n");
//
//	return 0;
//}