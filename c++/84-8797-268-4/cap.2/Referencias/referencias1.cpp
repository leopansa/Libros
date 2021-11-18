// Referencias 1
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
//                  tipo &referencia = variable
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Una referencia es un nombre alternativo (sinonimo) para un objeto.

// Toda referencia, excepto las declaradas como parametros formales en una funcion prototipo,
// deben ser siempre inicializadas; de lo contrario el compilador mostrara error.

// UNA REFERENCIA NO ES UNA COPIA DE LA VARIABLE REFERENCIADA, sino que ES LA MISMA VARIABLE
// CON UN NOMBRE DIFERENTE

// Referencia a efectos de resultados
// --------------------------------------
//  >> Puede ser considerada como un puntero que accede al contenido del objeto apuntado
//     sin necesidad de utilizar el operador de indireccion (*)

//  >> Una referencia debe ser inicializada, su valor no puede ser alterado despues de
//     haberla inicializado, por lo que siempre se referira al mismo objeto, al especificado
//     en la inicializacion.

//  >> No puede ser DESREFERENCIADO con el operatodor (*)

//  >> No se debe aplicar la aritmetica de punteros, ni tomar la direccion de una referencia.


#include <iostream>
void referenciaBase();
void operacionNoReferencias();
void declaracionReferencia();

int main() {
    //referenciaBase();
    //operacionNoReferencias();

    declaracionReferencia();

    return 0;
       
}


void referenciaBase(){
    int conta = 0;
    int &con = conta;      // con referencia a conta.

    con++;

    std::cout << "conta = " << conta << std::endl;
    std::cout << "con = " << con << std::endl;
}

void operacionNoReferencias(){
    int a[5] = {10,20,30,40,50};
    int &rUltimo = a[4];  //referencia
    int &rElemento = a[0]; //referencia
    // int *p; //puntero
    int *p = &a[0];

    while(rElemento <= rUltimo){
        p = &rElemento;
        std::cout << *p << ", ";
        rElemento++; // ERROR!!!
                     // Aumenta el elemento referenciado, no el elemento del arreglo

    }

}

void declaracionReferencia(){
    int m = 10, n = 20;
    int &x = m, &y = n, z = n; //se definen dos referencias (x) y (y) y un entero (z) con el valor de (n)
}