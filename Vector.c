// importamos las librerias 
#include <stdio.h>
#include <stdlib.h>
//tenemos nuetra fincion principal 
int main(){
    // declaramos nuestras variables de tipo entero las cuales van a ser in vector 
    int vector[10];
    // lo inivializamos en cero 
    int i=0;
    //tenemos nuetro ciclo while
    while(i<10){
        //decimos que nietro vector va a llegar hasta 10
        vector[i]=10;
        //vamos a imprimir la cantidad 
        printf("%d \n", vector[i]);
        i++;
    }
    
    system("Pause");
    return 0;
}
