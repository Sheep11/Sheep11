//#include<stdlib.h>
//#include<stdio.h>
//
//void HeapAdjust(long long heap[], int start, int end) {
//	int i = start * 2 + 1;
//	long long tmp = heap[start];
//	while (i <= end)
//	{
//		if (heap[i + 1] < heap[i] && i + 1 <= end) i++;
//		if (tmp < heap[i]) break;
//		else
//		{
//			heap[start] = heap[i];
//			start = i;
//			i = start * 2 + 1;
//		}
//	}
//	heap[start] = tmp;
//}
//
//
//
//int main() {
//	int n;
//	long long rec[10001] = { 0 }, energy = 0, min = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%lld", &rec[i]);
//
//	for (int i = n / 2 - 1; i >= 0; i--)
//		HeapAdjust(rec, i, n - 1);
//
//	int count = n - 1;
//	if (count == 0)
//	{
//		printf("0\n");
//		return 0;
//	}
//	else while (count != 0)
//	{
//		energy += rec[0];
//		min = rec[0];
//		rec[0] = rec[count];
//		HeapAdjust(rec, 0, --count);
//		energy += rec[0];
//		rec[0] += min;
//		HeapAdjust(rec, 0, count);
//	}
//	printf("%lld\n", energy);
//	return 0;
//}