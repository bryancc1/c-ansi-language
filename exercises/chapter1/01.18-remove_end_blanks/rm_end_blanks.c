#include <stdio.h>
/*Exercise 1-18.Write a program to remove trailing blanks and tabs from each line of input,
 and to delete entirely blank lines.*/
#define MAX 1000
#define IN 1
#define OUT 0
int getline (char s[] ,int lim);
void removeb(char s[]);
main(){
  int i;
  char line[MAX];
  while((i = getline(line,MAX)) > 0){
    removeb(line);
    printf("%s",line);
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
void removeb(char s[]){
  int i;
  int state;
  int pos;
  state = OUT;
  for(i = 0; s[i] != '\0'; ++i){
    if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'){
      if(state == OUT){
	pos = i;
	state = IN;
      }
    }
    else{
      state = OUT;
    }
  }
  if(state == IN){
    if(s[i-1] == '\n' && pos != 0){
      s[pos] = '\n';
      ++pos;
    }
    s[pos] = '\0';
  }
}
