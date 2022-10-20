//Promedio

#include<stdio.h>
//Este Codigo es para calcular el promedio de 5 Calificaciones 
//Es simple su modificacion para acomodar segun a las nesecidades
int main(){
  float n1,n2,n3,n4,n5;
  float prom = 0;
  float res = 0;
   printf("Escribe tus Calificaciones:  ");
   scanf("%f",&n1);
   scanf("%f",&n2);
   scanf("%f",&n3);
   scanf("%f",&n4);
   scanf("%f",&n5);
   res=n1+n2+n3+n4+n5;
   prom=res/5;
   printf("El promedio es:%f  ",prom);
   
   system("pause");
}
