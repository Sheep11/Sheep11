///*
//2017Äê11ÔÂ5ÈÕ
//*/
//
//#include<string.h>
//#define MAXN 10000
///* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node
//{   int         data;
//    struct node * next;
//} NODE;
//
//NODE * find( NODE * , int * );
//void outputring( NODE * );
//void change( int , int , NODE * );
//
//void outputring( NODE * pring )
//{	NODE * p;
//	p = pring;
//	if ( p == NULL )
//		printf("NULL");
//	else
//		do
//		{	printf("%d", p->data);
//			p = p->next;
//		} while ( p != pring );
//	printf("\n");
//	return;
//
//}
//
//int main()
//{   int n, m;
//	NODE * head, * pring;
//
//	scanf("%d%d", &n, &m);
//	head = (NODE *)malloc( sizeof(NODE) );
//	head->next = NULL;
//	head->data = -1;
//
//	change( n, m, head );
//	pring = find( head, &n );
//	printf("ring=%d\n", n);
//	outputring( pring );
//
//	return 0;
//}
//
///* Here is waiting for you.
//void change( int n, int m, NODE * head )
//{ 
//}
//
//NODE * find( NODE * head, int * n )
//{
//}
//*/
//
///* PRESET CODE END - NEVER TOUCH CODE ABOVE */
//
//#define MAXN 10000
//void change(int n, int m, NODE* head) {
//	int ans = 0, remain = n, count = 0, dp[MAXN] = { 0 };
//	NODE *ptr = head;
//
//	while (1) {
//		if (remain == 0 || count == MAXN) {
//			ptr->next = NULL;
//			break;
//		}
//
//		for(int i=0;i<count;i++)
//			if (dp[i] == remain) {
//				NODE *p = head;
//				for (int j = 0; j <= i; j++)
//					p = p->next;
//				ptr->next = p;
//				return;
//			}
//		dp[count++] = remain;
//		ans = remain / m; remain = remain%m;
//
//		NODE *np = (NODE*)malloc(sizeof(NODE));
//		np->data = ans; np->next = ptr->next;
//		ptr->next = np;
//		ptr = np;
//		
//		remain *= 10;
//
//	}
//	return;
//}
//
//NODE *find(NODE * head, int * n)
//{
//	NODE *address[MAXN];
//	NODE *p = head;
//
//	int count = 0;
//	while (p->next != NULL) {
//		p = p->next;
//		for(int i=0;i<count;i++)
//			if (address[i] == p) {
//				*n = count - i;
//				return p;
//			}
//
//		address[count++] = p;
//	}
//	*n = 0;
//	return NULL;
//}