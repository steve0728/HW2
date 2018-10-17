#include<stdio.h>
#include<stdlib.h>

int main(){
	float a, b, i, j, e,sum;
	while (1){
	printf("Enter account number(-1 to end): ");
	scanf_s("%f", &a);
	if (a != -1){
		printf("Enter beginning balance: ");
		scanf_s("%f", &b);
		printf("Enter total charged: ");
		scanf_s("%f", &i);
		printf("Enter total credits: ");
		scanf_s("%f", &j);
		printf("Enter credit limit: ");
		scanf_s("%f", &e);

	sum = b + i - j;
	printf("Account:\t%.2f\n", a);
	printf("Credit limit:\t%.2f\n", j);
	printf("Balance:\t%.2f\n", sum);
	if (sum > e) printf("Credit Limit Exceeded\n");
	}
	else {
		break;
	}
	printf("\n");
	}
	system("pause");
	return 0;












}