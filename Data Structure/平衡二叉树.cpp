///*
//2017Äê12ÔÂ8ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#include<malloc.h>
//#define MAXN 10000
//#define LH 1
//#define EH 0
//#define RH -1
//
//typedef struct BSTNode {
//	char data;
//	struct BSTNode *lchild, *rchild;
//	int bf;
//}NODE,*pNODE;
//
//void R_Rotate(pNODE &p) {
//	pNODE child = p->lchild;
//	
//	p->lchild = child->rchild;
//	child->rchild = p;
//	p = child;
//}
//
//void L_Rotate(pNODE &p) {
//	pNODE child = p->rchild;
//
//	p->rchild = child->lchild;
//	child->lchild = p;
//	p = child;
//}
//
//void LeftBalance(pNODE &p) {
//	pNODE child = p->lchild;
//	switch (child->bf) {
//	case LH:
//		p->bf = child->bf = EH;
//		R_Rotate(p); break;
//	case RH:
//		pNODE gchild = child->rchild;
//		switch (gchild->bf) {
//		case LH:
//			p->bf = RH; gchild->bf = EH;
//			break;
//		case EH:
//			p->bf = child->bf = EH;
//			break;
//		case RH:
//			p->bf = EH; child->bf = LH;
//			break;
//		}
//		gchild->bf = EH;
//		L_Rotate(p->lchild); R_Rotate(p);
//	}
//}
//
//
//void RightBalance(pNODE &p) {
//	pNODE child = p->rchild;
//	switch (child->bf){
//	case RH:
//		p->bf = child->bf = EH;
//		L_Rotate(p); break;
//	case LH:
//		pNODE gchild = child->lchild;
//		switch (gchild->bf) {
//		case LH:
//			p->bf = EH; child->bf = RH;
//		case EH:
//			p->bf = child->bf = EH;
//			break;
//		case RH:
//			p->bf = LH; child->bf = EH;
//			break;
//		}
//		gchild->bf = EH;
//		R_Rotate(p->rchild); L_Rotate(p);
//	}
//}
//
//int InsertAVL(pNODE &p,char key,bool &taller) {
//	if (p == NULL) {
//		p = (pNODE)malloc(sizeof(NODE));
//		p->data = key; p->lchild = p->rchild = NULL; p->bf = 0;
//		taller = true;
//		return true;
//	}
//	if (p->data == key) {
//		taller = false;
//		return false;
//	}
//
//	if (key > p->data) {
//		if (!InsertAVL(p->rchild, key, taller)) return false;
//		else if(taller)
//			switch (p->bf) {
//			case LH:
//				p->bf = EH; taller = false;
//				break;
//			case EH:
//				p->bf = RH; 
//				break;
//			case RH:
//				RightBalance(p); taller = false;
//				break;
//			}
//	}
//	else {
//		if (!InsertAVL(p->lchild, key, taller)) return false;
//		else if(taller)
//			switch (p->bf) {
//			case LH:
//				LeftBalance(p); taller = false;
//				break;
//			case EH:
//				p->bf = LH;
//				break;
//			case RH:
//				p->bf = EH; taller = false;
//				break;
//			}
//	}
//	return true;
//}
//
//void PreOrderTraverse(NODE *head, char res[],int &len) {
//	NODE *p = head;
//	res[len++] = p->data;
//	if (p->lchild != NULL) PreOrderTraverse(p->lchild, res, len);
//	if (p->rchild != NULL) PreOrderTraverse(p->rchild, res, len);
//
//	return;
//}
//
//void InOrderTraverse(NODE *head, char res[], int &len) {
//	NODE *p = head;
//	if (p->lchild != NULL) InOrderTraverse(p->lchild, res, len);
//	res[len++] = p->data;
//	if (p->rchild != NULL) InOrderTraverse(p->rchild, res, len);
//
//	return;
//}
//
//void PostOrderTraverse(NODE *head, char res[], int &len) {
//	NODE *p = head;
//	if (p->lchild != NULL) PostOrderTraverse(p->lchild, res, len);
//	if (p->rchild != NULL) PostOrderTraverse(p->rchild, res, len);
//	res[len++] = p->data;
//
//	return;
//}
//
//void LayerInorder(NODE *head, int level) {
//	if (head->rchild != NULL) LayerInorder(head->rchild, level + 1);
//
//	for (int i = 1; i <= level; i++)
//		printf("    ");
//	printf("%c\n", head->data);
//
//	if (head->lchild != NULL) LayerInorder(head->lchild, level + 1);
//	
//	return;
//}
//
//int main() {
//	char rec[MAXN] = { '\0' };
//	scanf("%s", rec);
//	pNODE T = NULL;
//
//	for (int i = 0, len = strlen(rec); i < len; i++) {
//		bool taller = true;
//		InsertAVL(T, rec[i], taller);
//	}
//
//	char res[MAXN] = { '\0' };
//	int n = 0;
//	PreOrderTraverse(T, res, n); printf("Preorder: %s\n", res);
//	n = 0; InOrderTraverse(T, res, n); printf("Inorder: %s\n", res);
//	n = 0; PostOrderTraverse(T, res, n); printf("Postorder: %s\n", res);
//	
//	printf("Tree:\n");
//	LayerInorder(T, 0);
//
//	return 0;
//}