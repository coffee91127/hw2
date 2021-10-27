#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a;//time
	float b;//rate
	float c;//salary
	printf("Enter # of hours worked: ");
	scanf_s("%f", &a);
	while (a != -1)
	{
		printf("Enter hourly rate of the worker: ");
		scanf_s("%f", &b);
		if (a <= 40)
		{
			c = a * b;
			printf("salary is %f \n", c);
		}
		else 
		{
			c = 40 * b + (a - 40)*b / 2;
			printf("salary is %f \n", c);
		}
		printf("Enter # of hours worked: ");
		scanf_s("%f ", &a);
	}	
	system("pause");
	return 0;
}