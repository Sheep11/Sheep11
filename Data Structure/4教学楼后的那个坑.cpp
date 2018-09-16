///*
//2017Äê10ÔÂ10ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAX 1000010
//#define nullptr 0x00000000
//
//typedef struct node {
//	int w, h;
//	int n;
//
//	node *pre, *next;
//}NODE;
//
//
//int Min(int a, int b) {
//	return a < b ? a : b;
//}
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	long long *res = (long long *)malloc((N + 10) * sizeof(long long));
//	memset(res, 0, (N+10)*sizeof(long long));
//
//	NODE *head = (NODE*)malloc(sizeof(NODE)), *end = (NODE*)malloc(sizeof(NODE));
//	head->next = end;
//	head->pre = end->next = nullptr;
//	head->h = end->h = MAX;
//
//	NODE *p = head, *mark;
//	int min = MAX;
//	for (int i = 1; i <= N; i++) {
//		NODE *np = (NODE*)malloc(sizeof(NODE));
//		scanf("%d %d", &np->w, &np->h);
//		np->n = i;
//
//		if (np->h < min) {
//			min = np->h;
//			mark = np;
//		}
//		p->next = np;
//		np->pre = p;
//		p = np;
//
//		if (i == N) {
//			p->next = end;
//			end->pre = p;
//		}
//	}
//
//	p = mark;
//	long long time = 0;
//	while (1) {
//		NODE *left = p, *right = p;
//		int w_sum = p->w;
//		while (p->h == right->next->h) {
//			right = right->next;
//			w_sum += right->w;
//		}
//		while (p->h == left->pre->h) {
//			left = left->pre; 
//			w_sum += left->w;
//		}
//
//		if (res[left->n] == 0) res[left->n] = time + w_sum;
//		p = left->next;
//		NODE *target = right->next;
//		while (p != target) {
//			if (res[p->n] == 0) res[p->n] = time + w_sum;
//			p = p->next;
//			free(p->pre);
//		}
//		p->pre = left;
//		left->next = p;
//
//		if (left->pre == head&&left->next == end) break;
//
//		left->w = w_sum;
//		time += (Min(left->next->h, left->pre->h) - left->h)*w_sum;
//		left->h = Min(left->next->h, left->pre->h);
//		p = right = left;
//
//		while (right->next->h <= p->h) {
//			right = right->next;
//			if (right->h < p->h)
//				p = right;
//		}
//		while (left->pre->h <= p->h) {
//			left = left->pre;
//			if (left->h < p->h)
//				p = left;
//		}
//	}
//	for (int i = 1; i <= N; i++)
//		printf("%lld\n", res[i]);
//
//	return 0;
//}
