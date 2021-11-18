// Referencia como valor retornado.

// Una funcion puede declararse para que devuelva una referencia. Hay 2 razones
// para hacer tal declaracion:

//  1)  La informacion que va a ser devuelta es un objeto grande.
//      Entonces, devolver una referencia es mas eficiente que devolver una copia.
//      Lo mismo que es mas eficiente pasar por referencia objetos grandes a funciones.
//      Ahora, igual que sucede con los punteros, cuando una funcion retorna una referencia
//      el objeto referenciado debe ser (static) dentro de la funcion; ya que el objeto
//      automatico deja de existir al finalizar la funcion.

//  2)  El tipo de funcion debe ser (l-value). Este es el caso de mucho operadores
//      sobrecargados, particularmente del operador de asignacion.

//      *Lvalue = modo en que la evaluacion es hacia la izquierda o hacia la derecha
//      de la expresion de asignacion.

#include <iostream>

// Estructura de datos punto
struct punto 
{
    int x; // coordenada x
    int y; // coordenada y

    int &cx() //devuelve la referencia a x 
    {
        return x;
    }

    int &cy() //devuelve la referencia a y
    {
        return y;
    }
};


int main()
{
    punto origen;
    
    //Utilizar cx() y cy() como l-values
    origen.cx() = 60;
    origen.cy() = 80;

    //Utilizar cx() y cy() como r-values
    std::cout << "x = " << origen.cx() << std::endl
              << "y = " << origen.cy() << std::endl;

}