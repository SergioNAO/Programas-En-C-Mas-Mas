#include<stdio.h>
#include<string.h>
char vector[40];
int i,a=0;
void datos(){
	printf("Ingresa el texto\n");
	printf("----------------------------------------\n");
	gets(vector);
}
void cambio(){
	for(i=0;i<40;i++){
			switch(vector[i]){
		        case 'a':{vector[i]='W';a++;break;}
		        case 'e':{vector[i]='Q';a++;break;}
		        case 'i':{vector[i]='Z';a++;break;}
		        case 'o':{vector[i]='H';a++;break;}
		        case 'u':{vector[i]='X';a++;break;}
		        
	}	}
	}
void impresion(){
	printf("\nLos Caracteres cambiados fueron %i\n",a);
	printf("%s",vector);
}
int main(){
	datos();
	cambio();
	impresion();
}
