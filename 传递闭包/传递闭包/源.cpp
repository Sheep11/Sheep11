#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define MAX 1000

int main()
{
	int size = 0;
	int input[MAX] = { 0 };
	int matrix[100][100] = { 0 };

	while (scanf("%d", &input[size]) != EOF)
	{
		size++;
	}
	size = sqrt(++size);

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrix[i][j] = input[size*i + j];

	for (int point = 0; point < size; point++)
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				matrix[i][j] += matrix[i][point] * matrix[point][j];

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (matrix[	i][j]) matrix[i][j] = 1;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			printf("%d ", matrix[i][j]);

		}
		printf("%d\n", matrix[i][size - 1]);
	}

	system("pause");
	return 0;
}