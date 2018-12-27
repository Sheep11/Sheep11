///*
//2017年10月21日
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
//int error = 0;
//
//int Cal(int opnd1, char optr, int opnd2) {
//	switch (optr) {
//	case '+':return opnd1 + opnd2;
//	case '-':return opnd1 - opnd2;
//	case '*':return opnd1*opnd2;
//	case '/': {
//		if (opnd2 != 0)
//			return opnd1 / opnd2;
//		else {
//			error = 2;
//			return 0;
//		}
//	}
//	case '%':return opnd1%opnd2;
//	case '^': {
//		if (opnd2 < 0 || opnd1 == 0) {
//			error = 1;
//			return 0;
//		}
//		if (opnd2 == 0) return 1;
//
//		int tmp = opnd1;
//		for (int i = 1; i < opnd2; i++)
//			opnd1 *= tmp;
//		return opnd1;
//	}
//	default:break;
//	}
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
//	if (optr1=='(' && optr2 == '\0') {
//		error = 1; return -2;
//	}
//	if (optr1 == '#'&&optr2 == ')') {
//		error = 1;return -2;
//	}
//	if (optr1 == '('&&optr2 == ')') return 0;
//
//	if (optr1 == '(') return -1;
//	if (optr1 == '#') return -1;
//	if (optr2 == '(') return -1;
//	if (optr2 == ')') return 1;
//	if (optr2 == '\0') return 1;
//
//	if (optr1 == '^'&&optr2 == '^') return -1;
//	if (Priority(optr1) < Priority(optr2)) return -1;
//	if (Priority(optr1) >= Priority(optr2)) return 1;
//
//}
//
//int main() {
//	int T;
//	OPTR *optr = (OPTR*)malloc(sizeof(OPTR));
//	OPND *opnd = (OPND*)malloc(sizeof(OPND));
//	Init(optr); Init(opnd);
//	scanf("%d ", &T);
//
//	char tmp;
//	char s[10000] = { '\0' };
//	while (T--) {
//		int before = 1, pos = 0;//0为数字，1为算符,2为负号
//		error = 0;
//
//		gets_s(s);
//		tmp = s[pos++];
//		while (!(GetTop(optr) == '#' &&tmp == '\0') && !error) {
//			if (tmp <= '9'&&tmp >= '0') {//接受操作数
//				int num = 0;
//				num *= 10;
//				num += tmp - '0';
//				while (tmp = s[pos++], tmp >= '0'&&tmp <= '9') {
//					num *= 10;
//					num += tmp - '0';
//				}
//
//				if (before == 2) num = -num;
//				Push(opnd, num);
//
//				before = 0;
//			}
//
//			if (before == 1) {
//				if (tmp == '-') {
//					before = 2;
//					tmp = s[pos++];
//					continue;
//				}
//				if (tmp != '-' && tmp != '(') {
//					error = 1;
//					continue;
//				}
//			}
//
//			//进行操作
//			switch (Precede(GetTop(optr), tmp)) {
//			case -1: {
//				Push(optr, tmp);
//				tmp = s[pos++];
//				before = 1;
//				break;
//			}
//			case 0: {
//				Pop(optr);
//				tmp = s[pos++];
//				before = 0;
//				break;
//			}
//			case 1: {
//				int opnd1, opnd2;
//				char optr1;
//				if (opnd->top - opnd->base < 2 || optr->top == optr->base + 1) {
//					error = 1;
//					break;
//				}
//
//				opnd2 = Pop(opnd); opnd1 = Pop(opnd);
//				optr1 = Pop(optr);
//				int res = Cal(opnd1, optr1, opnd2);
//				Push(opnd, res);
//				break;
//			}
//			default:
//				break;
//			}
//		}
//
//		if (error) {
//			if (error == 1) printf("error.\n");
//			if (error == 2) printf("Divide 0.\n");
//		}
//		else {
//			int ans = Pop(opnd);
//			if (opnd->base != opnd->top||GetTop(optr) != '#') printf("error.\n");
//			else printf("%d\n", ans);
//		}
//
//		Clear(opnd); Clear(optr);
//	}
//	return 0;
//}