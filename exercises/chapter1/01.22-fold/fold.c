#include <stdio.h>
/*
Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines after
the last non-blank character that occurs before the n-th column of input. Make sure your
program does something intelligent with very long lines, and if there are no blanks or tabs
before the specified column.
*/
#define COL 20
#define CHARS COL+2  /*2 more because we need to spaces for '\0' and '\n'*/
int pos;
int getline (char line[]);
void fold(char line[],int len);
int len(char line[]);
main(){
  int i;
  int l;
  extern int pos;
  pos = 0;
  char line[CHARS];
  while((i=getline(line)) > 0){
    if(i == COL){
      l = len(line);
      fold(line,l);
    }
    printf("%s",line);
  }

}
int getline (char s[]){
  extern pos;
  int c, i;
  for(i=0; pos < COL && (c=getchar()) != EOF && c != '\n'; ++i){
    s[i] = c;
    ++pos;
  }
  if (c == '\n'){
    pos = 0;
    s[i] = c;
    ++i;
    s[i] = '\0';
    return i;
  }
  s[i] = '\0';
  return pos;
}
void fold(char s[],int len){
  extern int pos;
  int i;
  int fold;
  fold = COL;
  for(i = len-1; i >= 0 ; --i){
    if(s[i] == '\n'){
      i = -1; /*this line doesn't need fold*/
    }
    else if(s[i] == ' ' || s[i] == '\t'){
      fold = i;
      pos = ((len-1) - i);
      i = -1;/*end loop*/
    }
  }
  if(fold == COL){
    pos = 0;
  }
  s[fold] = '\n';
}
int len(char line[]){
  int i;
  for(i = 0; line[i] != '\0' && line[i] != '\n' ; ++i)
    ;
  return i;
}
