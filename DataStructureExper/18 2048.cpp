///*
//2017Äê11ÔÂ5ÈÕ
//*/
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAXN 4
//
//void Move(int matrix[][MAXN], char op) {
//	switch (op)
//	{
//	case 'w': {
//		for (int row = 1; row < MAXN; row++)
//			for (int col = 0; col < MAXN; col++) {
//				int tmp;
//				for (tmp = row - 1; tmp >= 0; tmp--)
//					if (matrix[tmp][col] != 0) break;
//
//				if (matrix[tmp][col] == matrix[row][col]&&tmp>=0) {
//					matrix[tmp][col] *= -2;
//					matrix[row][col] = 0;
//				}
//				else {
//					matrix[tmp + 1][col] = matrix[row][col];
//					if (tmp + 1 != row) matrix[row][col] = 0;
//				}
//			}
//		break;
//	}
//	case 's': {
//		for (int row = MAXN - 2; row >= 0; row--)
//			for (int col = 0; col < MAXN; col++) {
//				int tmp;
//				for (tmp = row + 1; tmp < MAXN; tmp++)
//					if (matrix[tmp][col] != 0) break;
//
//				if (matrix[tmp][col] == matrix[row][col]&&tmp<MAXN) {
//					matrix[tmp][col] *= -2;
//					matrix[row][col] = 0;
//				}
//				else {
//					matrix[tmp - 1][col] = matrix[row][col];
//					if (tmp - 1 != row) matrix[row][col] = 0;
//				}
//			}
//		break;
//	}
//	case 'a': {
//		for (int col = 1; col < MAXN; col++)
//			for (int row = 0; row < MAXN; row++) {
//				int tmp;
//				for (tmp = col - 1; tmp >= 0; tmp--)
//					if (matrix[row][tmp] != 0) break;
//
//				if (matrix[row][tmp] == matrix[row][col]&&tmp>=0) {
//					matrix[row][tmp] *= -2;
//					matrix[row][col] = 0;
//				}
//				else {
//					matrix[row][tmp + 1] = matrix[row][col];
//					if (tmp + 1 != col) matrix[row][col] = 0;
//				}
//			}
//		break;
//	}
//	case 'd': {
//		for (int col = MAXN - 2; col >= 0; col--)
//			for (int row = 0; row < MAXN; row++) {
//				int tmp;
//				for (tmp = col + 1; tmp < MAXN; tmp++)
//					if (matrix[row][tmp] != 0) break;
//
//				if (matrix[row][tmp] == matrix[row][col]&&tmp<MAXN) {
//					matrix[row][tmp] *= -2;
//					matrix[row][col] = 0;
//				}
//				else {
//					matrix[row][tmp - 1] = matrix[row][col];
//					if (tmp - 1 != col) matrix[row][col] = 0;
//				}
//			}
//		break;
//	}
//	default:
//		break;
//	}
//
//	for (int row = 0; row < MAXN; row++)
//		for (int col = 0; col < MAXN; col++)
//			if (matrix[row][col] < 0) matrix[row][col] *= -1;
//}
//
//int main() {
//	//freopen("in.txt", "r", stdin);
//	//freopen("out.txt", "w", stdout);
//
//	int matrix[MAXN][MAXN];
//	memset(matrix, 0, MAXN*MAXN * sizeof(int));
//	for (int i = 0; i < MAXN; i++)
//		for (int j = 0; j < MAXN; j++)
//			scanf("%d", &matrix[i][j]);
//	getchar();
//
//	char op;
//	while (op = getchar(), op != EOF) {
//		Move(matrix, op);
//
//		int num, val;
//		scanf("%d %d", &num, &val); getchar();
//
//		int row, col;
//		do {
//			row = num / MAXN; col = num%MAXN;
//			if (col == 0) {
//				col = MAXN - 1;
//				row -= 1;
//			}
//			else col -= 1;
//
//			num = num % 16 + 1;
//		} while (matrix[row][col] != 0);
//		matrix[row][col] = val;
//	}
//	//output
//	for(int i=0;i<MAXN;i++)
//		for (int j = 0; j < MAXN; j++)
//		{
//			if (i == 0 && j == 0) printf("%d", matrix[i][j]);
//			else printf(" %d", matrix[i][j]);
//		}
//	printf("\n");
//
//	return 0;
//}