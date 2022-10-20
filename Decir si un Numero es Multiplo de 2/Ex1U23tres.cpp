#include<stdio.h>
int main(){
	int n;
	char otro='s';
	while(otro=='s'){
		printf("\nIngresa un Numero: ");scanf("%i",&n);fflush(stdin);
		if(n%2==0){printf("\nEl numero %i si es multiplo de 2\n",n);
		}else{printf("\nEl numero %i no es multiplo de 2\n",n);
		}
		printf("\n¿Deseas Ingresar Otro numero?\n Si=s No=n \n");otro=getchar();fflush(stdin);
		}
}
