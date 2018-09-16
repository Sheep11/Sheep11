///*
//2017Äê10ÔÂ28ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 105
//
//typedef struct {
//	int i, j;
//	int e;
//}Triple;
//
//typedef struct {
//	Triple data[MAXN];
//	int rpos[MAXN];
//	int m, n, t;
//}TSMatrix;
//
//void InitMatrix(TSMatrix *M) {
//	scanf("%d %d %d", &M->m, &M->n, &M->t);
//
//	memset(M->rpos, 0, MAXN*sizeof(int));
//	for (int i = 0; i < M->t; i++) {
//		scanf("%d %d %d", &M->data[i].i, &M->data[i].j, &M->data[i].e);
//
//		for (int j = M->data[i].i + 1; j <= M->m; j++)
//			M->rpos[j]++;
//	}
//}
//
//int MultSMatrix(TSMatrix *M, TSMatrix *N, TSMatrix *Q) {
//	int ctemp[MAXN];
//	if (M->n != N->m) return false;
//	Q->m = M->m; Q->n = N->n;
//	Q->t = 0;
//
//	for (int row = 1; row <= M->m; row++) {
//		memset(ctemp, 0, MAXN * sizeof(int));
//		Q->rpos[row] = Q->t;
//
//		int end1, end2;
//		if (row < M->m) end1 = M->rpos[row + 1];
//		else end1 = M->t + 1;
//		for (int mpos = M->rpos[row]; mpos < end1; mpos++) {
//			if (M->data[mpos].e == 0) continue;
//
//			int k = M->data[mpos].j;
//			if (k < N->m) end2 = N->rpos[k + 1];
//			else end2 = N->t + 1;
//			for (int npos = N->rpos[k]; npos < end2; npos++) {
//				if (N->data[npos].e == 0) continue;
//				int j = N->data[npos].j;
//				ctemp[j] += M->data[mpos].e*N->data[npos].e;
//			}
//		}
//
//		for (int ntmp = 1; ntmp <= Q->n; ntmp++) {
//			if (ctemp[ntmp] != 0) {
//				Q->data[Q->t].i = row;
//				Q->data[Q->t].j = ntmp;
//				Q->data[Q->t].e = ctemp[ntmp];
//				Q->t++;
//			}
//		}
//	}
//	return true;
//}
//
//int main() {
//	TSMatrix *M = (TSMatrix*)malloc(sizeof(TSMatrix)), *N = (TSMatrix*)malloc(sizeof(TSMatrix));
//	TSMatrix *Q = (TSMatrix*)malloc(sizeof(TSMatrix));
//
//	InitMatrix(M); InitMatrix(N);
//	MultSMatrix(M, N, Q);
//
//	printf("%d\n%d\n%d\n", Q->m, Q->n, Q->t);
//	for (int i = 0; i < Q->t; i++)
//		printf("%d,%d,%d\n", Q->data[i].i, Q->data[i].j, Q->data[i].e);
//
//	return 0;
//}