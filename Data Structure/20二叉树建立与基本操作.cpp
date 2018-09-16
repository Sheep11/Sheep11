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
//}NODE;
//
//void Init_BiTree(NODE *head,char s[]) {
//	NODE *que[MAXN];
//	int front = 0, rear = 0;
//	int pos = 0, len = strlen(s);
//
//	que[rear++] = head;
//	while (front != rear) {
//		while (s[pos] == '#') pos++;
//
//		NODE *p = que[front++];
//		p->data = s[pos]; p->lchild = NULL; p->rchild = NULL;
//
//		if (2 * pos + 1 < len&& s[2 * pos + 1] != '#') {
//			p->lchild = (NODE*)malloc(sizeof(NODE));
//			que[rear++] = p->lchild;
//		}
//		if (2 * pos + 2 < len&& s[2 * pos + 2] != '#') {
//			p->rchild = (NODE*)malloc(sizeof(NODE));
//			que[rear++] = p->rchild;
//		}
//
//		pos++;
//	}
//	return;
//}
//
//void PreOrderTraverse(NODE *head, char res[],int &len) {
//	NODE *p = head;
//	res[len++] = p->data;
//	if (p->lchild != NULL) PreOrderTraverse(p->lchild, res, len);
//	if (p->rchild != NULL) PreOrderTraverse(p->rchild, res, len);
//
//	res[len] = '\0';
//	return;
//}
//
//void InOrderTraverse(NODE *head, char res[], int &len) {
//	NODE *p = head;
//	if (p->lchild != NULL) InOrderTraverse(p->lchild, res, len);
//	res[len++] = p->data;
//	if (p->rchild != NULL) InOrderTraverse(p->rchild, res, len);
//
//	res[len] = '\0';
//	return;
//}
//
//void PostOrderTraverse(NODE *head, char res[], int &len) {
//	NODE *p = head;
//	if (p->lchild != NULL) PostOrderTraverse(p->lchild, res, len);
//	if (p->rchild != NULL) PostOrderTraverse(p->rchild, res, len);
//	res[len++] = p->data;
//
//	res[len] = '\0';
//	return;
//}
//
//void outputInorder(NODE *head, int level) {
//	for (int i = 1; i <= level; i++)
//		printf("    ");
//	printf("%c\n", head->data);
//
//	if (head->lchild != NULL) outputInorder(head->lchild, level + 1);
//	if (head->rchild != NULL) outputInorder(head->rchild, level + 1);
//	
//	return;
//}
//
//void ExchangeChild(NODE *head) {
//	NODE *tmp = head->lchild;
//	head->lchild = head->rchild;
//	head->rchild = tmp;
//
//	if (head->lchild != NULL) ExchangeChild(head->lchild);
//	if (head->rchild != NULL) ExchangeChild(head->rchild);
//
//	return;
//}
//
//void CalLeaveNum(NODE *head, int &sum) {
//	if (head->lchild == NULL&&head->rchild == NULL) sum += 1;
//
//	if (head->lchild != NULL) CalLeaveNum(head->lchild, sum);
//	if (head->rchild != NULL) CalLeaveNum(head->rchild, sum);
//
//	return;
//}
//
//void output(char res[]) {
//	int i = 0;
//	while (res[i] != '\0') putchar(res[i++]);
//	printf("\n");
//	return;
//}
//
//void outputAll(char res1[], char res2[], char res3[]) {
//	printf("pre_sequence  : "); output(res1);
//	printf("in_sequence   : "); output(res2);
//	printf("post_sequence : "); output(res3);
//	
//	return;
//}
//
//int main() {
//	NODE *head = (NODE*)malloc(sizeof(NODE));
//	char rec[MAXN]; gets(rec);
//	Init_BiTree(head, rec);
//	
//	char res_preorder[MAXN], res_inorder[MAXN], res_postorder[MAXN];
//	int len_preorder = 0, len_inorder = 0, len_postorder = 0;
//
//	printf("BiTree\n");
//	outputInorder(head, 0);
//	PreOrderTraverse(head, res_preorder, len_preorder);
//	InOrderTraverse(head, res_inorder, len_inorder);
//	PostOrderTraverse(head, res_postorder, len_postorder);
//	outputAll(res_preorder, res_inorder, res_postorder);
//
//	int sum = 0; CalLeaveNum(head, sum);
//	printf("Number of leaf: %d\n", sum);
//	printf("BiTree swapped\n");
//
//	ExchangeChild(head);
//	len_preorder = 0, len_inorder = 0, len_postorder = 0;
//
//	outputInorder(head, 0);
//	PreOrderTraverse(head, res_preorder, len_preorder);
//	InOrderTraverse(head, res_inorder, len_inorder);
//	PostOrderTraverse(head, res_postorder, len_postorder);
//	outputAll(res_preorder, res_inorder, res_postorder);
//
//	return 0;
//}