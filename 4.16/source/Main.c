#include<stdio.h>
#include<stdlib.h>

int main()
{
	char sign = '*';
	char sign2 = ' ';
	int i, j,temp,temp2;

	temp = 0;
	temp2 = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= i )
			{ 
				printf("%c", sign);
			}
			
			else
			{ 
				printf("%c", sign2);
			}
				

		}
		printf("\n");
	}

	printf("\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= i)
			{
				printf("%c", sign2);
			}

			else
			{
				printf("%c", sign);
			}
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j >= i)
			{
				printf("%c",sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j >0; j--)
		{
			if (j > i)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	for (i = 0; i <=9; i++)
	{
		for (j = 9; j >= 0; j--)
		{
			if (j <= i)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}


	system("pause");
	return 0;

}