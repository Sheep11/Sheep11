///*
//2017年10月3日 约瑟夫问题
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
//int main() {
//	int n, k, m;
//	scanf("%d,%d,%d", &n, &k, &m);
//	if (n < 1 || k < 1 || m < 1) {
//		printf("n,m,k must bigger than 0.\n");
//		return 0;
//	}
//	if (k > n) {
//		printf("k should not bigger than n.\n");
//		return 0;
//	}
//	
//	Node *head = (Node*)malloc(sizeof(Node)), *beg;
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
//	int count = 0;
//	while (1) {
//		for (int i = 1; i < m; i++)
//			ptr = ptr->next;
//
//		count++;
//		if (count == 1) printf("%d", ptr->num);
//		else if (count == 10) {
//			printf(" %d\n", ptr->num);
//			count = 0;
//		}
//		else printf(" %d", ptr->num);
//		if (ptr->next == ptr) {
//			if (count != 0) printf("\n");
//			break;
//		}
//
//		Node *tmp = ptr;
//		ptr = ptr->next;
//		tmp->pre->next = tmp->next;
//		tmp->next->pre = tmp->pre;
//		free(tmp);
//	}
//
//	return 0;
//}