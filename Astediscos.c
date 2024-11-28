// mandamos llamar las librerias que vamos a ocupar 
#include <stdio.h>
#include <stdlib.h>

int main(){
    //devlaramos nuestra s variables
    int a;
    //declaramos la variable b
    int b;
    //devlaramos la varianle c
    int c;
    //se va a ingresar un numero del 1 al n pero que sea entero 
    printf("(1 a N) Ingresa un numero entero: ");
    scanf("%d", &c);
    for(int a=1; a<=c;a++){
        for(int b=1;b<=a;b++){
            printf("*");
        }
            printf("\n");
    }
            printf("\n");
            for(int a=c;a>=1;a--){
                for(int b=a;b>=1;b--){
                    printf("*");
                }
                printf("\n");
            }
            return 0;
        }
    
