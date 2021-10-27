#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,j;
	int temp, temp2,temp3;
	char sign = '*';
	char sign2 = ' ';

	temp = 3;
	temp2 = 5;
	temp3 = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=9; j++)
		{
			if (temp<j && j<temp2 && temp3<5 && i<5)
			{
				printf("%c", sign);
			}
			
			else if (temp > j && j > temp2 && temp3 >4 )
			{
				printf("%c", sign);
			}
			
			
			else
			{
				printf("%c", sign2);
			}
			
		}
		temp--;
		temp2++;
		temp3++;
		if (temp3 == 5)
		{
			temp = 8;
			temp2 = 0;
		}
		printf("\n");
		
	}
	printf("%d %d %d", temp, temp2,temp3);
	system("pause");
	return 0;



}