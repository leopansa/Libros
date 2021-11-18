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
        void Fecha();
        void Fecha() const;
        void AsignarFecha();
        void AsignarFecha() const;
        void ObtenerFecha(int *, int *, int * ) const;
        int FechaCorrecta();
        int FechaCorrecta() const;
};

void CFecha::Fecha()
{
    this->dia = 0;
    this->mes = 0;
    this->anyo = 0;
}

void CFecha::Fecha() const
{
    ((CFecha *) this)->dia = 0;
    ((CFecha *) this)->mes = 0;
    ((CFecha *) this)->anyo = 0;
}

//Especificacion de funciones miembro
void CFecha::AsignarFecha()
{
    std::cout << "dia,  ##   :  "; std::cin >> dia;
    std::cout << "mes,  ##   :  "; std::cin >> mes;
    std::cout << "anyo, #### :  "; std::cin >> anyo;
}

void CFecha::AsignarFecha() const
{
    // ((CFecha *) this)
    // Proteccion de fuerte chequeo de tipos de C++
    // >>> ----------------------------------------------------------------- 
    // OJO!!! Para salta el sistema de proteccion, se debe convertir
    // el puntero [this] declarado implicitamente constante a un objeto constante
    // a un puntero constante a un objeto no constante.
    // >>> ----------------------------------------------------------------- 

    std::cout << "dia,  ##   :  "; std::cin >> ((CFecha *) this)->dia;
    std::cout << "mes,  ##   :  "; std::cin >> ((CFecha *) this)->mes;
    std::cout << "anyo, #### :  "; std::cin >> ((CFecha *) this)->anyo;
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

int CFecha::FechaCorrecta() const
{
    int DiaCorrecto, MesCorrecto, AnyoCorrecto;
    // anyo correcto?
    AnyoCorrecto = ( anyo  >= 1582 );
    
    // mes correcto?
    MesCorrecto = ( mes >= 1 ) && ( mes <= 12 );
    switch ( mes )
    {
    case 2:
        if ( ((CFecha *) this)->Bisiesto() )
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

//29-9-2021 funcion [const] ??
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
    CFecha fecha; // fecha es un objeto de tipo CFecha
    
    const CFecha cumpleanios{}; //objeto CFecha const
    // ojo con las llaves para inicializar explicitamente el const
    // !!!! no tengo idea de la inicializacion !!!
    do{
        fecha.AsignarFecha();
        
        cumpleanios.AsignarFecha();
    }while(!fecha.FechaCorrecta() && cumpleanios.FechaCorrecta());

    VisualizarFecha(fecha);

    
}

// Visualizar una fecha
void VisualizarFecha(const CFecha &fecha)
{
    int dd, mm, aa;
    fecha.ObtenerFecha(&dd,&mm,&aa);
    std::cout << dd << "/" << mm << "/" << aa << std::endl;  
}