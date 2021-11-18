//PROG204.CPP - Operacion de cadenas
#include <iostream>
#include <string.h>

int main()
{
    char nombres[10][80];
    int i = 0;
    std::cout << "Introducir nombres. Finalizar cada Linea con [Enter].\n";

    do
    {
        /* code */
        std::cout << "nombre[" << i <<"] = "; //visualiza nombre[i] =
        std::cin.getline(nombres[i], 80, '\n');
        //Si el numero excede la linguitud maxima(79)
        //se ignoran el resto de los caracteres (maximo 255)
        if (strlen(nombres[i])==79){
            std::cin.ignore(255, '\n');
        }
        i++;
    } while (!std::cin.eof() && !std::cin.bad() && i <10);
    
    if (std::cin.bad())
    {
        std::cerr << "Error irrecuperable" << std::endl;
        return 1;
    }

    if (std::cin.eof())
    {
        std::cin.clear(); //desactiva los indicadores de error
        std::cin.ignore(); //desactiva los indicadores de error
        i--;
    }

    for(int k = 0; k < i; k++)
    {
        std::cout << nombres[k] << std::endl;
    }


    return 0;
}