#include<stdio.h>
#include<stdlib.h>
int main(){
	float a, b, c, e;

	while (1){
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &a);
		if (a != -1){
			printf("Enter interest rate:");
			scanf_s("%f", &b);
			printf("Enter term of the loan in days:");
			scanf_s("%f", &c);
			e = a*b*c / 365;
		
		printf("The interest charge is $%.2f\n",e);
		}
		else {
			break;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}