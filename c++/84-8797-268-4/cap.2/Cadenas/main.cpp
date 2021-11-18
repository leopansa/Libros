/* /////////////////////////////////////////////////////////////
 * Libro: Programación orientada a objetos con C++ (2da edición)
 * Autor: Fco. Javier Ceballos Sierra
 * Editorial: RA-MA 1997
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * Modificaciones y Comentarios: Leonardo Paniagua S.
 *//////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){

    char str[] = "C++";
    char str2[6] = "C + +";
    char str3[] = {'C',' ', ' ', '+','+','\0'};
    char str4[8] = {'C',' ',' ','+',' ',' ','+','\0'};
    
    //No es necesario utilizar todo el espacio definido para la cadena en la definición.
    char str5[100] = "C++";

    cout << "Cadena1 = " << str  << endl;
    cout << "Cadena2 = " << str2 << endl;
    cout << "Cadena3 = " << str3 << endl;
    cout << "Cadena4 = " << str4 << endl;

    return 0;
}
