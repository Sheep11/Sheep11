//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//
//void AddZero(char c[], char new_c[], int len)
//{
//	for (int i = 0; i < len; i++)
//		new_c[i] = '0';
//	strcat(new_c, c);
//}
//
//int main() {
//	char a[401], b[401], a_new[801] = { '\0' }, b_new[801] = { '\0' };
//	int ans[801];
//	memset(ans, -1, sizeof(int) * 801);
//	scanf("%s %s", a, b);
//
//	int a_len = strlen(a), b_len = strlen(b), a_p = 0, b_p = 0;
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		if (a[i] == '.') a_p = i;
//		if (b[i] == '.') b_p = i;
//		if (a_p != 0 && b_p != 0) break;
//	}
//	if (a_p == 0) a_p = a_len;
//	if (b_p == 0) b_p = b_len;
//
//	if (a_p > b_p) {
//		AddZero(b, b_new, a_p - b_p);
//		strcpy(a_new, a);
//	}
//	else {
//		AddZero(a, a_new, b_p - a_p);
//		strcpy(b_new, b);
//	}
//
//	int len = strlen(b_new) > strlen(a_new) ? strlen(b_new) : strlen(a_new);
//	for (int tmp = 0, i = len - 1; i >= 0; i--)
//	{
//		if (a_new[i] == '.' || b_new[i] == '.') { ans[len - i - 1]=-2 ; continue; }
//		if (a_new[i] >= '0') a_new[i] -= '0';
//		if (b_new[i] >= '0') b_new[i] -= '0';
//
//		ans[len - i - 1] = (a_new[i] + b_new[i] + tmp) % 10;
//		tmp = (a_new[i] + b_new[i] + tmp) / 10;
//		if (i == 0) ans[len] = tmp;
//	}
//
//	int beg = 0, beg_1 = -1, end = 0;
//	for (int i = 0; ans[i] != -1; i++)
//		if (ans[i] != 0)
//		{
//			end = i;
//			if (beg_1 == -1) beg_1 = i;
//			if (ans[i] == -2) 
//			{
//				end += 1;
//				if (beg_1 == i) beg = beg_1 + 1;
//				else beg = beg_1;
//			}
//		}
//	for (int i = end; i >= beg; i--)
//	{
//		if (ans[i] == -2) printf(".");
//		else printf("%d",ans[i]);
//	}
//	printf("\n");
//	return 0;
//}