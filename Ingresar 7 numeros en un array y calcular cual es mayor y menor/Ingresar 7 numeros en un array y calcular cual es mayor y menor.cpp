#include <stdio.h>

int main(){
	int i,n[7],mayor=0,menor=0;
	
	for(i=0;i<7;i++){
		printf("Digite un numero: ");scanf("%i",&n[i]);fflush(stdin);
	}
	menor=n[0];
	mayor=n[0];
	printf("Los numeros del Vector son: \n");
	for(i=0;i<7;i++){printf("%i\t",n[i]);
	}
	for (i=0; i<7; i++){
           if (n[i]> mayor){mayor=n[i];}
    }
    for (i=0; i<7; i++){
          if (n[i]<menor){menor=n[i];}
	}printf("\n");
printf("\nEl Menor es %i\n", menor);
printf("\nEl Mayor es %i\n", mayor);
}
