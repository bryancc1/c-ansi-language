#include <stdio.h>
/*copia la entrada ala salida ; 1ra version*/
main(){
  int c;
  c = getchar();
  while(c != EOF){
    putchar(c);
    c = getchar();
  }
}
