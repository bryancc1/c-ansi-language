#include <stdio.h>
/*imprime la tabla Fahrenheit-Celsius
  para fahr  = 0,20... hasta 300; 1ra version
 */
main(){
  int fahr ,celsius;
  int inicio ,final ,aumento;

  inicio = 0; /*limite inferior para la tabla de temperaturas*/
  final = 300; /*limite superior*/
  aumento = 20; /*incremento*/

  fahr = inicio;

  while(fahr <= final){
    celsius = 5 * (fahr-32)/9; /*lo hacemos de esta forma rarra porque si no se tranca a 0*/
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + aumento;
  }
}
