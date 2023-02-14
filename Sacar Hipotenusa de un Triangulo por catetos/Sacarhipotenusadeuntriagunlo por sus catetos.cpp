#include<stdio.h>
#include<math.h>
int main(){
	float cat1,cat2,hip;
	printf("Digite el Cateto 1: ");scanf("%f",&cat1);
	printf("Digite el Cateto 2: ");scanf("%f",&cat2);
	
	hip=sqrt(pow(cat1,2)+pow(cat2,2));
	printf("La hipotenusa es:%.2f ",hip);
}
