//PROG204.CPP - Operacion de cadenas
// Imprimir unicamente cuando detecta numeros
#include <iostream>

int main()
{
    
    int n; //solo acepta numeros
    std::cout << "Introducir numeros: " << std::endl;

    while(std::cin >> n) 
    {
        std::cout << n << std::endl;
    }

    return 0;
}