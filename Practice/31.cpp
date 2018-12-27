//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//void sort(long long a[], int left, int right)
//{
//	if (left >= right) return;
//	int i = left, j = right;
//	long long key = a[left];
//
//	while (i<j)
//	{
//		while (i<j&&key <= a[j]) j--;
//		a[i] = a[j];
//		while (i<j&&key >= a[i]) i++;
//		a[j] = a[i];
//	}
//	a[i] = key;
//	sort(a, left, i - 1);
//	sort(a, i + 1, right);
//}
//
//long long x[100001] = { 0 };
//long long y[100001] = { 0 };
//int main() {
//	int T;
//	scanf("%d", &T);
//
//	for (int i = 0; i < T; i++)
//	{
//		scanf("%lld %lld", &x[i], &y[i]);
//	}
//	sort(x, 0, T - 1);
//	sort(y, 0, T - 1);
//
//	long long x0 = x[T / 2], y0 = y[T / 2];
//	long long res = 0;
//	for (int i = 0; i<T; i++)
//	{
//		res = res + abs(x[i] - x0) + abs(y[i] - y0);
//	}
//	printf("%lld\n", res);
//	return 0;
//}