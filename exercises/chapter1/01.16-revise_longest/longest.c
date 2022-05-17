#include <stdio.h>
/*Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
 the length of arbitrary long input lines, and as much as possible of the text.*/

#define MAXLINE 10 /*maximum input line length*/
int getline (char line[] ,int maxline);
void copy (char to[] ,char from[]);
/*print the longest input line*/
main(){
  int len; /*current line lenght*/
  int max; /*maximum  lenght senn so far*/
  char line[MAXLINE]; /*current input line*/
  char longest[MAXLINE]; /*longest line saved here*/

  max = 0;
  while((len = getline(line ,MAXLINE)) > 0)
    if(len > max){
      max = len;
      copy(longest,line);
    }
  if(max > 0) /*there was a line*/
    printf("[%d]%s",max ,longest);
  return 0;
}

/* getline : read a line into s, return length */
int getline (char s[] ,int lim){
  int c, i ,j;

  for(j=i=0; (c=getchar()) != EOF && c != '\n'; ++i)
    if (j < lim-1){
      s[j] = c;
      ++j;
    }
  if (c == '\n' && j != lim-1){
    s[j] = c;
    ++j;
  }
  s[j] = '\0';
  return i;
}

/*copy: copy 'from' into 'to'; assume to is big enough*/
void copy (char to[] ,char from[]){
  int i;
  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
