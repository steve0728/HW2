#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	float b, c, sum;
	while (1){
		printf("Enter # of hours worked(-1 to end): ");
		scanf_s("%d", &a);
		if (a == -1) break;

		else {
			printf("Enter hourly rate of the worker ($00.00): ");
			scanf_s("%f", &b);
			if (a > 40){
				sum = b*40 + (a-40)*1.5*b;
				printf("Salary is $%.2f", sum);
			}
			else{
				c = a*b;
				printf("Salary is $%.2f", c);
			}

		}
		printf("\n");
	}
		system("pause");
		return 0;


	

}