// FUNCIONES 3
// Funciones en linea

// >> Para poder asignar el calificativo de (en linea) a una funcion, dicha funcion
//    debe estar definida antes de que sea invocada, de lo contrario el compilador no
//    lo tendra en cuenta. Es por esta razon por la que las funciones inline son normalmente
//    definidas en ficheros (.h)
// >> Calificar una funcion (en linea) implica anteponer el calificativo (inline) al tipo de 
//    retorno por la funcion.
// >> Las funciones (inline) son similares a las macros declaradas con la directriz (#define).
//    Sin embargo,es mejor utilizar funciones (inline) que (macros), ya que sus parametros
//    son chequeados automaticamente y no presentan los problemas de las macros parametrizadas.

#include <iostream>

//macro parametrizado
#define MENOR(X,Y) ((X) < (Y)) ? (X) : (Y)

inline int menor (int x, int y)
{
    return ((x < y) ? x : y);
}

int main()
{
    int m, a = 10, b = 20;
    m = MENOR(a--,b--); //efecto colateral. El valor menor se decreta dos veces
    
    std::cout << "MENOR= " << m;
    std::cout<< " | a = " << a << " | b = " << b << std::endl;

    a = 10, b = 20;
    m = ((a--) < (b--)) ? (a--) : (b--);
    std::cout << "menor(sin macro)= " << m;
    std::cout<< " | a = " << a << " | b = " << b << std::endl;


    a = 10, b = 20;
    m = menor(a--,b--); //efecto colateral. El valor menor se decreta dos veces
    std::cout << "menor = " << m;
    std::cout<< " | a = " << a << " | b = " << b << std::endl;
}