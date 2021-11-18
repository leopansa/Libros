// Paso de PARAMETROS POR REFERENCIA
// Cuando se efectura llamada a una funcion, hay dos formas de pasar 
// los parametros actuales a sus correspondientes parametros formales: por valor y por referencia.

// Pasar por valor:
// Copiar parametros actuales en sus correspondientes parametros formales, operacion que se hace
// automaticamente cuando se llama a una funcion, con lo cual NO SE MODIFICAN LOS PARAMETROS ACTUALES.

// Pasar parametros por referencia
// Significa que lo transferido no son los valores, sino las direcciones de las variables que contienen
// esos valores, con lo que los parametros actuales, se veran modificados al modificar ls contenidos de
// sus correspondientes parametros formales.

// Al especificar la lista de argumentos sin mas, dichos argumentos son pasados por valor.

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// ARRAY en argumento, se pasan por referencia, ya que el nombre del ARRAY
// representa la direccion de comienzo del ARRAY
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

// Para pasar variables por referencias se pueden utilizar 2 formas, se ejemplifican a continuacion.

// 1) Pasar la direccion actual del puntero actual a su correspondiente parametro formal,
//    el cual tiene que se un puntero.

#include <iostream>

void permutar (int *, int *); //punteros
void permutar2 (int &, int &); //punteros

int main()
{
    int a = 10, b = 20;
    permutar(&a, &b); //se pasan las direcciones de a y b
    std::cout << "-- forma 1--" << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;
    
    std::cout << "-- forma 2--" << std::endl;
    permutar2(a, b); //se pasan las direcciones de a y b
    std::cout << "a = " << a << " b = " << b << std::endl;
    return 0;
}

// Utilizando punteros
void permutar(int *px, int *py)
{
    int z = *px;
    *px = *py;
    *py = z;
}

// 2) Declarar el parametro formal, como una referencia al parametro actual 
//    que se quiere pasar por referencia. Para ello, anteponer el operador & al nombre
//    del parametro formal.

// Utilizando referencias
void permutar2(int &rx, int &ry)
{
    int z = rx;
    rx = ry;
    ry = z;
}