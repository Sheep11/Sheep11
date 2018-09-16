///*
//2018年4月14日 减枝+回溯
//*/
//
//#include<stdio.h>
//using namespace std;
//const int INF = 0x7f7f7f7f;
//const int MAXN = 15;
//
//int task[MAXN][MAXN];
//int n, ans = INF;
//int postfix_mintime[MAXN];
//
//void Assign(int state,int tnum,int time) {
//	if (tnum > n) {
//		if (time < ans) ans = time;
//		return;
//	}
//
//	if (time + postfix_mintime[tnum] >= ans) return;//剪枝
//
//	for (int i = 1; i <= n; i++) 
//		if ((state >> i) % 2 == 0) 
//			Assign(state + (1 << i), tnum + 1, time + task[i][tnum]);
//	return;
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			scanf("%d", &task[i][j]);
//
//	int min_time[MAXN];
//	for (int col = 1; col <= n; col++) {
//		min_time[col] = INF;
//		for (int row = 1; row <= n; row++)
//			if (task[row][col] < min_time[col]) 
//				min_time[col] = task[row][col];
//	}
//	postfix_mintime[n] = min_time[n];
//	for (int i = n - 1; i >= 1; i--)
//		postfix_mintime[i] = postfix_mintime[i + 1] + min_time[i];
//
//	Assign(0, 1, 0);
//	printf("%d\n", ans);
//
//	return 0;
//}