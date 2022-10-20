// determinar el area y el volumen de un cilindro  2p.r.h + 2.p.r2
#include<stdio.h>
#define PI 3.14
int main() {
	char otro='s';
	float r,alt,ar,per;
	while(otro=='s'){
	printf("Dame el radio del cilindro:");scanf("%f",&r);fflush(stdin);
	printf("Dame la altura del Cilindro:");scanf("%f",&alt);fflush(stdin);
	ar=2*PI*r*(r+alt);
	per=PI*(r*r)*alt;
	printf("El area del Cilindro es:%.2f cm2\nEl perimetro del Cilindro es:%.2f cm3 \n",ar,per);
	printf("¿Desea Ingresar Otros valores?\n Si=s No=n \n");otro=getchar();fflush(stdin);
	}
}
