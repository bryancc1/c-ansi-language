#include <stdio.h>
/*Exercise 1-10. Write a program to copy its input to its output, replacing each tab by
\t,each backspace by \b,and each backslash by \\.
This makes tabs and backspaces visible in an unambiguous way.
 */
main(){
  int c;
  while((c = getchar())!= EOF){
    if(c == '\t')
      printf("\\t");
    if(c == '\\')
      printf("\\\\");
    if(c == '\b')
      printf("\\b");
    /*the bottom , we are applying only what we know from the book so far*/
    if(c != '\t')
      if(c != '\b')     
	      if(c != '\\')
	        putchar(c);
  }
}
