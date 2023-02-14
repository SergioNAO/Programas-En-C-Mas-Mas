#include<stdio.h>
int main(){
	int r1,r2,cont=0;
	printf("Ingresa el rango 1: ");scanf("%i",&r1);fflush(stdin);
	printf("Ingresa el rango 2: ");scanf("%i",&r2);fflush(stdin);
	while(r1<=r2){
	if (r1%2!=0){printf("%i\t",r1);cont++;}r1++;
	}printf("\nEl numero de Impares fue:%i",cont);
	}
	
		

	
	

