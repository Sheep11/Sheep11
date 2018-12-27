//#include<stdlib.h>
//#include<stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n); getchar();
//	char head_color = getchar(), color = head_color;
//	char rec;
//	int sum_left = 0, sum_right = 1, sum_white = 0, sum = 0;
//	int head_flag = 1, sum_head = 0, head = 0;
//
//	while (rec=getchar(),rec!='\n')
//	{
//		if (color == 'w')
//		{
//			sum_right += 1;
//			if (rec != 'w') color = rec;
//			continue;
//		}
//
//		if (rec == color || rec == 'w')
//		{
//			sum_right += 1;
//			if (rec == 'w') sum_white += 1;
//			else sum_white = 0;
//		}
//		else
//		{
//			if (head_flag == 1) { head = sum_right; head_flag--; }
//			if (head_flag == 0)
//			{
//				sum_head = sum_left + sum_right;
//				head_flag = -1;
//			}
//
//			if (sum_left + sum_right > sum) sum = sum_left + sum_right;
//			sum_left = sum_right - sum_white;
//			sum_right = 1 + sum_white;
//			sum_white = 0;
//			color = rec;
//		}
//	}
//	if (sum_left + sum_right > sum) sum = sum_left + sum_right;
//	if (color == head_color || color == 'w' || head_color == 'w')
//	{
//		if (sum_head + sum_right > sum) sum = sum_head + sum_right;
//		if (sum_left + sum_right + head > sum) sum = sum_left + sum_right + head;
//	}
//	printf("%d\n", sum);
//	return 0;
//}