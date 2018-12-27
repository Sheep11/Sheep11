#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int word[5][70000];

int main()
{
	unsigned char tem1, tem2, tem3;
	int i, unicode = 0;
	int max = 0;

	memset(word, 0, sizeof(word));
	while (tem1 = getchar(), tem1 != 255)
	{
		if (tem1 < 128)
			continue;
		else
		{
			if (tem1 - 128 - 64 - 32 >= 0)
			{
				tem1 = tem1 - 128 - 64 - 32;
				tem2 = getchar() - 128;
				tem3 = getchar() - 128;
				unicode = tem1 * 4096 + tem2 * 64 + tem3;
				word[4][unicode] = 1;
			}
			else
			{
				tem1 = tem1 - 128 - 64;
				tem2 = getchar() - 128;
				tem3 = 0;
				unicode = tem1 * 64 + tem2;
				word[4][unicode] = 0;
			}

			if (unicode > max)
				max = unicode;

			word[0][unicode]++;
			word[1][unicode] = tem1;
			word[2][unicode] = tem2;
			word[3][unicode] = tem3;
		}

	}
	int same = 0;
	for (i = 0; i <= max; i++)
	{
		if (word[0][i] > 1)
		{
			same = 1;
			if (word[4][i] == 1)
				printf("%c%c%c ", word[1][i], word[2][i], word[3][i]);
			else
				printf("%c%c ", word[1][i], word[2][i]);

			printf("0x%04x ", i);
			printf("%d\n", word[0][i]);
		}
	}
	if (same == 0)
		printf("No repeat!\n");
}