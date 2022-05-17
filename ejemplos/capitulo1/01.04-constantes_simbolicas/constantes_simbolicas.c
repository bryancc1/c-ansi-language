#include <stdio.h>

#define INICIO 0 /*limite inferior de la tabla*/
#define FINAL 300 /*limite superior*/
#define AUMENTO 20 /*aumento*/

main(){
  int fahr;
    for(fahr = INICIO;fahr <= FINAL;fahr = fahr + AUMENTO)
    printf("%3d %6.1f\n",fahr ,(5.0/9.0)*(fahr-32));
}
