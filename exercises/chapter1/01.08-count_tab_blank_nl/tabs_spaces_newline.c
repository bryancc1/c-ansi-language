#include <stdio.h>
/*Exercise 1-8. Write a program to count blanks, tabs, and newlines.*/
main(){
  double blanks,tabs,nl;
  int c;
  blanks = 0;
  tabs = 0;
  nl = 0;
  while((c=getchar())!=EOF){
    if (c == ' ')
      ++blanks;
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++tabs;
  }
  printf("new lines:%.0f spaces:%.0f tabs:%.0f\n",nl,blanks,tabs);
}
