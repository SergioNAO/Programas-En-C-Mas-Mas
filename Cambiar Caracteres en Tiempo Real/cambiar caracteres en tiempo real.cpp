#include<stdio.h>
#include<string.h>
#include<conio.h>
char vector[40];
int i,a=0;
//Este programa cambia en tiempo real al momento de escribir las letras este programa deriva del programa Cambiar caracteres
//por eso tiene elementos que no se utiliza como el "Impresion"
//La letra "a" la cambia por la "W"
//La letra "e" la cambia por la "Q"
//La letra "i" la cambia por la "Z"
//La letra "o" la cambia por la "H"
//La letra "u" la cambia por la "X"
void cambio(){
			switch(vector[i]){
		        case 'a':{vector[i]='W';a++;break;}
		        case 'e':{vector[i]='Q';a++;break;}
		        case 'i':{vector[i]='Z';a++;break;}
		        case 'o':{vector[i]='H';a++;break;}
		        case 'u':{vector[i]='X';a++;break;}
		        
	}	
	}
void datos(){
	
	printf("Ingresa el texto\n");
	printf("----------------------------------------\n");
	for(i=0;i<40;i++){
	vector[i]=getch();
	cambio();
	printf("%c",vector[i]);
	}
		
		
	

}

void impresion(){
	printf("\nLos Caracteres cambiados fueron %i\n",a);
	printf("%s",vector);
}
int main(){
	datos();
	//cambio();
	//impresion();
}
