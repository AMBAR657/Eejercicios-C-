// importamos las librerias 
#include <stdio.h>
#include <stdlib.h>
//tenemos nuetra fincion principal 
int main(){
    // declaramos nuestras variables de tipo entero las cuales van a ser in vector 
    int vector[10];
    int i=0;
    while(i<10){
        vector[i]=10;
        printf("%d \n", vector[i]);
        i++;
    }
    
    system("Pause");
    return 0;
}
