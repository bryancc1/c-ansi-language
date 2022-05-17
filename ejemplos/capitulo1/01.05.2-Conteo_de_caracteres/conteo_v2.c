#include <stdio.h>
/*cuenta los caracteres de entrada ; 2da version*/
main(){
  double nc;
  for(nc = 0;getchar() != EOF;++nc)
    ;
  printf("%.0f\n",nc);
}
