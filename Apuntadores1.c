#include <stdio.h>
#include <stdlib.h>
//declaracion de variables
int *p, y;
//declaramos las funciones 
void func(){
    //declaramos nuestra variable de tipo entero que va a ser igual a 400
    int x=40;
    //seguimos declarando las vatiables 
    p=&x;
    y=*p;
    *p=23;
}
int main(void){
    func();
    y=*p;
    //devimos que nuestro apuntador va a ser igual que 25
    *p=25;
    //imprimimos el resultado
    printf("El valor de y es %d \nEl valor de *p es %d\nEl valor de p es %p", y, *p, p);
    
}
