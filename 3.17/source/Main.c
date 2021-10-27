#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;//account number
	int b;//balance at the beginning of the month
	int c;//total of all items charged by this customer this month
	int d;//total of all credits applied to 
	int e;//allowed credit limit
	int n;//new blance
	int i=1;
	while (i != -1)
	{
		printf("enter account number");
		scanf_s("%d", &a);
		printf("enter beginning balance");
		scanf_s("%d", &b);
		printf("enter total charges");
		scanf_s("%d", &c);
		printf("enter total credits");
		scanf_s("%d", &d);
		printf("enter credit limit");
		scanf_s("%d", &e);
		n = b + c - d;
		if (n > b)
		{
			printf("credit limit exceeded");
		}
		printf("\n");
	}
	system("pause");
	return 0;



}