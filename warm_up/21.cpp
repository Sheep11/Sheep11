//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
////1110XXXX
////10XX XXXX
////10XX XXXX
//
//int GetDec(unsigned char a, unsigned char b)
//{
//	int res = b - 128;
//	for (int i = 0, rmd = 0; i < 5; i++)
//	{
//		rmd = a % 2;
//		for (int tmp = i + 6; tmp > 0; tmp--)
//			rmd *= 2;
//
//		res += rmd;
//		a /= 2;
//	}
//	return res;
//}
//int GetDec1(unsigned char a, unsigned char b, unsigned char c)
//{
//	int res = c - 128;
//	for (int i = 0, rmd = 0; i < 6; i++)
//	{
//		rmd = b % 2;
//		for (int tmp = i + 6; tmp > 0; tmp--)
//			rmd *= 2;
//
//		res += rmd;
//		b /= 2;
//	}
//	for (int i = 0, rmd = 0; i < 4; i++)
//	{
//		rmd = a % 2;
//		for (int tmp = i + 12; tmp > 0; tmp--)
//			rmd *= 2;
//
//		res += rmd;
//		a /= 2;
//	}
//	return res;
//}
//
//int ans[4][65536];
//int main() {
//	//freopen("in.txt", "r", stdin);
//	//freopen("out.txt", "w", stdout);
//	memset(ans, 0, sizeof(ans));
//	unsigned char rec_1, rec_2, rec_3;
//
//	while (rec_1 = getchar(), rec_1 != 255) 
//	{
//		if (rec_1 >= 224)
//		{
//			rec_2 = getchar(); rec_3 = getchar();
//			int dec = GetDec1(rec_1, rec_2, rec_3);
//			ans[0][dec] = rec_1;
//			ans[1][dec] = rec_2;
//			ans[2][dec] = rec_3;
//			ans[3][dec] += 1;
//		}
//		else if (rec_1 >= 192)
//		{
//			rec_2 = getchar();
//			int dec = GetDec(rec_1, rec_2);
//			ans[0][dec] = rec_1;
//			ans[1][dec] = rec_2;
//			ans[2][dec] = 0;
//			ans[3][dec] += 1;
//		}
//	}
//	
//	int have_print = 0;
//	for (int i = 128; i < 65536; i++)
//	{
//		if (ans[3][i] > 1) {
//			have_print = 1;
//			if (ans[2][i] == 0) printf("%c%c 0x%04x %d\n", ans[0][i], ans[1][i], i, ans[3][i]);
//			else printf("%c%c%c 0x%04x %d\n", ans[0][i], ans[1][i], ans[2][i], i, ans[3][i]);
//		}
//	}
//	if (have_print == 0) printf("No repeat!\n");
//
//	return 0;
//}