///*
//2017年10月26日
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define STACK_INIT_SIZE 10000
//#define STACKINCREMENT 255
//
//typedef struct {
//	char *base, *top;
//	int stacksize;
//}OPTR;
//
//typedef struct {
//	int *base, *top;
//	int stacksize;
//}OPND;
//
//void Init(OPTR *s) {
//	s->base = (char*)malloc(STACK_INIT_SIZE);
//	*s->base = '#';
//	s->top = s->base + 1;
//	s->stacksize = STACKINCREMENT;
//}
//
//void Init(OPND *s) {
//	s->base = s->top = (int*)malloc(STACK_INIT_SIZE * sizeof(int));
//	s->stacksize = STACKINCREMENT;
//}
//
//void Push(OPTR *s,char e) {
//	if (s->top - s->base >= s->stacksize) {
//		s->base = (char*)realloc(s->base, s->stacksize + STACKINCREMENT);
//
//		s->top = s->base + s->stacksize;
//		s->stacksize += STACKINCREMENT;
//	}
//	*s->top++ = e;
//}
//
//void Push(OPND *s, int e) {
//	if (s->top - s->base >= s->stacksize) {
//		s->base = (int*)realloc(s->base, (s->stacksize + STACKINCREMENT) * sizeof(int));
//
//		s->top = s->base + s->stacksize;
//		s->stacksize += STACKINCREMENT;
//	}
//	*s->top++ = e;
//}
//
//
//char Pop(OPTR *s) {
//	char e = *--s->top;
//	return e;
//}
//
//int Pop(OPND *s) {
//	int e = *--s->top;
//	return e;
//}
//
//char GetTop(OPTR *s) {
//	return *(s->top - 1);
//}
//
//int GetTop(OPND *s) {
//	return *(s->top - 1);
//}
//
//void Clear(OPTR *s) {
//	s->top = s->base + 1;
//}
//void Clear(OPND *s) {
//	s->top = s->base;
//}
//
//int Priority(char optr) {
//	switch (optr)
//	{
//	case '+':return 1;
//	case '-':return 1;
//	case '^':return 3;
//	default:
//		return 2;
//	}
//}
//
//int Precede(char optr1, char optr2) {
//	if (optr1 == '('&&optr2 == ')') return 0;
//	if (optr1 == '#'&&optr2 == '#') return -2;
//
//	if (optr1 == '(') return -1;
//	if (optr1 == '#') return -1;
//	if (optr2 == '(') return -1;
//	if (optr2 == ')') return 1;
//	if (optr2 == '#') return 1;
//
//	if (optr1 == '^'&&optr2 == '^') return -1;
//	if (Priority(optr1) < Priority(optr2)) return -1;
//	if (Priority(optr1) >= Priority(optr2)) return 1;
//
//}
//
//char s[10000000] = { '\0' };
//int main() {
//	int T;
//	OPTR *optr = (OPTR*)malloc(sizeof(OPTR));
//	OPND *opnd = (OPND*)malloc(sizeof(OPND));
//	Init(optr); Init(opnd);
//	scanf("%d ", &T);
//
//	char tmp;
//	while (T--) {
//		int pos = 0;
//
//		gets_s(s);
//		tmp = s[pos++];
//		while (!(GetTop(optr) == '#' &&tmp == '#')) {
//			if ((tmp <= 'Z'&&tmp >= 'A') || (tmp <= 'z'&&tmp >= 'a')) {//接受操作数
//				Push(opnd, tmp);
//				printf("%c", tmp);
//
//				tmp = s[pos++];
//			}
//
//			//进行操作
//			switch (Precede(GetTop(optr), tmp)) {
//			case -1: {
//				Push(optr, tmp);
//				tmp = s[pos++];
//				break;
//			}
//			case 0: {
//				Pop(optr);
//				tmp = s[pos++];
//				break;
//			}
//			case 1: {
//				char optr1 = Pop(optr);
//
//				printf("%c", optr1);
//				break;
//			}
//			default:
//				break;
//			}
//		}
//		printf("\n");
//
//		Clear(opnd); Clear(optr);
//	}
//	return 0;
//}