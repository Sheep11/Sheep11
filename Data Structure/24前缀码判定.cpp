///*
//2017Äê11ÔÂ14ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 100000
//
//typedef struct node {
//	struct node *lchild, *rchild;
//}NODE;
//
//int main() {
//	int n;
//	scanf("%d", &n); getchar();
//	int T = n;
//	NODE *tree = (NODE*)malloc(sizeof(NODE));
//	tree->lchild = tree->rchild = NULL;
//
//	while (T--) {
//		char rec[100000]; gets_s(rec);
//		int yes = false;
//		NODE *p = tree;
//		if (n - 1 == T) yes = true;
//
//		if (T == n - 1) yes = true;
//		for (int i = 0; rec[i] != '\0'; i++) {
//			NODE *parent = p;
//			if (rec[i] == '0') p = p->lchild;
//			else p = p->rchild;
//
//			if (p == NULL && !yes) {
//				if (parent->lchild == NULL&&parent->rchild == NULL) break;
//				else yes = true;
//			}
//			if (yes) {
//				NODE *np = (NODE*)malloc(sizeof(NODE));
//				p = np;
//				np->lchild = np->rchild = NULL;
//				if (rec[i] == '0') parent->lchild = np;
//				else parent->rchild = np;
//			}
//		}
//
//		if (!yes) {
//			printf("%s\n", rec);
//			return 0;
//		}
//	}
//	printf("YES\n");
//
//	return 0;
//}