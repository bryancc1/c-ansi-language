#include <stdio.h>

/*Ejercicio 1-8. Escriba un programa que cuente espacios en blanco, tabuladores
y nuevas líneas. */

main(){
  double blancos ,tabs ,nl;
  int c;
  blancos = 0;
  tabs = 0;
  nl = 0;
  while((c = getchar()) != EOF){
    if(c == ' ')
      ++blancos;
    if(c == '\n')
      ++nl;
    if(c == '\t')
      ++tabs;
  }
  printf("nl : %.0f blancos : %.0f tabs : %.0f\n",nl ,blancos ,tabs);
}
