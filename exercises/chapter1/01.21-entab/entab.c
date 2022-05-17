#include <stdio.h>
/*Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
When either a tab or a single blank would suffice to reach a tab stop, which should be given
preference?*/
#define N 8 /*this is the tabstop*/
main(){
  int c; /*here save the capture character*/
  int s; /*here count the spaces for print*/
  int pos; /*for save the position in the line*/
  int stop; /*for save the new tab stop colum*/
  s = pos = 0; /*because there are not spaces and still we don't capure any character*/
  stop = N;
  while((c = getchar()) != EOF){
    if (c == ' '){
      if(pos == stop - 1){
	putchar('\t');
	pos = stop;
	stop = stop + N;
	s = 0;
      }
      else{
	++s;
	++pos;
      }
    }
    else if (c == '\t'){
      putchar('\t');
      pos = stop;
      stop = stop + N;
      s = 0;
    }
    else if (c == '\n'){
      putchar('\n');
      pos = 0;
      stop = N;
      s = 0;
    }
    else{
      while(s > 0){
	putchar(' ');
	--s;
      }
      putchar(c);
      ++pos;
    }
  }
  while(s > 0){
    putchar(' ');
    --s;
  }

}
