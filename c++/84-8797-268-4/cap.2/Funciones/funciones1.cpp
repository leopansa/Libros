/* /////////////////////////////////////////////////////////////
 * Libro: Programación orientada a objetos con C++ (2da edición)
 * Autor: Fco. Javier Ceballos Sierra
 * Editorial: RA-MA 1997
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * Modificaciones y Comentarios: Leonardo Paniagua S.
 *//////////////////////////////////////////////////////////////
 
// FUNCIONES
// Argumentos por omision dentro de una funcion.

#include <iostream>

void visualizar(int a = 1, float b = 2.5, double c = 3.1254)
{
    std::cout << "parametro 1 = " << a << " | ";
    std::cout << "parametro 2 = " << b << " | ";
    std::cout << "parametro 3 = " << c << std::endl;
}
int main()
{
    visualizar(); //se omiten todos los argumentos
    visualizar(2); // se omiten el 2do y 3er argumento
    visualizar(2, 5.6); // se omite unicamente el 3er argumento
    visualizar(2, 5.6, 8.659); // no se omite ningun argumento
}