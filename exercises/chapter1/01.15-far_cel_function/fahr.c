#include <stdio.h>
/*Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function
 for conversion.*/
#define UPPER 300
#define LOWER 0
#define STEP 20
float f_to_c(float Fahrenheit);
main(){
  float fahr;
  printf("Fahrenheit to Celsius\n");
  for (fahr = LOWER ; fahr <= UPPER ; fahr = fahr + STEP)
    printf("%3.0f%6.1f\n",fahr,f_to_c(fahr));
  return 0;
}
float f_to_c(float f){
  return (5.0 / 9.0) * (f - 32);
}
