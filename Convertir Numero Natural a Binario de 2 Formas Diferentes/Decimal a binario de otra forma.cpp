//De decimal a binario
#include<stdio.h>

int main(){
	 int base, suma, num, res;
     base = 1;
     suma = 0;
     printf("Ingresa un numero: ");
     scanf("%d", &num);
     printf("El numero binario es: \n");
             do{res = num % 2;
                num = num / 2;
                suma = suma + res * base;
                base = base * 10;
			} while(num > 0);
            printf("%i \n", suma);
	
	
}
