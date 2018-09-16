#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10000
int main()
{
	char str[MAX] = {'\0'}, biao[MAX] = { '\0' }, str1[MAX] = { '\0' }, str2[MAX] = { '\0' }, s[MAX] = { '\0' };
	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z'&&s[i] >= 'a') biao[s[i] - 'a'] = 1;
	}

	scanf("%s", str);
	int length = strlen(str);

	for (int i = 1; i < length; i = i + 6)
	{
		str1[str[i] - 'a'] = 1;
	}
	for (int i = 3; i < length; i = i + 6)
	{
		str2[str[i] - 'a'] = 1;
	}

	for (int i = 0, flag=0; i < 26; i++)
	{
		if (str2[i] != 1 && biao[i] == 1)
		{
			flag++;
			if(flag==1) printf("%c", i+'a');
			else printf(",%c", i+'a');
		}
	}
	printf("\n");

	for (int i = 0, flag = 0; i < 26; i++)
	{
		if (str1[i] != 1 && biao[i] == 1)
		{
			flag++;
			if (flag == 1) printf("%c", i+'a');
			else printf(",%c", i+'a');
		}
	}
	printf("\n");

	system("pause");
	return 0;
}