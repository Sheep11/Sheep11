///*
//2017Äê11ÔÂ13ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//
//typedef struct {
//	int weight;
//	int lchild, rchild, parent;
//}HTree;
//
//HTree *CreateHTree(int n, int *w) {
//	int sum = 2 * n - 1;
//	HTree *htree = (HTree*)malloc(sizeof(HTree)*sum);
//
//	HTree *p; int i;
//	htree[0].weight = 0x3f3f3f3f;
//	for (p = &htree[1], i = 1; i <= n; p++, i++) {
//		p->lchild = p->rchild = 0;
//		p->parent = 0;
//		p->weight = w[i];
//	}
//	for (p = &htree[n + 1]; p <= &htree[sum]; p++) {
//		p->lchild = p->rchild = p->parent = 0;
//		p->weight = 0;
//	}
//
//	for (int i = n; i < sum; i++) {
//		int pos1 = 0, pos2 = 0;
//		for (int j = 1; j <= i; j++) {
//			if ((htree[j].weight < htree[pos1].weight || htree[j].weight < htree[pos2].weight) && htree[j].parent == 0)
//				if (htree[pos1].weight > htree[pos2].weight) pos1 = j;
//				else pos2 = j;
//		}
//		htree[pos1].parent = htree[pos2].parent = i + 1;
//		htree[i + 1].lchild = pos1; htree[i + 1].rchild = pos2;
//		htree[i + 1].weight = htree[pos1].weight + htree[pos2].weight;
//	}
//	return htree;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int *w = (int*)malloc(sizeof(int)*(n + 1));
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &w[i]);
//
//	HTree *htree = CreateHTree(n, w);
//	int sum = 0;
//	for (int i = n + 1; i <= 2 * n - 1; i++)
//		sum += htree[i].weight;
//	printf("WPL=%d\n", sum);
//
//	return 0;
//}