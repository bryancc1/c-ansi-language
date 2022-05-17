#include <stdio.h>
/*
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input.
*/
#define ASCII 127 /*this is the total numbers of characters in ASCII*/
#define START 32 /*this is the start of printable characters*/
#define END 126  /*this is the end of printable characters*/ 

main(){
  /*
  int i;
  for (i = START ; i <= END ; ++i){
    printf("%c",i);
    putchar('\n');
  }
  return 0;
  for print charcaters
  */
  int characters[ASCII];
  int subscripts[ASCII]; /*this is only for save active subscripts*/
  int c ,i; /*for loops and catch characters*/
  int len; /* lenght words and upper frencuency in the histogram*/
  for (c = 0; c < ASCII ; ++c){
    characters[c] = 0;
    subscripts[c] = 0;
  }
  len = 0;
  while  ((c = getchar()) != EOF){
    if (c >= START && c <= END){
      ++characters[c - 1];
    }
  }
  /*
  for(c = 0; c < ASCII ; ++c){
    if (characters[c] > 0){
      printf("subscript [%c]: %d\n",c + 1,characters[c]);
    }
  }
  for test the recopilation of values in the array
  */
  
  /*now it's time to print a histogram
    first take out the upper number in the array
    i for travel through the array of characters
    len for save the upper frecuency
  */
  len = 0;
  for (i = 0; i < ASCII ; ++i){
    if (characters[i] > len){
      len = characters[i];
    }
  }
  /*
    second save subscripts active for print later in the bottom of the screen
   */
  for (i = 0 ; i < ASCII ; ++i){
    if (characters[i] > 0){
      subscripts[i] = 1; /* this means is active*/
    }
  }
  /*thrid we need to travel through the array and draw the histogram
    c is for rows
    i is columns
   */
  
  for (c = len ; c > 0 ; --c){
    printf("%d |",c);
    for(i = 0 ; i < ASCII ; ++i){
      if (characters[i] == c){
	printf("\t*");
	--characters[i];
      }
      else if (characters[i] > 0){
	putchar('\t');
      }
    }
    putchar('\n');
  }
  /*
    last step print actived subscripts
  */
  for (i = 0 ; i < ASCII ; ++i){
    if (subscripts[i] == 1){
      printf("   \t%c",i + 1);
    }
  }
  putchar('\n');

}
