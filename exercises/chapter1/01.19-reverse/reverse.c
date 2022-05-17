#include <stdio.h>
/*Exercise 1-19. Write a function reverse(s) that reverses the character string
s.Use it to write a program that reverses its input a line at a time.
*/
#define MAX 1000
int getline (char s[] ,int lim);
void reverse (char s[] ,int size);
main(){
  int i;
  char line[MAX];
  while((i = getline(line,MAX)) > 0){
    reverse(line,MAX);
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
void reverse (char s[] ,int size){
  char buffer[size];
  int i ,j;
  i = 0;
  while((buffer[i] = s[i]) != '\0')
    ++i;
  j = i - 2;
  for (i = 0; s[i] != '\0' && s[i] != '\n' ; ++i){
    s[i] = buffer[j];
    --j;
  }
}
