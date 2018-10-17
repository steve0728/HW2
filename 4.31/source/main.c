#include<stdio.h>
#include<stdlib.h>
int main(){
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if ((i == 1 || i == 7) && (j == 3 || j == 5) || (i == 2 || i == 6) && (j == 2 || j == 3 || j == 4 || j == 5 || j == 6) || (i == 3 || i == 5) && (j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 1 | j == 7) || (j == 4)||(i==4)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}





	system("pause");
	return 0;

}