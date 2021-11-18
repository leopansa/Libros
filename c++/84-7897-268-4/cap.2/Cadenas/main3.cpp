// 29-6-2021
// leopansa
// This example save space when read a line of text.
// - - - - - 
#include <iostream>
#include <string.h>
#include <limits>

using namespace std;

const int salida = int('N');

int main(){
    
    cout << "Valor de salida = " << salida << endl;
    char str[100];

    do    
    {
        

        cout << "Escriba una palabra: ";
        cin.get(str, 100);
        cout << "La palabra que usted escribio es: " << str << endl;
        
        cout << "Desea salir? (Y / N ): ";
        
        
		cin >> str;
        
        // clear error state:
        cin.clear();
        // discard the line of input:
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') ;

    }
    while (int(str[0])==78);

    return 0;
}