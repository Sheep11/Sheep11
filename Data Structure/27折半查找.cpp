///*
//2017Äê11ÔÂ21ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 100000
//
//typedef struct {
//	int key;
//	int data;
//}Item;
//
//int cmp(const void *a, const void *b) {
//	Item *p1 = (Item*)a, *p2 = (Item*)b;
//	return p1->key - p2->key;
//}
//
//int main() {
//	Item rec[MAXN];
//	int n; scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		scanf("%d %d", &rec[i].key, &rec[i].data);
//	qsort(&rec[1], n, sizeof(Item), cmp);
//	for (int i = 1; i <= n; i++)
//		printf("(%d %d)", rec[i].key, rec[i].data);
//	printf("\n");
//
//	int goal; scanf("%d", &goal);
//	int count, low = 1, high = n;
//	while (low<=high) {
//		count = (low + high) / 2;
//		if (rec[count].key == goal) break;
//		
//		if (goal < rec[count].key) high = count - 1;
//		else low = count + 1;
//	}
//
//	if (low <= high) printf("(%d %d)\n", rec[count].key, rec[count].data);
//	else printf("error\n");
//	return 0;
//}