///*
//2017Äê12ÔÂ8ÈÕ
//*/
//
//#include<stack>
//#include<string>
//#include<iostream>
//using namespace std;
//#define BASE 0
//#define NEWBIGGER 1
//#define OLDBIGGER -1
//#define EQUAL 0
//
//int Priority(char a) {
//	switch (a){
//	case '+':
//		return 1; break;
//	case '-':
//		return 1; break;
//	case '*':
//		return 2; break;
//	case '/':
//		return 2; break;
//	case BASE :
//		return 0; break;
//	default:
//		break;
//	}
//}
//
//int cmp(char op1, char op2) {
//	if (op1 == '(') {
//		if (op2 == ')') return EQUAL;
//		else return NEWBIGGER;
//	}
//	if (op2 == '(') return NEWBIGGER;
//	if (op2 == ')') return OLDBIGGER;
//
//	return Priority(op1) >= Priority(op2) ? OLDBIGGER : NEWBIGGER;
//}
//
//int Calculate(int a, int b, char op) {
//	switch (op){
//	case '+':
//		return a + b;
//	case '-':
//		return a - b;
//	case '*':
//		return a*b;
//	case '/':
//		if (b == 0) return;
//		else return a / b;
//	default:
//		break;
//	}
//}
//
//int main() {
//	stack<int> opnd; stack<char> optr;
//	string rec;
//	cin >> rec;
//	
//	int num = 0;
//	for each (char i in rec){
//		if (i >= '0'&&i <= '9') opnd.push(i - '0');
//		else {
//			int pri;
//			do {
//				pri = Priority(i) > Priority(optr.top()) ? NEWBIGGER : OLDBIGGER;
//				switch (pri) {
//				case NEWBIGGER:
//					optr.push(i); break;
//				case EQUAL:
//					optr.pop();
//					break;
//				case OLDBIGGER:
//					int a = opnd.top(); opnd.pop();
//					int b = opnd.top(); opnd.pop();
//					char op = optr.top(); optr.pop();
//					opnd.push(Calculate(a, b, op));
//
//					break;
//				}
//			} while (pri == OLDBIGGER);
//		}
//
//
//
//	return 0;
//}