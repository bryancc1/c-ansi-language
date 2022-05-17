#include <stdio.h>
/*
Ejercicio 1.9. Escriba un programa que copie su entrada a la salida, reemplazando
cada cadena de uno o más blancos por un solo blanco. 
*/
#define DENTRO 1
#define FUERA 0
main(){
  int estado; /*aqui guardaremos si estamos dentro de un espacio*/
  int c; /*aqui guardaremos el caracter capturado*/
  estado = FUERA; /*por default no estamos en un espacio asi que es fuera*/
  while((c = getchar()) != EOF){
    if(c == ' '){
      if(estado == FUERA){  /*solo imprimimos un espacio cuando estemos fuera*/
	estado = DENTRO;
	putchar(c);
      }
    }
    else{
      estado = FUERA; /*si encontramos un caracter diferente a espacio lo imprimimos y el estado que sea fuera*/
      putchar(c);
    }
    
  }
}
