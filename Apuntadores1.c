#include <stdio.h>
#include <stdlib.h>
//declaracion de variables
int *p, y;
//declaramos las funciones 
void func(){
    int x=40;
    p=&x;
    y=*p;
    *p=23;
}
int main(void){
    func();
    y=*p;
    *p=25;
    //imprimimos el resultado
    printf("El valor de y es %d \nEl valor de *p es %d\nEl valor de p es %p", y, *p, p);
    
}
