#include <stdio.h>
/*
Ejercicio 1-2. Experimente el descubrir qué pasa cuando la cadena del argumento
de printf contiene \c, en donde c es algún carácter no puesto en lista anterior
mente. 
*/
main(){
  /*lo que pasa es que no existe ese escape y nos lanza la siguiente advertencia
    programa.c: In function ‘main’:
    programa.c:8:27: warning: unknown escape sequence: '\c'
    8 |   printf("Hola \c Mundo\n");
    | 
   */
  printf("Hola \c Mundo\n");
}
