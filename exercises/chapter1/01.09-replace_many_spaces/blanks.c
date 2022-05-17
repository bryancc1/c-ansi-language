#include <stdio.h>
/*Exercise 1-9. Write a program to copy its input to
  its output, replacing each string of one or
  more blanks by a single blank.
*/
#define PASS 1
#define NOT_PASS 0
main(){
  int c;
  int status = PASS;
  while((c = getchar())!=EOF){
    if(c==' '){
      if(status==PASS){
	putchar(c);
	status = NOT_PASS;
      }
    }

    if(c!=' '){
      putchar(c);
      status = PASS;
    }
  }
}
