#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int who;
	float weeklysalary = 1000;
	float hoursalary = 150;
	float ressalary = 50;
	float hourwork, total, piece;
	
	while (1==1)
	{
		printf("Enter 1 is managers \n");
		printf("Enter 2 is hourly worker \n");
		printf("Enter 3 is commission workers \n");
		printf("Enter 4 is pieceworker \n");
		printf("Enter -1 to end \n");
		scanf_s("%d", &who);
		
		if (who == -1)
		{
			break;
		}
		switch (who)
		{

		case 1:
				printf("Salary is %.2f \n\n", weeklysalary);
				break;
		case 2:
				printf("Enter # of hours :");
				scanf_s("%f",&hourwork);
				if (hourwork <= 40)
				{
					total = hoursalary * hourwork;
				}
				else if (hourwork > 40)
				{
					total = hoursalary * 40 + hoursalary * (hourwork-40);
				}
				printf("Salary is %.2f \n\n", total);
				break;
		case 3:
			printf("Enter # of gross weekly sale:");
			scanf_s("%f",&hourwork);
			total = 250 + (hourwork*0.057);
			printf("Salary is %.2f \n\n", total);
			break;



		case 4:
				printf("Enter # of items they produced :");
				scanf_s("%f", &piece);
				total = piece * ressalary;
				printf("Salary is %.2f \n\n", total);
				break;
		




		}



	}
	system("pause");
	return 0;



}