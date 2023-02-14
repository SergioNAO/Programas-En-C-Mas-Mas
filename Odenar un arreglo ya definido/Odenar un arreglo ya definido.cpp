#include <stdio.h>
int arreglo[] = {10,24,8,7,60,5,4,3,2,1};
int i, j, n, aux;

main() {

n = 10;
for(i=1; i<n; i++) {
j = i;
aux = arreglo[i];
while(j>0 && aux<arreglo[j-1]) {
arreglo[j] = arreglo[j-1];
j=j-1;
}
arreglo[j] = aux;
}
printf("\n\nLos elementos ordenados del arreglo son: \n");
for(i=0; i<n; i++) {
printf("Elemento [%i]: %d\n", i+1, arreglo[i]);}
return 0;

}
