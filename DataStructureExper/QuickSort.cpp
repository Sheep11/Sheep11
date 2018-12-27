///*
//2017Äê12ÔÂ9ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 10000
//
//int n = 1, rec[MAXN] = { 0 };
//int medians[MAXN] = { 0 }, count = 0;
//
//void swap(int &a, int &b) {
//	int tmp;
//	tmp = a; a = b; b = tmp;
//}
//
//void GetMedian(int seq[], int start, int end) {
//	int a[3] = { start,(start + end) / 2,end };
//
//	int tmp;
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 2 - i; j++)
//			if (seq[a[j]] > seq[a[j + 1]]) {
//				tmp = a[j + 1];
//				a[j + 1] = a[j];
//				a[j] = tmp;
//			}
//	
//	int sorted_three[3] = { seq[a[0]],seq[a[1]],seq[a[2]] };
//	seq[start] = sorted_three[0]; 
//	seq[(start + end) / 2] = seq[end - 1];
//	seq[end - 1] = sorted_three[1];
//	seq[end] = sorted_three[2];
//
//	/*int mid = (start + end) / 2;
//	if (seq[start] > seq[mid]) swap(seq[start], seq[mid]);
//	if (seq[mid] > seq[end]) swap(seq[mid], seq[end]);
//	if (seq[start] > seq[mid])swap(seq[start], seq[mid]);
//	swap(seq[mid], seq[end - 1]);*/
//}
//
//void InsertSort(int seq[], int start, int end) {
//	int tmp;
//	for (int i = start + 1; i <= end; i++) {
//		tmp = seq[i];
//		int pos = start;
//		while (tmp > seq[pos] && pos < i) pos++;
//
//		for (int j = i - 1; j >= pos; j--)
//			seq[j + 1] = seq[j];
//		seq[pos] = tmp;
//	}
//}
//
//void QSort(int seq[], int start, int end) {
//	if (end - start + 1 <= 5) {
//		InsertSort(seq, start, end);
//	}
//	else if (start < end) {
//		GetMedian(seq, start, end);
//		int pivotkey = seq[end - 1];
//		medians[++count] = pivotkey;
//
//		int low = start, high = end - 1, tmp;
//		while (low < high) {
//			while (low < high&&seq[++low] < pivotkey);
//			while (low < high&&seq[--high] > pivotkey);
//
//			tmp = seq[low]; seq[low] = seq[high]; seq[high] = tmp;
//		}
//		seq[end - 1] = seq[low]; seq[low] = pivotkey;
//
//		QSort(seq, start, low - 1);
//		QSort(seq, low + 1, end);
//
//	}
//}
//
//int main() {
//	int num = 0; char c; bool minus = false;
//	while (c = getchar(), c != '#') {
//		if (c == '\n') {
//			if (minus == true) num = -num;
//			rec[n++] = num;
//			num = 0; minus = false;
//		}
//		else if (c == '-') minus = true;
//		else num = num * 10 + c - '0';
//	}
//
//	QSort(rec, 1, n - 1);
//
//	printf("After Sorting:\n");
//	for (int i = 1; i < n; i++)
//		printf("%d ", rec[i]);
//	printf("\n");
//	printf("Median3 Value:\n");
//	if (count != 0)
//		for (int i = 1; i <= count; i++)
//			printf("%d ", medians[i]);
//	else printf("none");
//	printf("\n");
//
//	return 0;
//}
