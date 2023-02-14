  #include<stdio.h>
  
  int main(){
  int a,b,c;
  char otro='s';
  while(otro=='s'){
  printf("Escriba 3 numeros enteros diferentes:\n");
  printf("Numero 1: ");scanf("%i",&a);fflush(stdin);
  printf("Numero 2: ");scanf("%i",&b);fflush(stdin);
  printf("Numero 3: ");scanf("%i",&c);fflush(stdin);
     if(a<b){
        if(a>c){
            printf("El Mayor es:%i  El Menor es:%i\n",b,c);
        }else if(c<b){
            printf("El Mayor es:%i El Menor es:%i\n",b,a);
        }else{
            printf("El Mayor es:%i El Menor es:%i\n",c,a);
        }

    }else if(b>c){
            printf("El Mayor es:%i El Menor es:%i\n",a,c);
        }else if(c<a){
            printf("El Mayor es:%i El Menor es:%i\n",a,b);
        }else{
            printf("El Mayor es:%i El Menor es:%i\n",c,b);
        }
		printf("¿Desea Ingresar Otros Numeros?\n Si=s No=n \n");otro=getchar();fflush(stdin);}
}
