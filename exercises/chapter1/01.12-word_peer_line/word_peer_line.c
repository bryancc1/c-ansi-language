#include <stdio.h>
/*Exercise 1-12. Write a program that prints its input one word per line.*/
#define IN 1
#define OUT 0
main(){
  int c;
  int state;
  state = OUT;
  while ((c=getchar()) != EOF){
    if (c == '\n' || c == '\t' || c == ' '){
      if (state == IN){
	putchar('\n');
      }
      state = OUT;
    }
    else{
      state=IN;
      putchar(c);
    }
  }
}
