#include <stdio.h>
/*Ejercicio 1-10. Escriba un programa que copie su entrada a la salida, reemplazan
do cada tabulación por \t, cada retroceso por \b y cada diagonal invertida por
\\. Esto hace que las tabulaciones y los espacios sean visibles sin confusiones. */
main(){
  int c;
  while((c = getchar()) != EOF){
    if(c == '\t')
      printf("\\t");
    if(c == '\b')
      printf("\\b");
    if(c == '\\')
      printf("\\\\");

    /*se que lo de abajo se puede resumir y hacer mejor con un if else o || pero
      estamos aplicando solo lo que sabemos del libro hasta aqui
     */
    if(c != '\t')
      if(c != '\b')     
	if(c != '\\')
	  putchar(c);
  }
}
