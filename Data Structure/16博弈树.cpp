///*
//2017Äê10ÔÂ31ÈÕ
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAXN 1000
//
//typedef struct Node {
//	char data;
//	struct Node *child, *nextbro;
//}Node,*pNode;
//
//int pos = 1;
//pNode CreateTree(char s[]) {
//	pNode head = (pNode)malloc(sizeof(Node));
//	head->child = head->nextbro = NULL;
//	pNode p = head;
//
//	while(pos<strlen(s)){
//		if (s[pos] >= 'a'&&s[pos] <= 'z') {
//			printf("%c\n", s[pos]);
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
//int CheckNode(pNode p,int dep) {
//	pNode np = p;
//	dep++;
//
//	for (pNode np = p; np != NULL;np=np->nextbro) {
//		if (np->child != NULL) {
//			if (CheckNode(np->child, dep)) continue;
//			else return false;
//		}
//		else if (dep % 2 == 1) return true;
//		else return false;
//	}
//
//	return true;
//}
//
//int GetMaxDep(pNode p) {
//	int dep = 0;
//
//	if (p->child == NULL) return 1;
//	for (pNode np = p->child; np != NULL; np = np->nextbro) {
//		if (GetMaxDep(np) + 1 > dep) dep = GetMaxDep(np) + 1;
//	}
//	return dep;
//}
//
//pNode Find(pNode head, char c) {
//	pNode res = NULL;
//	for (pNode p = head->child; p != NULL; p = p->nextbro)
//		if (p->data == c) return p;
//
//	return res;
//}
//
//int main() {
//	char str[MAXN];
//	gets(str);
//
//	pNode tree_head = CreateTree(str);
//
//	char go_again = 'y';
//	int person;
//	pNode p, np;
//	while (go_again=='y') {
//		printf("Who play first(0: computer; 1: player )?\n");
//		scanf("%d", &person); getchar();
//		p = tree_head;
//
//		while (p->child!=NULL) {
//			if (person == 1) {
//
//				char e;
//				while (1) {
//					printf("player:\n");
//					e = getchar(); getchar();
//					np = Find(p, e);
//
//					if (np != NULL) break;
//					printf("illegal move.\n");
//				}
//
//				p = np;
//				person = 0;
//			}
//			else {
//				int dep = 0, min_dep = 0x3f3f3f3f;
//				pNode res = NULL;
//				for (np = p->child; np != NULL; np = np->nextbro)
//					if (CheckNode(np, 0) && GetMaxDep(np) < min_dep) {
//						min_dep = GetMaxDep(np);
//						res = np;
//					}
//
//				int max_dep = 0;
//				if(res==NULL)
//					for(np=p->child;np!=NULL;np=np->nextbro)
//						if (GetMaxDep(np) > max_dep) {
//							max_dep = GetMaxDep(np);
//							res = np;
//						}
//				p = res;
//				person = 1;
//
//				printf("computer: %c\n", p->data);
//			}
//			if (p->child == NULL) {
//				if (person == 0) printf("Congratulate, you win.\n");
//				else printf("Sorry, you lost.\n");
//			}
//		}
//		printf("Continue(y/n)?\n");
//		go_again = getchar(); getchar();
//	}
//
//	
//	return 0;
//}