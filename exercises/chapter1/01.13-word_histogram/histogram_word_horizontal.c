#include <stdio.h>
/*Exercise 1-13. Write a program to print a histogram of the lengths
  of words in its input. It is  easy to draw the histogram with the
  bars horizontal;a vertical orientation  is more challenging.
*/
#define MAX 100 /* lenght of a word */
#define IN 1
#define OUT 0
main(){
  int frecuencies[MAX];
  int c ,i; /*for loops and catch characters*/
  int state; /*for know if we're in a word*/
  int len; /* lenght words and upper frencuency in the histogram*/
  for (c = 0; c < MAX ; ++c){
    frecuencies[c] = 0;
  }
  len = 0;
  state = OUT;
  while  ((c = getchar()) != EOF){
    if (c == ' ' || c == '\t' || c == '\n'){
      state = OUT;
      ++frecuencies[len - 1];
      len = 0;
    }
    else if (state != IN){
      state = IN;
      ++len;
    }
    else if (state == IN && len < MAX){
      ++len;
    }
  }
  /*
  for(c = 0; c < MAX ; ++c){
    if (frecuencies[c] > 0){
      printf("subscript [%d]: %d\n",c,frecuencies[c]);
    }
  }
  for test the recopilation of values in the array
  */

  /*last print histogram in horizontal orientation*/
  for (i = 0 ; i < MAX ; ++i){
    if (frecuencies[i] > 0){
      printf("lenght (%d) = ",i+1);
      for (c = 0 ; c < frecuencies[i] ; ++c){
	putchar('*');
      }
      putchar('\n');
    }
    
  }
}
