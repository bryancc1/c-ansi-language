#include <stdio.h>
/*
Ejercicio 1-3. Modifique el programa de conversión de temperaturas de modo
que escriba un encabezado sobre la tabla.
*/
main(){
  float fahr, celsius;
  int inicio, final, aumento;

  inicio = 0; /*limite superior de la tabla de temperaturas*/
  final = 300; /*limite superior*/
  aumento = 20; /*aumento*/
  printf("Fahrenheit a Celsius\n");/*aqui imprimimos una encabezado*/
  fahr = inicio;
  while(fahr<=final){
    celsius = (5.0/9.0) * (fahr-32.0);/*ahora la formula es mas natural*/
    printf("%3.0f%6.1f\n", fahr, celsius);
    fahr = fahr + aumento;
  }
}
