#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int s[1000][26] = { 0 };
char str[1000] = { '\0' };
int restmp[26];
int count = 0;
int tmp_count, ttmp_count;

void single()//������ȡʽ�ֿ��洢
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

void check()//����Ƿ����ظ��������ظ��ͼ��뵽s
{
	for (int i = 0; i <= 25; i++)
	{
		for (int i = 0; i <= tmp_count; i++)
			if (same(s[i], restmp)) goto end;//�ظ���ֱ�ӽ���
	}
	count++;
	for (int i = 0; i <= 25; i++)
		s[count][i] = restmp[i];
	
end:;
}

int Res(int c1[], int c2[])//0������Ϊ��	1�����ⲻΪ�գ������ǲ�������������⣨��ʱû�ж�s�Ĳ�����
{
	int number = 0;
	for (int i = 0; i <= 25; i++)
	{
		if (c1[i] + c2[i] == 0 && c1[i] != 0)//���п�������
			number += 1;
	}

	if (number == 1)
	{
		for (int j = 0; j <= 25; j++)//�������⣬restmpΪ�����ʽ
		{
			if (c1[j] + c2[j] == 0) restmp[j] = 0;
			else if (c1[j] == 0) restmp[j] = c2[j];
			else restmp[j] = c1[j];
		}

		for (int i = 0; i <= 25; i++)//���restmp�Ƿ�Ϊ��
		{
			if (restmp[i] != 0)//����һ����=0����Ϊ�գ������Ƿ��ظ���check
			{
				check();
				return 1;
			}
		}
		return 0;//restmpΪ���򷵻�0
	}
	else return 1;//���ɽ��������������

}

int main()
{
	single();

	ttmp_count = 0;
	tmp_count = count;//ttmpָ��S1��ʼλ�ã�tmpָ��S1���λ�ã�countָ��S2���λ��
	while (1)
	{
		for (int i = tmp_count; i >= ttmp_count; i--)
			for (int j = i - 1; j >= 0; j--)
			{
				if (Res(s[i], s[j]) == 0) { printf("NO\n"); system("pause"); return 0; }//����Ϊ��
			}

		if (count == tmp_count) { printf("YES\n"); system("pause"); return 0; }//δ�����µ����⹫ʽ
		else 
		{
			ttmp_count = tmp_count + 1;
			tmp_count = count;
		}
	}
	
	system("pause");
	return 0;
}