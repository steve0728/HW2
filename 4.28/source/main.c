#include<stdio.h>
#include<stdlib.h>
int main(){
	int paycode=0 ;
	float weeklySalary, hourlySalary, grossSales, payPerItem, totalPay,  hours, items;
	printf("Enter paycode for next employee : ");
	scanf_s("%d", &paycode);
		switch (paycode)
		{
		case 1:
			printf("Enter weekly salary for this manager: \n");
			scanf_s("%f", &weeklySalary);
			totalPay = weeklySalary;
			printf("totalPay is %.2f", totalPay);
			break;
		case 2:
			printf("Enter hourly salary for this hourly worker: \n");
			scanf_s("%f", &hourlySalary);
			printf("Enter number of hours worked: \n");
			scanf_s("%f", &hours);
			if (hours <= 40)
				totalPay = hours * hourlySalary;
			else
				totalPay = 40 * hourlySalary + (hours - 40) * hourlySalary * 1.5;
			printf("totalPay is %.2f", totalPay);
			break;
		case 3:
			printf("Enter gross sales for this comission worker: \n");
			scanf_s("%f", &grossSales);
			totalPay = 250 + grossSales * 0.057;
			printf("totalPay is %.2f", totalPay);
			break;
		case 4:
			printf("Enter number of produced items for this pieceworker: \n");
			scanf_s("%f", &items);
			printf("Enter pay for each item: \n");
			scanf_s("%f", &payPerItem);
			totalPay = items * payPerItem;
			printf("totalPay is %.2f", totalPay);
			break;
		}
		system("pause");
		return 0;
	}
