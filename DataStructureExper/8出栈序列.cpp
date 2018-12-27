///*
//2017Äê10ÔÂ21ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#define MAXN 100000
//
//int main() {
//	int n, m;
//	int first = 1;
//
//	while (scanf("%d %d", &n, &m), n != 0 || m != 0) {
//		if (!first) printf("\n");
//		else first--;
//
//		while (m--) {
//			int a[MAXN] = { 0 }, rec[MAXN] = { 0 };
//			int pos = 0, tmp, ok = 1;
//
//			for (int i = 1; i <= n; i++)
//				scanf("%d", &rec[i]);
//
//			for (int i = 1; i <= n && ok; i++) {
//				tmp = rec[i];
//				if (tmp > pos)
//					pos = tmp;
//				else while (pos != tmp) {
//					if (a[pos] != -1) {
//						ok = 0;
//						break;
//					}
//					pos--;
//				}
//				a[pos] = -1;
//			}
//
//			if (ok) printf("Yes\n");
//			else printf("No\n");
//		}
//	}
//	return 0;
//}