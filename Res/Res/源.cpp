#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int s[1000][26] = { 0 };
char str[1000] = { '\0' };
int restmp[26];
int count = 0;
int tmp_count, ttmp_count;

void single()//将简单析取式分开存储
{
	scanf("%s",str);

	int h = 0, i = 0;
	while(str[i]!='\0')
	{
		if (str[i] == '&') h++;
		else if (str[i] >= 'a'&&str[i] <= 'z') s[h][str[i] - 'a'] = 1;
		else if (str[i] == '!') s[h][str[++i] - 'a'] = -1;
		i++;
	}
	count = h;
}

int same(int a[], int b[])
{
	for (int i = 0; i <= 25; i++)
	{
		if (a[i] != b[i]) return 0;
	}
	return 1;
}

void check()//检查是否有重复，若不重复就加入到s
{
	for (int i = 0; i <= 25; i++)
	{
		for (int i = 0; i <= tmp_count; i++)
			if (same(s[i], restmp)) goto end;//重复则直接结束
	}
	count++;
	for (int i = 0; i <= 25; i++)
		s[count][i] = restmp[i];
	
end:;
}

int Res(int c1[], int c2[])//0：消解为空	1：消解不为空，可能是不可消解或多对消解（此时没有对s的操作）
{
	int number = 0;
	for (int i = 0; i <= 25; i++)
	{
		if (c1[i] + c2[i] == 0 && c1[i] != 0)//若有可消解项
			number += 1;
	}

	if (number == 1)
	{
		for (int j = 0; j <= 25; j++)//进行消解，restmp为消解后公式
		{
			if (c1[j] + c2[j] == 0) restmp[j] = 0;
			else if (c1[j] == 0) restmp[j] = c2[j];
			else restmp[j] = c1[j];
		}

		for (int i = 0; i <= 25; i++)//检查restmp是否为空
		{
			if (restmp[i] != 0)//存在一个！=0即不为空，进行是否重复的check
			{
				check();
				return 1;
			}
		}
		return 0;//restmp为空则返回0
	}
	else return 1;//不可进行消解或多对消解

}

int main()
{
	single();

	ttmp_count = 0;
	tmp_count = count;//ttmp指向S1开始位置，tmp指向S1最后位置，count指向S2最后位置
	while (1)
	{
		for (int i = tmp_count; i >= ttmp_count; i--)
			for (int j = i - 1; j >= 0; j--)
			{
				if (Res(s[i], s[j]) == 0) { printf("NO\n"); system("pause"); return 0; }//消解为空
			}

		if (count == tmp_count) { printf("YES\n"); system("pause"); return 0; }//未出现新的消解公式
		else 
		{
			ttmp_count = tmp_count + 1;
			tmp_count = count;
		}
	}
	
	system("pause");
	return 0;
}