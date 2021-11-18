/* /////////////////////////////////////////////////////////////
 * Libro: Programación orientada a objetos con C++ (2da edición)
 * Autor: Fco. Javier Ceballos Sierra
 * Editorial: RA-MA 1997
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * Modificaciones y Comentarios: Leonardo Paniagua S.
 *//////////////////////////////////////////////////////////////

// 29-6-2021
// leopansa

#include <iostream>

using namespace std;

int main(){

    char str[100];

    
    while(str[0] != 'Y'){
        cout << "Escriba una palabra: ";
        cin >> str;
        // Esto es porque el operador de extraccion >> trabaja como scanf() en C
        // y considera el espacio en blanco " " como un caracter de final.
        cout << "La palabra que usted escribio es: " << str << endl;
        cout << "Desea salir? (Y / N ): ";
        cin >> str;
    }
    

    return 0;
}