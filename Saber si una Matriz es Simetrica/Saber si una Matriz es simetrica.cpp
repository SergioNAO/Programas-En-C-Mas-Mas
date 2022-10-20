#include<stdio.h>
#include<conio.h>
#define TAM 2
int matriz[TAM][TAM];
int i,j,k,cuenta=0;
void datos(){
printf("Ingresa los numero de la matriz\n");	
     for(i=0;i<TAM;i++){
     	for(j=0;j<TAM;j++){
     		printf("(%i)(%i).- ",i+1,j+1);
     		scanf("%i",&matriz[i][j]);fflush(stdin);
			 }	
	}
}
void vista(){
	int i,j;
	 printf("Columnas\n");
	 for(i=0;i<TAM;i++){
	 	for(j=0;j<TAM;j++){
     	printf("|%i|",matriz[i][j]);
     	if(matriz[i][j]==matriz[j][i]){cuenta++;
		 }
     		}
		 printf("\n");
	 }
	}
void comp(){
	if(cuenta==TAM*TAM){printf("La Matriz Es Simetrica");
		
	} else{printf("La Matriz no es Simetrica");}
	
	}
	
int main(){
datos();
vista();
comp();	
	return 0;
}
