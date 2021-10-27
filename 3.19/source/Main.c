#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a;//principal
	float b;//interest rate
	float c;//term of the loan in days
	float d;//interest charge
	int i = 1;
	while (i != -1)
	{
		printf("Enter loan principle:");
		scanf_s("%f", &a);
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &c);
		d = a * b / (c / 365);
		printf("The interest charge is %f \n", d);
		printf("\n");
	}
	system("pause");
	return 0;



}