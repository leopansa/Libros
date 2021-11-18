/***
 * 
 * Basado en el trabajo de Fco. Javier Ceballos Sierra
 * RA-MA 1997
 * */
#include <iostream>

using namespace std;

int main(){

    char str[] = "C++";
    char str2[6] = "C + +";
    char str3[] = {'C',' ', ' ', '+','+','\0'};
    char str4[8] = {'C',' ',' ','+',' ',' ','+','\0'};
    
    //It is not necessary use all the space allocated for the string
    char str5[100] = "C++";

    cout << "Cadena1 = " << str  << endl;
    cout << "Cadena2 = " << str2 << endl;
    cout << "Cadena3 = " << str3 << endl;
    cout << "Cadena4 = " << str4 << endl;

    return 0;
}
