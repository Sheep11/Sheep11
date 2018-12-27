///*
//2017Äê12ÔÂ11ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 100000
//#define TIMES 2
//
//void swap(int &a, int &b) {
//	int tmp;
//	tmp = a; a = b; b = tmp;
//}
//
//void HeapAdjust(int heap[], int start, int end) {
//	int child = start * 2 + 1, tmp = heap[start];
//
//	while (child <= end) {
//		if (heap[child + 1] > heap[child] && child + 1 <= end) child++;
//		if (tmp > heap[child]) break;
//		else {
//			heap[start] = heap[child];
//			start = child; child = start * 2 + 1;
//		}
//	}
//	heap[start] = tmp;
//}
//
//void CreateHeap(int heap[], int start, int end) {
//	for (int i = (end - 1) / 2; i >= start; i--)
//		HeapAdjust(heap, i, end);
//}
//
//void output(int heap[], int end) {
//	for (int i = 0; i <= end; i++)
//		printf("%d ", heap[i]);
//	printf("\n");
//}
//
//int main() {
//	int len, heap[MAXN] = { 0 };
//	scanf("%d", &len);
//	for (int i = 0; i < len; i++)
//		scanf("%d", &heap[i]);
//
//	int end = len - 1;
//
//	CreateHeap(heap, 0, end);
//	output(heap, end);
//	for (int i = 1; i <= TIMES; i++) {
//		swap(heap[0], heap[end--]);
//		HeapAdjust(heap, 0, end);
//		output(heap, end);
//	}
//
//
//	return 0;
//}