#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, i, j;
	for ( i = 1; i < 501; i++){
		for ( j=1; j < 501; j++){
			for ( a = 1; a < 501; a++){
				if (i*i + j*j == a*a) printf("%d %d %d\n", i, j, a);

			}
			
		
				
			}
		
				
		}

	


	system("pause");
	return 0;
}