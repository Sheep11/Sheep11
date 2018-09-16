///*
//2017Äê10ÔÂ14ÈÕ
//*/
//
///* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */
//
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//
//typedef struct node
//{
//	int    coef, exp;
//	struct node  *next;
//} NODE;
//
//void multiplication(NODE *, NODE *, NODE *);
//void input(NODE *);
//void output(NODE *);
//
//void input(NODE * head)
//{
//	int flag, sign, sum, x;
//	char c;
//
//	NODE * p = head;
//
//	while ((c = getchar()) != '\n')
//	{
//		if (c == '<')
//		{
//			sum = 0;
//			sign = 1;
//			flag = 1;
//		}
//		else if (c == '-')
//			sign = -1;
//		else if (c >= '0'&& c <= '9')
//		{
//			sum = sum * 10 + c - '0';
//		}
//		else if (c == ',')
//		{
//			if (flag == 1)
//			{
//				x = sign * sum;
//				sum = 0;
//				flag = 2;
//				sign = 1;
//			}
//		}
//		else if (c == '>')
//		{
//			p->next = (NODE *)malloc(sizeof(NODE));
//			p->next->coef = x;
//			p->next->exp = sign * sum;
//			p = p->next;
//			p->next = NULL;
//			flag = 0;
//		}
//	}
//}
//
//void output(NODE * head)
//{
//	while (head->next != NULL)
//	{
//		head = head->next;
//		printf("<%d,%d>,", head->coef, head->exp);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	NODE * head1, *head2, *head3;
//
//	head1 = (NODE *)malloc(sizeof(NODE));
//	input(head1);
//
//	head2 = (NODE *)malloc(sizeof(NODE));
//	input(head2);
//
//	head3 = (NODE *)malloc(sizeof(NODE));
//	head3->next = NULL;
//	multiplication(head1, head2, head3);
//
//	output(head3);
//	return 0;
//}
//
///* PRESET CODE END - NEVER TOUCH CODE ABOVE */
//
//NODE* UpdateRes(NODE *res, int coef, int exp) {
//	NODE *p = res;
//
//	while (p->exp!=exp) {
//		if (p->next != NULL && p->next->exp <= exp) {
//			p = p->next;
//		}
//		else {
//			NODE *np = (NODE*)malloc(sizeof(NODE));
//			np->coef = 0; np->exp = exp;
//			np->next = p->next;
//
//			p->next = np;
//			p = np;
//
//			break;
//		}
//	}
//	p->coef += coef;
//
//	return p;
//}
//
//void Delete(NODE *p) {
//	NODE *np = p->next;
//	p->next = np->next;
//	free(np);
//}
//
//void multiplication(NODE *head1, NODE *head2, NODE *res) {
//	NODE *p1 = head1, *p2 = head2, *p3 = res;
//	p3->exp = 0xFFFFFFFF;
//	
//	while (p1->next != NULL) {
//		p1 = p1->next;
//		p2 = head2;
//		p3 = res;
//		while (p2->next != NULL) {
//			p2 = p2->next;
//			int coef = p1->coef*p2->coef, exp = p1->exp+p2->exp;
//			if (coef != 0)
//				p3 = UpdateRes(p3, coef, exp);
//		}
//	}
//
//	NODE *p = res;
//	while (p->next != NULL) {
//		if (p->next->coef == 0) Delete(p);
//		else p = p->next;
//	}
//	if (res->next == NULL) {
//		res->next = (NODE*)malloc(sizeof(NODE));
//		res->next->coef = res->next->exp = 0;
//		res->next->next = NULL;
//	}
//}