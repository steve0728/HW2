#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){

	float amount, principle = 5000, rate = .05;
	int year;
	for (rate = 0.1; rate <= 0.125; rate += 0.005){

		printf("Year\tAmount on deposit");
		printf("(%.1lf) \n", rate * 100);
		for (year = 1; year <= 15; ++year){
			amount = principle*pow(1.0 + rate, year);

			printf("%d\t%f\n", year, amount);
		}
		printf("\n");
	}

	system("pause");
	return 0;

}
