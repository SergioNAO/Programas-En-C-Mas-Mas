#include<stdio.h>
int main(){
	float m,c,k;
	char otro='s';
	
	while(otro=='s'){
	printf("\nIngresa la cantidad de Metros: ");scanf("%f",&m);fflush(stdin);
	c=m*100;
	k=m/1000;
	printf("\nLa cantidad en Centimetros es: %.2f \n La cantidad en Kilometros es: %.2f \n",c,k);
	printf("\n¿Deseas Ingresar Otros valores?\n Si=s No=n \n");otro=getchar();fflush(stdin);
	}

}
