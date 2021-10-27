#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float i, j;
	float a, b;
	a = 5000;
	for (i = 0.1; i < 0.121; )
	{
		a = 5000;
		printf("%f\n\n",i);
		for (j = 1; j <= 15; j++)
		{
			a = a + a * i;
			printf("%f\n", a);

		}
		printf("\n");
		i = i + 0.005;
	}




	system("pause");
	return 0;
}