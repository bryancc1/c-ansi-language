#include <stdio.h>
/*imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300; versión de punto flotante;2da version */
main(){
  float fahr, celsius;
  int inicio, final, aumento;

  inicio = 0; /*limite superior de la tabla de temperaturas*/
  final = 300; /*limite superior*/
  aumento = 20; /*aumento*/

  fahr = inicio;
  while(fahr<=final){
    celsius = (5.0/9.0) * (fahr-32.0);/*ahora la formula es mas natural*/
    printf("%3.0f%6.1f\n", fahr, celsius);
    fahr = fahr + aumento;
  }
}
