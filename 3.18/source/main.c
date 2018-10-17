#include<stdio.h>
#include<stdlib.h>
int main(){
	float a,b;
	while (1){
		
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &a);
		if (a != -1){
			b = 200 + a*0.09;
			printf("Salsry is : $%.2f\n", b);
			printf("\n");
		}
		else
			break;
		
	}
	
	system("pause");
		return 0;



}