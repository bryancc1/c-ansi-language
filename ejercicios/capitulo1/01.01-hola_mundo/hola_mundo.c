#include <stdio.h>
/*
Ejercicio 1-1. Ejecute el programa "hola, mundo" en su sistema. Experimente con
la omisión de partes del programa, para ver qué mensajes de error se obtienen. 
*/
main(){
  /*
    si imprimimos un string sin '\n'
    printf("hola mundo");
    nos lanza el siguiente mensaje:
    sh-5.1$ ./hola_mundo.bin
    hola mundosh-5.1$
  */
  
  /*
    si ponemos una declaracion sin punto y coma (;)
    printf("hola mundo\n")
    el compilador falla y nos lanza el siguiente mensaje:
    hola_mundo.c: In function ‘main’:
    hola_mundo.c:7:25: error: expected ‘;’ before ‘}’ token
    7 |   printf("hola mundo\n")
    |                         ^
    |                         ;
    8 | }
    | ~
  */
  /*
    si ejecutamos sin una comilla nos lanza estos errores
    printf("hola mundo\n);
    hola_mundo.c: In function ‘main’:
    hola_mundo.c:27:10: warning: missing terminating " character
    27 |   printf("hola mundo\n);
    |          ^
    hola_mundo.c:27:10: error: missing terminating " character
    27 |   printf("hola mundo\n);
    |          ^~~~~~~~~~~~~~~
    hola_mundo.c:28:1: error: expected expression before ‘}’ token
    28 | }
    | ^
    hola_mundo.c:27:10: error: expected ‘;’ before ‘}’ token
    27 |   printf("hola mundo\n);
    |          ^
    |          ;
    28 | }
    | ~
  */
  /*
    si nos falta un parentesis el programa lanza estos errores
    printf("hola mundo\n";
    hola_mundo.c: In function ‘main’:
    hola_mundo.c:47:26: error: expected ‘)’ before ‘;’ token
    47 |     printf("hola mundo\n";
    |           ~              ^
    |                          )
    hola_mundo.c:47:27: error: expected ‘;’ before ‘}’ token
    47 |     printf("hola mundo\n";
    |                           ^
    |                           ;
    48 |
    49 | }
    | ~
  */  
  /*
    si ponemos el nombre de una funcion que no existe
    print("hola mundo\n");
    nos salta lo siguiente
    /usr/bin/ld: /tmp/ccN9qQnR.o: in function `main':
    hola_mundo.c:(.text+0x14): undefined reference to `print'
    collect2: error: ld returned 1 exit status
  */  
  printf("hola mundo\n");
}
