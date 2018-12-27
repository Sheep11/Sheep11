//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void sort(int a[1001], int left, int right)
//{
//	if (left >= right) return;
//	int i = left, j = right, key = a[left];
//
//	while (i < j) {
//		while (i < j&&a[j] <= key) j--;
//		a[i] = a[j];
//		while (i < j&&a[i] >= key) i++;
//		a[j] = a[i];
//	}
//	a[i] = key;
//	sort(a, left, i - 1);
//	sort(a, i + 1, right);
//}
//
//int main() {
//	int T;
//	scanf("%d", &T);
//
//	while (T--) {
//		unsigned int n, m;
//		int cla[100001] = { 0 }, bus[1001] = { 0 };
//		scanf("%d %d", &n, &m);
//
//		for (int i = 0, a, b, c; i < n; i++)
//		{
//			scanf("%d", &a); getchar();
//			scanf("%d %d", &b, &c);
//			cla[i] = a * 60 + b + c * 45 + (c - 1) * 10;
//		}
//		for (int i = 0, a, b; i < m; i++)
//		{
//			scanf("%d", &a); getchar();
//			scanf("%d", &b);
//			bus[i] = a * 60 + b;
//		}
//
//		sort(bus, 0, m - 1);
//		int num = 0, min = 10000;
//		for (int i = 0; i < n; i++)
//		{
//			if (min == 15) break;
//			for (int j = 0; j < m; j++)
//			{
//				if (bus[j] - cla[i] >= 15 && bus[j] - cla[i] < min)
//				{
//					num = i + 1;
//					min = bus[j] - cla[i];
//				}
//				else if (bus[j] - cla[i] < 15) break;
//			}
//		}
//		if (num == 0) printf("poor Ff!\n");
//		else printf("%d\n", num);
//
//	}
//	return 0;
//
//}