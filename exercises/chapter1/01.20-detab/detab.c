#include <stdio.h>
/*Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?
 */
#define N 8

main(){
  int pos ,c ,s ,stop;
  stop = N;
  pos = s = 0;
  while((c = getchar())!= EOF){
    if(c == '\t'){
      s = stop - pos;
      while(s > 0){
	putchar(' ');
	--s;
      }
      pos = stop;
      stop = stop  + N;
    }
    else if (c == '\n'){
      putchar('\n');
      stop = N;
      pos = 0;
    }
    else{
      putchar(c);
      ++pos;
      if (pos == N){
	stop = stop + N;
      }
    }
  }
}
