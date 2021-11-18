//PROG0203.CPP. Operaciones con cin

#include <iostream>

int main(){
    int notas[7], i =0, eof;

    std::cout << "Introducir notas. [Eof + Enter para finalizar]\n\n";
    do{
        std::cout << "notas["<<i<<"] = ";
        std::cin >> notas[i++];
        eof = std::cin.eof();
        if ( std::cin.fail() )
        {
            std::cerr << '\a';              // senial acustica: dato incorrecto
            std::cin.clear();               // desactiva los indicadores de error
            std::cin.ignore(128, '\n');     // desecha los datos incorrectos
            i--;                            // decrementa el indice del array
        }

    }
    while(!eof && !std::cin.bad() && i <7);

    if (std::cin.bad())
    {
        std::cerr << "Error irrecuperable" << std::endl;
        return 1;
    }

    // Escribir los datos leidos
    for (int k = 0; k < i; k++)
    {
        std::cout << notas[k] << std::endl;
    }

    return 0;


}