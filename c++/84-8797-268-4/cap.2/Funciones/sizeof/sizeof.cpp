#include <iostream>

using namespace std;

int main(){

    int arreglo[] = {1,5,6,7,8, 8,7,10};

    cout << "sizeof arreglo = " << sizeof(arreglo) << endl;
    cout << "sizeof int = " << sizeof(int) << endl;
    cout << "elementos arreglo = " << sizeof(arreglo)/sizeof(arreglo[0]) << endl;


}
