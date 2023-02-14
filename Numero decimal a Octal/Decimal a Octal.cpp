 #include <stdio.h>

 main(){
   int base, suma, num, res;
    base = 1;
    suma = 0;
    char otro='s';
    while(otro=='s'){
    	base = 1;
        suma = 0;
         printf("Ingresa un numero: ");
         scanf("%i", &num);fflush(stdin);
	      do{
             res = num % 8;fflush(stdin);
             num = num / 8;fflush(stdin);
             suma = suma + res * base;fflush(stdin);
             base = base * 10;fflush(stdin);
           } while(num > 0);fflush(stdin);
             printf("El numero octal es:%i \n", suma);

	printf("¿Desea Ingresar Otro Numero?\n Si=s No=n \n");otro=getchar();fflush(stdin);}
	
}

