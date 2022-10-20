#include<stdio.h>
int main(){
	void binario(int n);
	int num;
	do{printf("Dame el numero que quieres convertir: ");
	scanf("%i",&num);
	printf("El numero Binario es: ");
	}while(num<0);
    
	binario(num);
    }
    void binario(int n){
    	if(n>1) binario(n/2);
    	printf("%i",n%2);
	}
