#include <time.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	srand(time(0));
	//freopen("out.txt", "w", stdout);
	printf("[Text]\n");

	int rank;
	int num;
	rank = 6 + rand() % 5;//文本行数
	for (int i = 0; i < rank; i++)
	{
		num = 2 + rand() % 15;//一行字符数
		for (int i = 0; i < num; i++)
		{
			if (rand() % 6 == 0)printf(" ");
			else printf("%c", 'a' + rand() % 26);
		}
		printf("\n");
	}
	printf("[/Text]\n");

	int k;
	k = 1 + rand() % 4;
	while (k--)
	{
		int type;
		type = rand() % 4;
		if (type == 0)
		{
			printf("i ");
			printf("%d", 1 + rand() % rank);
			printf("/");
			num = 2 + rand() % 15;//一行字符数
			for (int i = 0; i < num; i++)
			{
				if (rand() % 6 == 0)printf(" ");
				else printf("%c", 'a' + rand() % 26);
			}
			printf("\n");
		}
		else if (type == 1)
		{
			printf("c ");

			num = 1 + rand() % 3;//一行字符数
			for (int i = 0; i < num; i++)
			{
				if (rand() % 6 == 0)printf(" ");
				else printf("%c", 'a' + rand() % 26);
			}
			printf("/");
			num = 1 + rand() % 3;//一行字符数
			for (int i = 0; i < num; i++)
			{
				if (rand() % 6 == 0)printf(" ");
				else printf("%c", 'a' + rand() % 26);
			}
			printf("\n");
		}
		else if (type == 2)
		{
			printf("d ");
			printf("%d\n", 1 + rand() % rank);
		}
		else if (type == 3)
		{
			printf("f ");
			num = 1 + rand() % 2;
			int a[15]; int n;
			for (int i = 0; i <= num; i++)
			{
				n = rand() % 5;
				int flag = 1;
				for (int j = 0; j < num; j++)
				{
					if (n == a[j])
					{
						flag = 0;

					}
				}
				if (flag == 0)num--;
				else a[i] = n;
			}
			for (int i = 0; i <= num; i++)
			{
				if (i == 0)
					printf("%d", a[i]);
				else
					printf("/%d", a[i]);
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}