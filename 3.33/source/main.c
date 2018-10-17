#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	printf("Enter number: ");
	scanf_s("%d", &a);
	
		if (a == 3 || a == 12){
			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 12; j++){
					if (i == 1) {
						if (j == 0 || j == 11) printf("+");
						else printf(" ");
					}
					else printf("+");
				}
				printf("\n");
			}
		}
		





















	system("pause");
	return 0;
}