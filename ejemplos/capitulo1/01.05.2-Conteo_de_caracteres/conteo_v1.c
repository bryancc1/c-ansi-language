#include <stdio.h>
/*cuenta los caracteres de entrada;1ra version*/

main(){
  long nc;
  nc = 0;
  while(getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}
