#include<stdio.h>
#include<conio.h>
//Se escriben 10 Letras y te da como resultado cuantas son Vocales y Cuantas Consonantes
int main(){
	char letra,a,e,i,o,u;
	int x=0,conso,vocal;
	do{
		printf("Escribe una letra: ");scanf("%c",&letra);fflush(stdin);x++;
	     if(letra=='a'){vocal++;}
	     if(letra=='e'){vocal++;}
	     if(letra=='i'){vocal++;}
	     if(letra=='o'){vocal++;}
	     if(letra=='u'){vocal++;}
	     else{conso++;}
			}while(x<10);
			printf("\nVocales=%i   Consonantes=%i",vocal,conso);
}
