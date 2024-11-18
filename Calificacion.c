//declaramos las linrerias wue vamos a utilizar 
#include <stdio.h>
#include <stdlib.h>
// decoaramos las finciones que vamos a ocupar 
int main(){
    //declaramos nuetra variable de tipo entero la vial va a ser cao de calificacion  
    int cal;
    //vamos a pedir la calificacion y vamos a leer nuetra calificacion 
    scanf(" %d", &cal);
    //vamos a validar que si nuetra calificacion es igual o mayor a esa 
    if(cal>=8){
        printf("Felicidades aprobaste el curso \n");
    }
    system("Pause");
    return 0;

}
