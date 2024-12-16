//mandamos llamar nuestras librerías 
#include <stdio.h>
#include <string.h>
//tenemos nuestro metodo principal 

int main(){
    //tenemos nuetra variable char
    char palabra[100];
    //delimitamos longitudes
    int i,longitud,polindromo=0;
    //imprimimso
    printf("Ingrese la primera palabra: ");
    scanf("%s", &palabra);

    longitud=strlen(palabra);
    //ciclo for
    for(i=0;i<longitud;i++){
        if(palabra[i]!=palabra[longitud-i-1]){
            polindromo=1;
            break;
        }

    }
    if(polindromo==1){
        printf("%s no es una palbra palindroma ", palabra);
    }else{
        printf("%s es una palbra palindroma ", palabra);
    }
   
}
