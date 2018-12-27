///*
//2017Äê12ÔÂ5ÈÕ
//*/
//#include<iostream>
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 10000
//
//typedef struct node {
//	int data;
//	struct node *lchild, *rchild;
// }NODE,*pNODE;
//
//NODE *SearchBST(NODE *proot,int key) {
//	NODE *p = proot, *f = NULL;
//	while (p&&p->data != key) {
//		f = p;
//		if (key > p->data) p = p->rchild;
//		else p = p->lchild;
//	}
//	return f;
//}
//
//void InsertBST(pNODE *proot, int key) {
//	NODE *s = (NODE*)malloc(sizeof(NODE));
//	s->lchild = s->rchild = NULL; s->data = key;
//
//	if (*proot == NULL) *proot = s;
//	else {
//		NODE *f = SearchBST(*proot, key);
//		if (key > f->data) f->rchild = s;
//		else f->lchild = s;
//	}
//}
//
//void InOrderTraverse(NODE *head, int res[], int &len, int level) {
//	NODE *p = head;
//	if (p->lchild != NULL) InOrderTraverse(p->lchild, res, len, level + 1);
//
//	res[len++] = p->data;
//	for (int i = 1; i <= level; i++)
//		printf("    ");
//	printf("%d\n", head->data);
//
//	if (p->rchild != NULL) InOrderTraverse(p->rchild, res, len, level + 1);
//
//	return;
//}
//
//int main() {
//	NODE *proot = NULL;
//
//	int rec[MAXN] = { 0 }, n = 0;
//	do {
//		scanf("%d", &rec[n++]);
//	} while (rec[n - 1] != 0);
//	n--;
//
//	for (int i = 0; i < n; i++) 
//		InsertBST(&proot, rec[i]);
//
//	int res[MAXN] = { 0 }, len = 0;
//	InOrderTraverse(proot, res, len, 0);
//	//printf("%d", proot->data);
//	printf("\n");
//	for (int i = 0; i < len; i++)
//		printf(" %d", res[i]);
//	printf("\n");
//
//	return 0;
//}
