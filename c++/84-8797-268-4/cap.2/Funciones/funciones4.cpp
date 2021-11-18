// FUNCIONES SOBRECARGADAS
// Consiste en volver a sobrecargar una funcion anteriormente declarada,
// con distintos numero y/o tipo de parametros.

// Cuando la funcion sobrecargada en llamada, el compilador debe resolver cual de las funciones
// con el nombre pot es invocada. Esto lo hace comparando los tipos de parametros actuales
// con los tipos de los parametros formales de todas la funciones sobrecargadas.

// Si no encontrara una funcion exactamente con los mismos tipos de argumento, realizaria las
// conversiones permitidas sobre los parametos actuales, buscando asi una funcion.
#include <iostream>
#include <math.h>
#include "pot.h"

int main(){
     double ad = 1.5, bd = 1.5;
     int ai = 2, bi = 2;

     std::cout << pot(ai, bi) << std::endl; //invoca la primera funcion
     std::cout << pot(ad, bd) << std::endl; //invoca la segunda funcion
     std::cout << pot(ai, bd) << std::endl; //invoca la tercera funcion
     std::cout << pot(ad, bi) << std::endl; //invoca la cuarta funion 
     

}


