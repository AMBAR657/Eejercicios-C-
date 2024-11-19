//incluimos las librerías 
#include <stdio.h>
#include <stdlib.h>
// tenemos nuestro metodo principal
int main(){
    int vector[100];
    int i=0;
    int r;
    // tenemos nuestro ciclo while 
    while(i<=100){
        r=100-i;
        vector[i]=r;
        printf("Vector[%d]= %d ", i, vector[i]);
        printf("\n");
        i++;
    }
    // pausamos el programa 
    system("Pause");
    return 0;
}
