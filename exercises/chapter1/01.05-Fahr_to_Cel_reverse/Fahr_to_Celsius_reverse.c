#include <stdio.h>
/*Exercise 1-5. Modify the temperature conversion program
  to print the table in reverse order,
  that is, from 300 degrees to 0.
*/
main(){
  float fahr;
  for(fahr = 300;fahr >= 0;fahr = fahr - 20){
    printf("%3.0f%6.1f\n",fahr,(5.0/9.0) * (fahr - 32));
  }
}
