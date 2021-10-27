#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;//length
	int b;//breadth
	int i, j;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	for (i = 0; i < a; i++)
	{
		for (j=0; j<b;j++)
		{
			if ((i == 0) || (i == a - 1) || (j == 0) || (j==b - 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
	system("pause");
	return 0;
}