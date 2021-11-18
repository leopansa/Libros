//PROG202.CPP Dar formato de salida

#include <iostream>
#include <iomanip>

int main()
{
    double coef[] = {5298.0, 3.21, 46.32, 506.5, 2002.38 };
    char *prov[] = { "Heredia", "Cartago", "Alajuela", "San Jose", "Puntarenas" };

    //Salida de resultados alineados en columnas
    std::cout << std::setiosflags(std::ios::fixed); //formato fijo

    for(int i = 0; i < sizeof(coef) / sizeof(double); i++)
    {
        std::cout << std::setiosflags(std::ios::left) //justificacion a la izda
                  << std::setw(20)  //ancho para la cadena de caracteres
                  << std::setfill('.') //caracter de relleno
                  << prov[i] //escribe la provincia
                  << std::resetiosflags(std::ios::left)
                  << std::setw(8) //ancho para las cantidades
                  << std::setprecision(2) // dos decimales
                  << coef[i] << std::endl; //escribe la cantidad y salto a linea nueva '\n'
    }

    return 0;

}