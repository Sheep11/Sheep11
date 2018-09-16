///*小学期程设之欢度国庆 26 9的统计
//2017.9.25
//*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MAXN 10010
//#define MAX 10010
//
//typedef struct Number {
//	int num[MAX];
//	int len;
//} Number;
//
//void Multi(Number *ptr, int n) {
//	int i, tmp;
//	for (i = 1; i <= ptr->len; i++){
//		ptr->num[i] = ptr->num[i] * n + tmp;
//		
//		tmp = ptr->num[i] / 10;
//		if (ptr->num[i] >= 10) ptr->num[i] %= 10;
//		
//	}
//	if (tmp != 0) {
//		ptr->num[i] = tmp;
//		ptr->len = i;
//	}
//	return;
//}
//
//void Add(Number *ptr, int n) {
//	if (n == 0) return;
//	int i = 1;
//	ptr->num[1] += n;
//
//	while (ptr->num[i] >= 10) {
//		ptr->num[i + 1] += ptr->num[i] / 10;
//		ptr->num[i] %= 10;
//		i++;
//	}
//	if (i > ptr->len) ptr->len = i;
//}
//
//void Minus(Number *res1,Number *res2) {
//	for (int i = 1; i <= res2->len; i++)
//		res1->num[i] -= res2->num[i];
//	for (int i = 1; i <= res1->len; i++) 
//		while (res1->num[i] < 0) {
//			res1->num[i] += 10;
//			res1->num[i + 1] -= 1;
//		}
//	int len = res1->len;
//	while (res1->num[len] == 0 && len > 1)
//		len--;
//	res1->len = len;
//}
//
//
//int CalNine(Number *des, char source[], int len) {
//	Number res1 = *des, res2 = *des;
//	int meet_nine = 0;
//	for (int i = len; i >= 1; i--) {
//		Multi(&res1, 10);
//		Add(&res1, source[i]);
//
//		Multi(&res2, 9);
//		if (!meet_nine)
//			if(i!=1 || source[i] == 9) Add(&res2, source[i]);
//			else Add(&res2, source[i] + 1);
//
//		if (source[i] == 9) meet_nine = 1;
//	}
//	Add(&res1, 1);
//	Minus(&res1, &res2);
//	*des = res1;
//
//	return meet_nine;
//}
//
//int DealData(char ptr[]) {
//	int len = strlen(ptr);
//
//	ptr[len] = ptr[0];
//	for (int i = 1, tmp; i <= len/2; i++) {
//		tmp = ptr[i];
//		ptr[i] = ptr[len - i];
//		ptr[len - i] = tmp;
//	}
//
//	for (int i = 1; i <= len; i++)
//		ptr[i] -= '0';
//
//	return len;
//}
//
//int main() {
//	int T;
//	scanf("%d", &T);
//
//	while (T--) {
//		char a[MAXN] = { 0 }, b[MAXN] = { 0 };
//		Number ans1, ans2;
//		memset(&ans1.num, 0, MAX); ans1.len = 0;
//		memset(&ans2.num, 0, MAX); ans2.len = 0;
//		scanf("%s %s", a, b);
//		int len1 = DealData(a); int len2 = DealData(b);
//
//		int have_nine = CalNine(&ans1, a, len1);
//		CalNine(&ans2, b, len2);
//		Minus(&ans2, &ans1);
//
//		if (have_nine) 
//			Add(&ans2, 1);
//
//		for (int i = ans2.len; i >= 1; i--)
//			printf("%d", ans2.num[i]);
//		printf("\n");
//	}
//	return 0;
//}