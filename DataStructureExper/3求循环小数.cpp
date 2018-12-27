///*
//2017年10月4日 求循环小数
//*/
//
///* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */
//
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXN 55
//
//typedef struct node
//{
//	int         data;
//	struct node * next;
//} NODE;
//
//void output(NODE *);
//void change(int, int, NODE *);
//
//void output(NODE * head)
//{
//	int k = 0;
//
//	printf("0.");
//	while (head->next != NULL && k<50)
//	{
//		printf("%d", head->next->data);
//		head = head->next;
//		k++;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n, m;
//	NODE * head;
//
//	scanf("%d%d", &n, &m);
//	head = (NODE *)malloc(sizeof(NODE));
//	head->next = NULL;
//	head->data = -1;
//	change(n, m, head);
//	output(head);
//	return 0;
//}
//
///* PRESET CODE END - NEVER TOUCH CODE ABOVE */
//
//void change(int n, int m, NODE* head) {
//	int ans = 0, remain = n, count = 0, dp[MAXN] = { 0 };
//	NODE *ptr = head;
//
//	while(1) {
//		if (remain == 0 || count == 50) {
//			ptr->next = NULL;
//			break;
//		}
//
//		int pos = -1;
//		for (int i = 1; i <= MAXN; i++)
//			if (dp[i] == remain) pos = i;
//		if (pos != -1) {
//			NODE *tmp = head->next;
//			for (int i = 1; i <= pos; i++)
//				tmp = tmp->next;
//			ptr->next = tmp;
//			break;
//		}
//
//		dp[count] = remain;
//		count++;
//		remain *= 10;
//		while (remain < m && count < 50) {
//			count++;
//			remain *= 10;
//			ptr->next = (NODE*)malloc(sizeof(NODE));
//			ptr = ptr->next;
//			ptr->data = 0;
//		}
//
//		ans = remain / m;
//		remain %= m;
//		ptr->next = (NODE*)malloc(sizeof(NODE));
//		ptr = ptr->next;
//		ptr->data = ans;
//	}
//	return;
//}
