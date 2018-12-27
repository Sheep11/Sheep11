///*
//2017Äê11ÔÂ7ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 100000
//
//typedef struct Node {
//	char data;
//	struct Node *child, *nextbro;
//}Node,*pNode;
//
//int pos = 1;
//pNode CreateTree(char s[]) {
//	if (strcmp(s, "()") == 0) return NULL;
//
//	pNode head = (pNode)malloc(sizeof(Node));
//	head->child = head->nextbro = NULL;
//	pNode p = head;
//
//	while(pos<strlen(s)){
//		if (s[pos] >= 'a'&&s[pos] <= 'z') {
//			head->data = s[pos++];
//		}
//		if (s[pos] == '(') {
//			pos++;
//			if (p == head) {
//				head->child = CreateTree(s);
//				p = head->child;
//			}
//			else {
//				p->nextbro = CreateTree(s);
//				p = p->nextbro;
//			}
//		}
//		if (s[pos] == ')') {
//			pos++;
//			return head;
//		}
//		if (s[pos] == ',') pos++;
//	}
//	return head;
//}
//
//void CalDegree(pNode p,int deg[]) {
//	if (p == NULL) return;
//
//	int count = 0;
//	for (pNode np = p->child; np != NULL; np = np->nextbro) {
//		count++;
//		CalDegree(np, deg);
//	}
//	deg[count] += 1;
//}
//
//void Output(pNode p, int level) {
//	if (p == NULL) return;
//
//	for (pNode np = p; p != NULL; p = p->nextbro) {
//		for (int i = 1; i <= level; i++)
//			printf("    ");
//		printf("%c\n", p->data);
//
//		if (p->child != NULL)
//			Output(p->child, level + 1);
//	}
//}
//
//int main() {
//	char rec[MAXN]; gets(rec);
//	pNode head = CreateTree(rec);
//
//	int deg[MAXN] = { 0 }, max_deg = MAXN - 1;
//	CalDegree(head, deg);
//	while (deg[max_deg] == 0 && max_deg > 0) max_deg--;
//
//	Output(head, 0);
//	printf("Degree of tree: %d\n", max_deg);
//	for (int i = 0; i <= max_deg; i++)
//		printf("Number of nodes of degree %d: %d\n", i, deg[i]);
//
//	return 0;
//}