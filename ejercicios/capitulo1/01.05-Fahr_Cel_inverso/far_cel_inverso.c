#include <stdio.h>
/*Ejercicio 1-5. Modifique el programa de conversión de temperaturas de manera
que escriba la tabla en orden inverso, esto es, desde 300 grados hasta 0. */

#define INICIO 0
#define FINAL 300
#define AUMENTO 20

main(){
    int fahr;
    for(fahr = FINAL;fahr >= INICIO;fahr = fahr - AUMENTO)
      printf("%3d %6.1f\n",fahr ,(5.0/9.0)*(fahr-32));
}
