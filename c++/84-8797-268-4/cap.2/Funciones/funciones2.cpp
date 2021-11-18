/* /////////////////////////////////////////////////////////////
 * Libro: Programación orientada a objetos con C++ (2da edición)
 * Autor: Fco. Javier Ceballos Sierra
 * Editorial: RA-MA 1997
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * Modificaciones y Comentarios: Leonardo Paniagua S.
 *//////////////////////////////////////////////////////////////


// FUNCIONES 2
// Argumentos por omision dentro de una funcion.

#include <iostream>

//el primer argumento no tiene valor por omision
void visualizar(int a, float b = 2.5, double c = 3.7548)
{
    std::cout << "parametro 1 = " << a << " | ";
    std::cout << "parametro 2 = " << b << " | ";
    std::cout << "parametro 3 = " << c << std::endl;
}

// void visualizar(int a, float b, double c = 3.7548) 
// Correcto
// Se deben proporcionar (a) y (b) Solo se colocaria el valor por defecto de (c)

// void visualizar(int a = 50, float b, double c = 3.7548) 
// Incorrecto.
// Si se inicializa (b) esto requiere tambien inicializar todos los argumentos que le siguen.
int main()
{
    visualizar(2); 
    visualizar(2, 3.5); // se omiten el 2do y 3er argumento
    visualizar(2, 5.6, 8.659); // no se omite ningun argumento
}