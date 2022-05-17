#include <stdio.h>
/*
Exercise 1-23 Write a program to remove all comments from a C program Don't forget quoted strings
and character constants properly. C comments do not nest
*/
#define IN 1
#define OUT 0
#define MAX 1000
int status;
int quote;
int getline(char line[]);
int amiincomment(char line[]);
main(){
  extern int status;
  extern int quote;
  int i;
  char line[MAX];
  status = OUT;
  quote = OUT;
  while((i=getline(line)) > 0){
    amiincomment(line);
  }
  return 0;
}
int getline(char s[]){
  int c,i;
  for(i=0; i<MAX-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if(c == '\n'){
    s[i] = '\n';
    ++i;
  }
  s[i] = '\0';
  return i;
}
int amiincomment(char s[]){
  extern int status;
  int i;
  extern int quote;
  char c;
  for(i=0 ; s[i]!='\0' ; ++i){
    if((s[i] == '/' ||  s[i] == '*') && status == OUT && quote == OUT){
      status = IN;
    }
    else if(status == IN && s[i] == '*' && quote == OUT){
      status = IN;
    } 
    else if(status == IN && s[i] == '/' && s[i-1]=='*' && quote == OUT){
      status = OUT;
    }
    else if((s[i] == '\'' || s[i] == '\"') && status == OUT){
      if(s[i-1] == '\\' && quote == IN){
	putchar(s[i]);
      }
      else if(quote == IN){
	putchar(s[i]);
	quote = OUT;
      }
      else if(quote == OUT){
	putchar(s[i]);
	quote = IN;
      }
    }
    else if(status == OUT){
      putchar(s[i]);
    }
  }
}
