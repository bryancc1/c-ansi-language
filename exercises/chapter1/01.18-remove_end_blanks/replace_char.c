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
    else if(c == '\\')
      printf("\\\\");
    else if(c == '\b')
      printf("\\b");
    else if(c == '\n'){
      printf("\\n");
      putchar('\n');
    }
    else if(c == ' '){
      printf("\\s");
    }
    else{
      putchar(c);
    }
  }
}
