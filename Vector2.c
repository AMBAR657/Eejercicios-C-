//incluimos las librerías 
#include <stdio.h>
#include <stdlib.h>
// tenemos nuestro metodo principal
int main(){
    //declaramos los vectores en tipo entero y va a llegar hasta el lugar 100
    int vector[100];
    //vamos a inivializar nuetra variable en 0
    int i=0;
    int r;
    // tenemos nuestro ciclo while 
    while(i<=100){
        //vamos a decir que se tiene que ir redtando la variable que se ingreso 
        r=100-i;
        vector[i]=r;
        printf("Vector[%d]= %d ", i, vector[i]);
        //vamos a imprimir un salto de linea 
        printf("\n");
        i++;
    }
    // pausamos el programa 
    system("Pause");
    return 0;
}
