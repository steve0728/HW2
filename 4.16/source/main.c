#include<stdio.h>
#include<stdlib.h>
int main(){
	//---------------------------------------------------------
	printf("(A)\n");
	int a=1;
	for (int i = 0; i < 10; i++){
		for (int j = 1; j < 11; j++){
			if (a >= j) printf("*");
		}
		a++;
		printf("\n");
	}
	//---------------------------------------------------------
	printf("(B)\n");
	int d = 10;
	for (int i = 0; i < 10; i++){
		for (int j = 1; j < 11; j++){
			if (d >= j) printf("*");
		}
		d--;
		printf("\n");
	}
	//---------------------------------------------------------
	//---------------------------------------------------------
	printf("(C)\n");
	int b = 1;
	for (int i = 0; i < 10; i++){
		for (int j = 1; j < 11; j++){
			if (b >= j) printf(" ");
			else printf("*");
		}
		b++;
		printf("\n");
	}
	//---------------------------------------------------------
	printf("(D)\n");
	int c = 10;
	for (int i = 0; i < 10; i++){
		for (int j = 1; j < 11; j++){
			if (c >= j) printf(" ");
			else printf("*");
		}
		c--;
		printf("\n");
	}
	system("pause");
	return 0;
}