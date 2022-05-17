#include <stdio.h>
#define PASS 80 /*only this length is printable*/
#define MAX 1000 /*max chars in line*/
/*Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.*/

int getline(char line[] ,int lim);
int main(){
  char line[MAX];
  int i;
  while((i = getline(line ,MAX)) > 0){
    if (i > PASS){
      printf("%s",line);
    }
  }
}
int getline (char s[] ,int lim){
  int c, i;

  for(i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n'){
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

