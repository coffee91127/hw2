#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i = 1;
	float a, salary;
	while (i != -1)
	{
		printf("sales:");
		scanf_s("%f", &a);
		salary = a * 9 / 100 + 200;
		printf("salary is %f\n", salary);
		printf("\n");
	}
		system("pause");
		return 0;
	
}