///*
//2017Äê12ÔÂ8ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 10000
//
//bool Calculate(int a, int b, char op, int &res) {
//	switch (op){
//	case '+':
//		res = a + b; break;
//	case '-':
//		res = a - b; break;
//	case '*':
//		res = a*b; break;
//	case '/':
//		if (b == 0) return false;
//		else res = a / b;
//		break;
//	default:
//		break;
//	}
//	return true;
//}
//
//int main() {
//	char rec[MAXN] = { '\0' };
//	scanf("%s", rec);
//	int len = strlen(rec);
//
//	int stack[MAXN] = { 0 }, top = 0;
//
//	for (int i = 0; i < len; i++) {
//		if (rec[i] >= '0'&&rec[i] <= '9') stack[top++] = rec[i] - '0';
//		else {
//			if (top < 2) {
//				printf("ERROR!\n"); return 0;
//			}
//			int b = stack[--top], a = stack[--top];
//			int res;
//			if (Calculate(a, b, rec[i], res)) stack[top++] = res;
//			else {
//				printf("DIV0!\n"); return 0;
//			}
//		}
//	}
//	if (top > 1) printf("ERROR!\n");
//	else printf("%d\n", stack[0]);
//
//	return 0;
//}