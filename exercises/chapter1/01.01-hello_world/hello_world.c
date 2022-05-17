#include <stdio.h>
/*Exercise 1-1. Run the "hello, world" program on your system. Experiment with leaving
  out parts of the program, to see  what error messages you get
*/
main(){
  /*
    if we print a string without '\n'
    printf("Hello, World");
    
    OUTPUT:
    sh-5.1$ ./hello_world.bin
    Hello, Wolrdsh-5.1$

    the above depends on your shell
  */
  
  /*
    if we put a declaration without (;)
    printf("Hello, World\n")
    
    OUTPUT:
    hello_world.c: In function ‘main’:
    hello_world.c:7:25: error: expected ‘;’ before ‘}’ token
    7 |   printf("Hello, World\n")
    |                         ^
    |                         ;
    8 | }
    | ~
  */
  /*
    if we don't put a end quote (")
    printf("Hello, World\n);

    OUTPUT:
    hello_world.c: In function ‘main’:
    hello_world.c:27:10: warning: missing terminating " character
    27 |   printf("Hello, World\n);
    |          ^
    hello_world.c:27:10: error: missing terminating " character
    27 |   printf("Hello, World\n);
    |          ^~~~~~~~~~~~~~~
    hello_world.c:28:1: error: expected expression before ‘}’ token
    28 | }
    | ^
    hello_world.c:27:10: error: expected ‘;’ before ‘}’ token
    27 |   printf("Hello, World\n);
    |          ^
    |          ;
    28 | }
    | ~
  */
  /*
    if we don't put a end parenthesis ())
    printf("Hello, World\n";

    OUTPUT:
    hello_world.c: In function ‘main’:
    hello_world.c:47:26: error: expected ‘)’ before ‘;’ token
    47 |     printf("Hello, World\n";
    |           ~              ^
    |                          )
    hello_world.c:47:27: error: expected ‘;’ before ‘}’ token
    47 |     printf("Hello, World\n";
    |                           ^
    |                           ;
    48 |
    49 | }
    | ~
  */  
  /*
    if we put the name of a function that does not exist
    print("Hello, World\n");
    
    OUTPUT:
    /usr/bin/ld: /tmp/ccN9qQnR.o: in function `main':
    hello_world.c:(.text+0x14): undefined reference to `print'
    collect2: error: ld returned 1 exit status
  */  
  printf("Hello, World\n");
}
