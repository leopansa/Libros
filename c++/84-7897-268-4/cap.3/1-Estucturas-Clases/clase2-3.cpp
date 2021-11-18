/* /////////////////////////////////////////////////////////////
 * Libro: Programación orientada a objetos con C++ (2da edición)
 * Autor: Fco. Javier Ceballos Sierra
 * Editorial: RA-MA 1997
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * Modificaciones y Comentarios: Leonardo Paniagua S.
 *//////////////////////////////////////////////////////////////
 
#include <iostream>

class CFecha 
{
    //Datos miembros de la clase
    private:
        int dia, mes, anyo;

    //Funciones miembro de la clase
    protected:
        int Bisiesto();
    public:
        /*
        CFecha() {}; //constructor por omision
        CFecha(int dd, int mm, int aa); //constructor
        */
        CFecha(int dd = 1, int mm = 1, int aa = 1980); //constructor con argumentos por omision
        // CFecha &operator=(const CFecha &);
        void AsignarFecha();
        void ObtenerFecha(int *, int *, int * ) const;
        int FechaCorrecta();
};



CFecha::CFecha(int dd, int mm, int aa)
{
    dia = dd; mes = mm; anyo = aa;
}
/*
// El copilador realiza este constructor de manera automatica en cada clase.
// Constructor para asignacion miembro a miembro
CFecha &CFecha::operator=(const CFecha &ObFech)
{
    dia = ObFech.dia;
    mes = ObFech.mes;
    anyo = ObFech.anyo;
    return *this;
}
*/

//Especificacion de funciones miembro
void CFecha::AsignarFecha()
{
    std::cout << "dia,  ##   :  "; std::cin >> dia;
    std::cout << "mes,  ##   :  "; std::cin >> mes;
    std::cout << "anyo, #### :  "; std::cin >> anyo;
}

// Verificar si una fecha es correcta
int CFecha::FechaCorrecta()
{
    int DiaCorrecto, MesCorrecto, AnyoCorrecto;
    // anyo correcto?
    AnyoCorrecto = ( anyo  >= 1582 );
    
    // mes correcto?
    MesCorrecto = ( mes >= 1 ) && ( mes <= 12 );
    switch ( mes )
    {
    case 2:
        if ( Bisiesto() )
            DiaCorrecto = ( dia >= 1 && dia <= 29 );
        else
            DiaCorrecto = ( dia >= 1 && dia <= 28 );
        break;
    case 4: case 6: case 9: case 11:
        DiaCorrecto = ( dia >= 1 && dia <= 30 );
        break;
    default:
        DiaCorrecto = ( dia >= 1 && dia <= 31 );
    }
    if ( !( DiaCorrecto && MesCorrecto && AnyoCorrecto ) )
    {
        std::cout << "\n datos no validos\n\n";
        return 0; //fecha incorrecta
    }
    else
    {
        return 1; //fecha correcta
    }

}

//Verificar si el anyo es Bisiesto
int CFecha::Bisiesto()
{
    if ((anyo % 4 == 0) && (anyo %100 != 0) || (anyo % 400 == 0))
        return 1; //anyo bisiesto
    else
        return 0; //anyo no bisiesto
}

// 29-9-2021 funcion [const] ??
// http://duramecho.com/ComputerInformation/WhyHowCppConst.html
// Al parecer tiene que ver con algo de mantener los valores en el mismo sitio de memoria (falta investigar)
void CFecha::ObtenerFecha(int *pd, int *pm, int *pa) const 
{
    *pd = dia, *pm = mes, *pa = anyo;
}

// Programa que utiliza la clase CFecha
// Funciones prototipo
void VisualizarFecha ( const CFecha &fecha );

// Establecer una feha, verificarla y visualizarla
int main()
{
    CFecha OtroDia;
    CFecha hoy(10, 2, 1997);
    OtroDia = hoy; // llama a la funcion opetaror=
    VisualizarFecha(OtroDia);

    return 0;
}

// Visualizar una fecha
void VisualizarFecha(const CFecha &fecha)
{
    int dd, mm, aa;
    fecha.ObtenerFecha(&dd,&mm,&aa);
    std::cout << dd << "/" << mm << "/" << aa << std::endl;  
}