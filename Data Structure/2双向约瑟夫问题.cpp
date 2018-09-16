///*
//2017年10月3日 双向约瑟夫问题
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//
//typedef struct MyStructure {
//	int num;
//	MyStructure *next, *pre;
//}Node;
//
//void Delete(Node *tmp) {
//	tmp->pre->next = tmp->next;
//	tmp->next->pre = tmp->pre;
//	free(tmp);
//}
//
//int main() {
//	int n, k, m;
//	scanf("%d,%d,%d", &n, &k, &m);
//	if (n == 0 || k == 0 || m == 0) {
//		printf("n,m,k must bigger than 0.\n");
//		return 0;
//	}
//	if (k > n) {
//		printf("k should not bigger than n.\n");
//		return 0;
//	}
//	
//	Node *head = (Node*)malloc(sizeof(Node)), *beg = head;
//	head->num = 1;
//	Node *ptr = head;
//	for (int i = 2; i <= n; i++) {
//		Node *newnode = (Node*)malloc(sizeof(Node));
//		newnode->next = head; newnode->pre = ptr; newnode->num = i;
//		ptr->next = head->pre= newnode;
//
//		ptr = newnode;
//		
//		if (i == k) beg = newnode;
//	}
//
//	ptr = beg;
//	Node *ptr1 = beg, *tmp;
//	while (1) {
//		for (int i = 1; i < m; i++) {
//			ptr = ptr->next;
//			ptr1 = ptr1->pre;
//		}
//
//		int flag = 0;
//		if (ptr->next == ptr1&&ptr1->next == ptr || ptr == ptr->next) flag = 1;
//
//		if (ptr == ptr1) {
//			printf("%d,", ptr->num);
//			tmp = ptr;
//			ptr = ptr->next; ptr1 = ptr1->pre;
//			Delete(tmp);
//		}
//		else {
//			printf("%d-%d,", ptr->num, ptr1->num);
//			tmp = ptr; ptr = ptr->next;
//			if (ptr == ptr1) ptr = ptr->next;
//			Delete(tmp);
//			tmp = ptr1; ptr1 = ptr1->pre;
//			Delete(tmp);
//		}
//
//		if (flag == 1) {
//			printf("\n");
//			break;
//		}
//	}
//
//	return 0;
//}