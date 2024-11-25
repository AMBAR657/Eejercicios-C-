//integramos las libreroas que vamos a utilizar 
#include <stdio.h>
#include <stdlib.h>
//tenemos nuetro metodo 
int main(void){
    //declaramos nietras variable i y la variable n de tipo entero 
    int i,n;
    //creamos nuetro apuntadores com un asterisco antes del nombre del apuntador
    int *buffer, *p_buffer;
    //vamos a pedir por tevlado que ingrese la longitud de nuetro arreglo 
    printf("Teclea la longitud del arreglo: ");
    //vamos hacer saltos de linea 
    scanf("%d",&n);
    //vamos a crear nuestro vuerpo y el procedimirnto que vamos a ocupar

    buffer = (int*) malloc((n)* sizeof(int));
    if(buffer==NULL) exit(1);

    p_buffer=buffer;
    for(i=0;i<n;i++){
        printf("INgresa el valor %d \n", i);
        scanf("%d", p_buffer++);
    }
    p_buffer=buffer;
    printf("\nLos valores son\n");
    for(n=0;n<i;n++){
        printf("arreglo[%d] = %d \n", n, *p_buffer++);
    }
    free(buffer);
    system("Pause");
}
