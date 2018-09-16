///*小学期程设之欢度国庆 26 9的统计
//2017.9.25
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MAXN 10001
//
//char table[MAXN][MAXN], res[MAXN];
//char ONE[MAXN] = { 1,1 };
//
//void Multi(char ptr[], int num) {
//	int tmp = 0, i = 0;
//	for (i = 1; i <= ptr[0]; i++) {
//		ptr[i] = ptr[i] * num + tmp;
//		tmp = ptr[i] / 10;
//		ptr[i] %= 10;
//	}
//
//	while (tmp != 0) {
//		ptr[i++] = tmp % 10;
//		tmp /= 10;
//	}
//	ptr[0] = i - 1;
//	if (num == 0) ptr[0] = 0;
//}
//
//void Add(char ptr[], char num[]) {
//	int i = 0, len = 0;
//
//	for (i = 1; i <= num[0]; i++)
//		ptr[i] += num[i];
//
//	if (num[0] > ptr[0])
//		while (i <= num[i])
//			ptr[i] = num[i];
//
//	int max = ptr[0] > num[0] ? ptr[0] : num[0];
//	for (len = 1; len <= max || ptr[len] >= 10; len++) {
//		ptr[len + 1] += ptr[len] / 10;
//		ptr[len] %= 10;
//	}
//	ptr[0] = len - 1;
//}
//
//void Minus(char ptr[], char num[]) {
//	int i = 0;
//	for (i = num[0]; i >= 1; i--)
//		ptr[i] -= num[i];
//
//	for (i = 0; i <= ptr[0]; i++)
//		while (ptr[i] < 0) {
//			ptr[i] += 10;
//			ptr[i + 1] -= 1;
//		}
//}
//
//void CalNine(char des[], char source[]) {
//	for (int i = source[0]; i >= 1; i--) {
//		char tmp[MAXN] = { '\0' };
//		for (int j = 0; j <= table[i][0]; j++)
//			tmp[j] = table[i][j];
//
//		Multi(tmp, source[i]);
//		Add(des, tmp);
//
//		if (source[i] == 9) {
//			for (int j = 0; j <= i - 1; j++)
//				tmp[j] = source[j];
//
//			tmp[0] = i - 1; Add(tmp, ONE);
//			Add(des, tmp);
//			break;
//		}
//	}
//}
//
//void DealData(char a[]) {
//	strrev(&a[1]);
//	a[0] = strlen(&a[1]);
//	for (int i = 1; i <= a[0]; i++)
//		a[i] -= '0';
//
//	return;
//}
//
//int main() {
//	int T;
//	scanf("%d", &T);
//	memset(table, 0, sizeof(table));
//
//	table[2][0] = table[2][1] = 1;
//	for (int i = 3; i <= MAXN; i++) {
//		for (int j = 0; j <= table[i][0]; j++)
//			table[i][j] = table[i - 1][j];
//		Multi(table[i], 9);
//
//		char num[MAXN] = { 0 }; num[0] = i - 1; num[i - 1] = 1;
//		Add(table[i], num);
//	}
//	
//	while (T--) {
//		char a[MAXN], b[MAXN], ans1[MAXN], ans2[MAXN];
//		memset(ans1, 0, sizeof(ans1)); memset(ans2, 0, sizeof(ans2));
//		scanf("%s %s", &a[1], &b[1]);
//		DealData(a); DealData(b); Minus(a, ONE);
//
//		CalNine(ans1, a);
//		CalNine(ans2, b);
//		Minus(ans2, ans1);
//
//		for (int i = ans2[0]; i >= 1; i--)
//			printf("%d", ans2[i]);
//		printf("\n");
//	}
//	return 0;
//}