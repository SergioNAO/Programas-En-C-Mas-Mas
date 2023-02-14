#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define PI 3.14
int main(){
	int a,b,c,base, suma, num, res,op;
	base = 1;
    suma = 0;
	float r,alt,ar,per;
		printf("=====Elija una Opcion de Menu=====\n");
		printf("1.-MayorMenor \n2.-Octal \n3.-Cilindro \n4.-Salir\n");scanf("%i",&op);system("cls");
		switch(op){
			case 1:{
              printf("Escriba 3 numeros enteros diferentes:\n");
              printf("Numero 1: ");scanf("%i",&a);fflush(stdin);
              printf("Numero 2: ");scanf("%i",&b);fflush(stdin);
              printf("Numero 3: ");scanf("%i",&c);fflush(stdin);
               if(a<b){
                 if(a>c){printf("El Mayor es:%i  El Menor es:%i\n",b,c);}
				 else if(c<b){printf("El Mayor es:%i El Menor es:%i\n",b,a);} 
			     else{printf("El Mayor es:%i El Menor es:%i\n",c,a);}}
				 else if(b>c){printf("El Mayor es:%i El Menor es:%i\n",a,c);}
				 else if(c<a){printf("El Mayor es:%i El Menor es:%i\n",a,b);} 
				 else{printf("El Mayor es:%i El Menor es:%i\n",c,b);}
				break;}
			case 2:{ printf("Ingresa el numero que quieres convertir a Octal: ");scanf("%i", &num);fflush(stdin);
	                do{res = num % 8;fflush(stdin);
                        num = num / 8;fflush(stdin);
                        suma = suma + res * base;fflush(stdin);
                        base = base * 10;fflush(stdin);}
					while(num > 0);fflush(stdin);
                     printf("El numero octal es:%i \n", suma);
				  break;}
			case 3:{printf("Dame el radio del cilindro:");scanf("%f",&r);fflush(stdin);
	                  printf("Dame la altura del Cilindro:");scanf("%f",&alt);fflush(stdin);
	                  ar=2*PI*r*(r+alt);
	                  per=PI*(r*r)*alt;
	                  printf("\nEl area del Cilindro es:%.2fcm2\nEl perimetro del Cilindro es:%.2fcm3 \n",ar,per);
				break;}
			default:{printf("Saliendo del Sistema...");
				break;}	}
	}
