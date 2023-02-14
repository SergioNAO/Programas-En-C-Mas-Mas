#include<stdio.h>

int main(){
	int num[5];
	int i, j, n, aux;
	printf("Ingrese los Numeros:\n");
	for(i=0;i<5;i++){
		scanf("%i",&num[i]);
	}
	n = 5;
    for(i=1; i<n; i++) {
    j = i;
    aux = num[i];
    while(j>0 and aux<num[j-1]) {
    num[j] = num[j-1];
    j=j-1;
    }
    num[j] = aux;
    }
    printf("\n\nLos elementos ordenados del arreglo son: \n");
    for(i=0; i<n; i++) {
    printf("Elemento [%i]: %i\n", i+1, num[i]);}
	
	
}
