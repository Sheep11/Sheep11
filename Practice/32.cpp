//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define TEAM 101
//
//void swap(long long a[3][TEAM], int pos) {
//	int tmp;
//	for (int k = 0; k < 3; k++)
//	{
//		tmp = a[k][pos];
//		a[k][pos] = a[k][pos + 1];
//		a[k][pos + 1] = tmp;
//	}
//}
//long long questions[10000][TEAM];
//int main() {
//	int T = 1;
//
//	while (T++)
//	{
//		int n;
//		if (scanf("%d", &n), n == 0) break;
//
//		int time, team, team_max = 0, ques;
//		long long res[3][TEAM];
//		memset(res, 0, sizeof(res));
//		memset(questions, 0, sizeof(questions));
//
//		while (scanf("%d", &time), time != 0)
//		{
//			scanf("%d %d", &team, &ques);
//			char judge[4] = { '\0' };
//			getchar(); gets(judge);
//
//			if (team > team_max) team_max = team;
//			res[0][team - 1] = team;
//			if (judge[0] == 'y') 
//			{
//				res[2][team - 1] += time + questions[ques][team];
//				res[1][team - 1] += 1;
//			}
//			else
//				questions[ques][team] += 20;
//		}
//
//		for(int i=0;i<team_max - 1;i++)
//			for (int j = 0; j < team_max - 1 - i; j++)
//				if ((res[1][j] < res[1][j + 1])||(res[1][j]==res[1][j+1]&&res[2][j]>res[2][j+1])|| (res[1][j] == res[1][j + 1] && res[2][j]==res[2][j + 1]&&res[0][j]>res[0][j+1]))
//					swap(res, j);
//
//		printf("case %d:\n", T - 1);
//		for (int rank = 1, num = 0; num < 3 && res[0][num] != 0; rank=num+1)
//		{
//			do { 
//				printf("%lld %lld %lld %d\n", res[0][num], res[1][num], res[2][num], rank);
//				num++;
//			}
//			while (res[1][num] == res[1][num - 1] && res[2][num] == res[2][num - 1] && res[0][num] != 0);
//		}
//
//	}
//	return 0;
//}