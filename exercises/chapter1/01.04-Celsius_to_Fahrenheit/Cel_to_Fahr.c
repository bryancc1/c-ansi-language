#include <stdio.h>
/*Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.*/
main(){
  float fahr, celsius;
  float lower, upper, step;
  lower = 0;   /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  celsius = lower;
  printf("Celsius to Fahrenheit\n");
  while (celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32.0;
    printf("%3.0f%6.0f\n", celsius , fahr);
    celsius  = celsius + step;
  }

}
