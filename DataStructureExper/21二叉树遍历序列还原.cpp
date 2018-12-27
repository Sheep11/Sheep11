///*
//2017Äê11ÔÂ7ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 100000
//
//typedef struct node {
//	char data;
//	struct node *lchild, *rchild;
// }NODE;
//
//NODE *CreateBiTree(char inorder[], char postorder[], int beg, int end) {
//	if (beg == end) return NULL;
//
//	NODE *p = (NODE*)malloc(sizeof(NODE));
//	int pos;
//	for (int i = strlen(postorder) - 1; i >= 0; i--)
//		for (pos = beg; pos < end; pos++)
//			if (inorder[pos] == postorder[i]) goto find_pos;
//
//find_pos:
//	p->data = inorder[pos];
//	p->lchild = CreateBiTree(inorder, postorder, beg, pos);
//	p->rchild = CreateBiTree(inorder, postorder, pos + 1, end);
//
//	return p;
//}
//
//void Output(NODE *head) {
//	NODE *que[MAXN];
//	int front = 0, rear = 0;
//
//	que[rear++] = head;
//	while (front != rear) {
//		NODE *p = que[front++];
//		putchar(p->data);
//
//		if (p->lchild != NULL) que[rear++] = p->lchild;
//		if (p->rchild != NULL) que[rear++] = p->rchild;
//	}
//	printf("\n");
//}
//
//int main() {
//	char inorder[MAXN], postorder[MAXN];
//	gets(inorder); gets(postorder);
//
//	NODE *head = CreateBiTree(inorder, postorder, 0, strlen(inorder));
//	Output(head);
//
//	return 0;
//}