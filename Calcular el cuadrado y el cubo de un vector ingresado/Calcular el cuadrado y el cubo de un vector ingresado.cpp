#include<stdio.h>
#include<math.h>
int main(){
	int i,vector1[4],vector2[4],vector3[4];
	printf("Ingresa los numeros del Vector:\n");
	for(i=0;i<4;i++){scanf("%i",&vector1[i]);fflush(stdin);}
	for(i=0;i<4;i++){vector2[i]=pow(vector1[i],2);}
	for(i=0;i<4;i++){vector3[i]=pow(vector1[i],3);}printf("\n");
	printf("\nEl Vector al cuadrado es:");
	for(i=0;i<4;i++){printf("%i\t",vector2[i]);}printf("\n");
	printf("\nEl Vector al cubo es:");
	for(i=0;i<4;i++){printf("%i\t",vector3[i]);}
}
