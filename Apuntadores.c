
//mandmaos llamar nuetras librerias
#include <stdio.h>
#include <string.h>
//tenemos nuestro método principal 
int main(){
int x=17,y;
int *p;
p=&x;
  //imprimimos el texyo y la variable 
printf("EL valor de x es %p\n", *p);
  //declaramos el procedimiento 
y=*p+3;
// esta es la forma en la que se imprime y se muetra el texto 
printf("El valor de y es %d\n",y);
}
