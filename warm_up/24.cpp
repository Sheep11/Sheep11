//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	freopen("in1.txt", "r", stdin);
//	int T;
//	scanf("%d", &T); getchar();
//	int n = T;
//	char ans[201] = { '\0' };
//	gets_s(ans); getchar();
//
//	while (T--) {
//		char sln[201] = { '\0' };
//		char ques[101][201];
//		memset(ques, 0, sizeof(ques));
//		int find_sln = 0;
//
//		int m = 0;
//		while (gets_s(ques[m])!=NULL && ques[m][0] !='\0')
//		{
//			int error = 0;
//			if (find_sln != 1)
//			{
//				for (int i = 0; i < (strlen(ans) > strlen(ans) ? strlen(ans) : strlen(ques[m])) ; i++)
//				{
//					if ((ans[i] >= 'a'&&ans[i] <= 'z'&&ques[m][i] >= 'a'&&ques[m][i] <= 'z') || (ans[i] == ' '&&ques[m][i] == ' '))
//					{
//						if (ans[i] == ' ') continue;
//						if (sln[ques[m][i] - 'a'] == 0 || sln[ques[m][i] - 'a'] == ans[i]) sln[ques[m][i] - 'a'] = ans[i];
//						else { error = 1; break; }
//					}
//					else { error = 1; break; }
//				}
//				if (error == 0 && strlen(sln) == 26) find_sln = 1;
//				else memset(sln, 0, sizeof(sln));
//			}
//			m += 1;
//		}
//
//		if (T != n - 1) printf("\n");
//		if (find_sln == 0) printf("No solution.\n");
//		else
//		{
//			for (int i = 0; i < m; i++, printf("\n"))
//				for (int j = 0; j < strlen(ques[i]); j++)
//					if (ques[i][j] == ' ') printf(" ");
//					else printf("%c", sln[ques[i][j] - 'a']);
//		}
//		
//	}
//	return 0;
//}