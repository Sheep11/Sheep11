//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//
//void sort(unsigned int a[][1501], int left, int right)
//{
//	if (left >= right) return;
//	int i = left, j = right;
//	unsigned int key = a[0][left], key_1 = a[1][left];
//	while (i < j)
//	{
//		while (i < j && a[0][j] >= key) j--;
//		a[0][i] = a[0][j]; a[1][i] = a[1][j];
//		while (i < j && a[0][i] <= key) i++;
//		a[0][j] = a[0][i]; a[1][j] = a[1][i];
//	}
//	a[0][i] = key; a[1][i] = key_1;
//	sort(a, left, i - 1);
//	sort(a, i + 1, right);
//}
//
//int main() {
//	char rec[21] = { '\0' };
//	int have_error = 0;
//	unsigned int res[2][1501];
//	//res[0][0] == 0;
//	memset(res, 0, sizeof(res));
//	int trans[25] = { 2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9 };
//	unsigned int weight[7] = { 1000000,100000,10000,1000,100,10,1 };
//	unsigned char map[250010] = { 0 };
//	int pos = 0;
//
//	printf("Error:\n");
//	while (scanf("%s", rec) > 0)
//	{
//		int is_error = 0;
//		unsigned int rec_num = 0;
//		int n = 0;
//
//		for (int i = 0; rec[i] != '\0'; i++)
//		{
//			if (rec[i] != '-')
//			{
//				n += 1;
//				if (rec[i] == 'Q' || rec[i] == 'Z') { is_error = 1; break; }
//				else if(n==1) 
//						if(rec[i]!='3'&&rec[i] != '6'&&rec[i] != 'D'&&rec[i] != 'E'&&rec[i] != 'F'&&rec[i] != 'M'&&rec[i] != 'N'&&rec[i] != 'O')
//						{
//							is_error = 1; break;
//						}
//			}
//		}
//		if (n != 7) is_error = 1;
//		if (is_error) 
//		{
//			printf("%s\n", rec);
//			have_error = 1;
//			continue;
//		}
//
//		for (int i = 0, count = 0; rec[i]!='\0' && count != 7; i++)
//		{
//			if (rec[i] != '-')
//			{
//				if (rec[i] >= '0'&&rec[i] <= '9') rec_num += (rec[i] - '0')*weight[count++];
//				else rec_num += trans[rec[i] - 'A'] * weight[count++];
//			}
//		}
//
//		int is_dup = 0;
//		int p_sub = 0, p_byte = 0;
//		unsigned char tmp = 1;
//		if (rec_num >= 6000000)
//		{
//			p_sub = rec_num - 5000000;
//			p_byte = p_sub % 8; p_sub /= 8;
//			tmp = tmp << p_byte;
//			if ((map[p_sub] & tmp) > 0) is_dup = 1;
//			else map[p_sub] += tmp;
//		}
//		else
//		{
//			p_sub = rec_num - 3000000;
//			p_byte = p_sub % 8; p_sub /= 8;
//			tmp = tmp << p_byte;
//			if ((map[p_sub] & tmp) > 0) is_dup = 1;
//			else map[p_sub] += tmp;
//		}
//
//
//		if (is_dup)
//		{
//			for (int i = 0; i < pos; i++)
//				if (rec_num == res[0][i]) { res[1][i] += 1; goto find; }
//				//else if (rec_num < res[0][i]) break;
//			res[0][pos] = rec_num;
//			res[1][pos++] = 2;
//		}
//	find:;
//	}
//
//	
//	sort(res, 0, pos - 1);
//	if (!have_error) printf("Not found.\n");
//	printf("\nDuplication:\n");
//	if (res[0][0] == 0) printf("Not found.\n");
//	else for (int i = 0; i < pos; i++)
//		printf("%d-%04d %d\n", res[0][i] / 10000, res[0][i] % 10000, res[1][i]);
//	
//
//	return 0;
//}