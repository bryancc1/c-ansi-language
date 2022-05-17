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
  int subscripts[MAX]; /*this is only for save active subscripts*/
  int c ,i; /*for loops and catch characters*/
  int state; /*for know if we're in a word*/
  int len; /* lenght words and upper frencuency in the histogram*/
  for (c = 0; c < MAX ; ++c){
    frecuencies[c] = 0;
    subscripts[c] = 0;
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

  /*now it's time to print a histogram
    first take out the upper frecuency
    i for travel through the array of frecuencies
    len for save the upper frecuency
  */
  len = 0;
  for (i = 0; i < MAX ; ++i){
    if (frecuencies[i] > len){
      len = frecuencies[i];
    }
  }
  /*
    second save subscripts active for print later in the bottom of the screen
   */
  for (i = 0 ; i < MAX ; ++i){
    if (frecuencies[i] > 0){
      subscripts[i] = 1; /* this means is active*/
    }
  }
  /*thrid we need to travel through the array and draw the histogram
    c is for rows
    i is columns
   */

  for (c = len ; c > 0 ; --c){
    printf("%d |",c);
    for(i = 0 ; i < MAX ; ++i){
      if (frecuencies[i] == c){
	printf("\t*");
	--frecuencies[i];
      }
      else if (frecuencies[i] > 0){
	putchar('\t');
      }
    }
    putchar('\n');
  }
  /*
    last step print actived subscripts
  */
  for (i = 0 ; i < MAX ; ++i){
    if (subscripts[i] == 1){
      printf("   \t%d",i + 1);
    }
  }
  putchar('\n');
}
