#include <stdio.h>
/*Ejercicio 1-4. Escriba un programa que imprima la tabla correspondiente Celsius
a Fahrenheit.*/
main(){
  float fahr;
  float cel;
  int aumento ,inicio ,final;
  aumento = 20;
  inicio = 0;
  final = 300;
  cel = 0;
  printf("Celsius a Fahrenheit\n");
  while(cel <= final){
    fahr = (cel * 9.0/5.0) + 32;/* (°C × 9/5) + 32 =°F  aqui la formula*/
    printf("%3.0f%6.0f\n",cel,fahr);
    cel = cel + aumento;
  }
  
}
