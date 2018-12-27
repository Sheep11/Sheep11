///*小学期程设之欢度国庆 28 编辑器(链表）
//2017.9.23
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#define nullptr 0x00000000
//
//typedef struct Number Node;
//typedef struct Number* pNode;
//
//int dp[1000010] = { 0 }, count = 0;
//
//struct Number {
//	pNode front, behind;
//	int value;
//	int sum;
//	int max;
//};
//
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//
//pNode Insert(pNode cursor, int value) {
//	pNode pnode = (pNode)malloc(sizeof(Node)), plater = cursor->behind;
//
//	pnode->front = cursor; pnode->behind = plater;
//	pnode->value = value; 
//	 
//	cursor->behind = pnode;
//	if (plater != nullptr) plater->front = pnode;
//
//	pnode->sum = cursor->sum + value;
//	pnode->max = Max(pnode->sum, cursor->max);
//	dp[++count] = pnode->max;
//
//	return pnode;
//}
//
//pNode Delete(pNode cursor) {
//	int value = cursor->value;
//	if (cursor->front == nullptr) return cursor;
//	if (cursor->behind == nullptr) {
//		cursor->front->behind = nullptr;
//	}
//	else {
//		cursor->front->behind = cursor->behind;
//		cursor->behind->front = cursor->front;
//	}
//	pNode newcursor = cursor->front;
//	free(cursor);
//
//	count--;
//	return newcursor;
//}
//
//pNode Move(pNode cursor, int dis) {
//	if (dis < 0) {
//		if (cursor->front != nullptr)
//		{
//			cursor = cursor->front;
//			count--;
//		}
//	}
//	else {
//		if (cursor->behind != nullptr) {
//			cursor = cursor->behind;
//
//			cursor->sum = cursor->front->sum + cursor->value;
//			cursor->max = Max(cursor->sum, cursor->front->max);
//
//			dp[++count] = cursor->max;
//		}
//	}
//	return cursor;
//}
//
//
//int main() {
//	int Q;
//
//	while (scanf("%d", &Q) != EOF) {
//		getchar();
//		Node head;
//		head.front = nullptr; head.behind = nullptr; 
//		head.value = head.sum = 0;
//		head.max = -10000000;
//
//		char tmp;
//		int num;
//		pNode cursor = &head;
//		while (Q--) {
//			switch (scanf("%c", &tmp),getchar(), tmp)
//			{
//			case 'I':
//				scanf("%d", &num); getchar();
//				cursor = Insert(cursor, num); break;
//			case 'D':
//				cursor = Delete(cursor); break;
//			case 'L':
//				cursor = Move(cursor, -1); break;
//			case 'R':
//				cursor = Move(cursor, 1); break;
//			case 'Q':
//				scanf("%d", &num); getchar();
//				printf("%d\n", dp[num]); break;
//			default:
//				break;
//			}
//		}
//	}
//	return 0;
//}