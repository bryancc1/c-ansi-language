#include <stdio.h>
/*Ejercicio 1-6. Verifique que la expresión getchar ( ) ! = EOF es 0 o 1.*/
main(){
  int i;
  i = getchar() != EOF;
  printf("el valor de 'i = getcchar() != EOF' : %d\n",i);
}
