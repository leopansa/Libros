/* /////////////////////////////////////////////////////////////
 * Libro: Programación orientada a objetos con C++ (2da edición)
 * Autor: Fco. Javier Ceballos Sierra
 * Editorial: RA-MA 1997
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * Modificaciones y Comentarios: Leonardo Paniagua S.
 *//////////////////////////////////////////////////////////////

// Capitulo de CLASES - Parte 1.

// Ejemplo Estructura (Fecha)
// Generar un programa que verifique una fecha dd-mm-aaaa y verifique si es correcta
// Que es una fecha correcta ??? 
//  Es correcta si esta entre los limites 1 y dias del mes
//  Es correcta si el mes esta entre 1 y 12
//  Es correcta si el anio es mayor o igual que 1582
// ---------------------------------------------------------------------------------------
#include <iostream>

// Definicion de un tipo de dato CFecha
// con tres miembros de tipo entero (dia, mes, anio)
struct CFecha
{
    int dia, mes, anyo;
};

// Funciones prototipo
void AsignarFecha( CFecha *);
void ObtenerFecha(int *, int *, int *, const CFecha &);
int FechaCorrecta(const CFecha &);
int Bisiesto(int anyo);
void VisualizarFecha(const CFecha &);

int main()
{
    //Definir una estructura fecha
    CFecha fecha;
    
    //Establecer una fecha
    do{
        AsignarFecha(&fecha);
    } while(!FechaCorrecta(fecha));

    VisualizarFecha(fecha);
    return 0;
}

// Establecer una fecha
void AsignarFecha(CFecha *pFecha)
{
    std::cout << "dia. ##    :   "; std::cin >>pFecha->dia;
    std::cout << "mes. ##    :   "; std::cin >>pFecha->mes;
    std::cout << "anio. #### :   "; std::cin >>pFecha->anyo;
}

// Verificar si una fecha es correcta
int FechaCorrecta(const CFecha &fecha)
{
    int DiaCorrecto, MesCorrecto, AnyoCorrecto;

    // anyo correcto?
    AnyoCorrecto = (fecha.anyo >= 1582);

    // mes correcto?
    MesCorrecto = (fecha.mes >= 1) && (fecha.mes <= 12);
    switch (fecha.mes)
    {
        case 2:
            if (Bisiesto(fecha.anyo))
                DiaCorrecto = (fecha.dia >= 1 && fecha.dia <= 29);
            else 
                DiaCorrecto = (fecha.dia >= 1 && fecha.dia <= 28);
            break;
        case 4: case 6: case 9: case 11:
            DiaCorrecto = (fecha.dia >= 1 && fecha.dia <= 30);
            break;
        default:
            DiaCorrecto = (fecha.dia >= 1 && fecha.dia <= 31);
            break;
    }
    
    if( !(DiaCorrecto && MesCorrecto && AnyoCorrecto) )
    {
        std::cout << "\ndatos no validos\n\n";
        return 0; // fecha incorrecta
    } 
    else
    {
        return 1; // fecha correcta
    }
}

// Verificar si el anio es bisiesto
int Bisiesto(int anyo)
{
    if((anyo%4 == 0) && (anyo%100 != 0) || (anyo % 400 == 0))
        return 1;
    else
        return 0;
}

// Visualizar una fecha
void VisualizarFecha(const CFecha &fecha)
{
    int dd, mm, aa;
    ObtenerFecha(&dd, &mm, &aa, fecha);
    std::cout << dd << "/" << mm << "/" << aa << "\n";
}

// Obtener una fecha
void ObtenerFecha(int *pd, int *pm, int *pa, const CFecha &fecha)
{
    *pd = fecha.dia, *pm = fecha.mes, *pa = fecha.anyo;
}