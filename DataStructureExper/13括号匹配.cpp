///*
//2017Äê10ÔÂ28ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define STACK_INIT_SIZE 255
//#define STACK_INCREAMENT_SIZE 255
//
//typedef struct {
//	char *base, *top;
//	int size;
//}STACK;
//
//char Pop(STACK *stack) {
//	if (stack->top == stack->base) return false;
//	return *(stack->top--);
//}
//
//void Push(STACK *stack, char e) {
//	if (stack->top - stack->base >= stack->size) {
//		stack->base = (char*)realloc(stack->base, stack->size + STACK_INCREAMENT_SIZE);
//		stack->top = stack->base + stack->size;
//		stack->size += STACK_INCREAMENT_SIZE;
//	}
//	*(stack->top++) = e;
//	return;
//}
//
//char GetTop(STACK *stack) {
//	if (stack->top == stack->base) return false;
//	else return *(stack->top - 1);
//}
//
//int main() {
//	char c;
//	STACK *stack = (STACK*)malloc(sizeof(STACK));
//	stack->base = stack->top = (char*)malloc(STACK_INIT_SIZE);
//	stack->size = STACK_INIT_SIZE;
//
//	int succeed = 1;
//	while (c = getchar(), c != '\n'&&succeed) {
//		if (c >= '0'&&c <= '9') continue;
//		if (c == '(' || c == '[' || c == '{') {
//			Push(stack, c);
//			continue;
//		}
//		
//		switch (c)
//		{
//		case ')': {
//			if (GetTop(stack) == '(') Pop(stack);
//			else succeed = 0;
//			break;
//		}
//		case ']': {
//			if (GetTop(stack) == '[') Pop(stack);
//			else succeed = 0;
//			break;
//		}
//		case '}': {
//			if (GetTop(stack) == '{') Pop(stack);
//			else succeed = 0;
//			break;
//		}
//		default:
//			break;
//		}
//	}
//	if (succeed&&stack->base == stack->top) printf("Match succeed!\n");
//	else printf("Match false!\n");
//
//	return 0;
//}