// 29-6-2021
// leopansa
// This example don't save the space when read a line of text 
// - - - - - 
#include <iostream>

using namespace std;

int main(){

    char str[100];

    
    while(str[0] != 'Y'){
        cout << "Escriba una palabra: ";
        cin >> str;
        // This is because the extraction operator >> works as scanf() in C 
        // and considers a space " " has a terminating character.
        cout << "La palabra que usted escribio es: " << str << endl;
        cout << "Desea salir? (Y / N ): ";
        cin >> str;
    }
    

    return 0;
}