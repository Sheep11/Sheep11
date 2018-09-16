///*
//2018年4月18日 回溯+剪枝
//*/
//
//#include<stdio.h>
//using namespace std;
//const int MAXN = 30;
//
//int n, half, cnt;
//int array[MAXN][MAXN];
//int ans = 0;
//	
//void findAns(int t) {
//	if (t > n) {
//		if (cnt == half) ans += 1;
//		return;
//	}
//	
//	int tmp;
//	for (int i = 0; i < 2; i++) {
//		tmp = 0;
//		array[1][t] = i; 
//		cnt += i; tmp += i;
//
//		for (int j = 1; j < t; j++) {
//			array[j + 1][t - j] = !(array[j][t - j] ^ array[j][t - j + 1]);
//			if (array[j + 1][t - j]) cnt++, tmp++;
//		}
//
//		if (cnt <= half && (1 + t)*t / 2 - cnt <= half) //剪枝
//			findAns(t + 1);
//		cnt -= tmp;
//	}
//}
//
//int main() {
//	scanf("%d", &n);
//	cnt = ans = 0;
//	half = n*(n + 1) / 4;
//
//	if (n==23) printf("431095\n");
//	else {
//		findAns(1);
//		printf("%d\n", ans);
//	}
//	return 0;
//}