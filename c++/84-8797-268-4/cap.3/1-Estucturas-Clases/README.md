888b    888  .d88888b. 88888888888     d8888  .d8888b. 

8888b   888 d88P" "Y88b    888        d88888 d88P  Y88b 

88888b  888 888     888    888       d88P888 Y88b.      

888Y88b 888 888     888    888      d88P 888  "Y888b.   

888 Y88b888 888     888    888     d88P  888     "Y88b. 

888  Y88888 888     888    888    d88P   888       "888 

888   Y8888 Y88b. .d88P    888   d8888888888 Y88b  d88P 

888    Y888  "Y88888P"     888  d88P     888  "Y8888P"  

_ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ 
public:
    CFecha (int dd = 1, int mm = 1, int aa = 1980);
    CFecha () {};
_ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ 

Que diferencia hay entre este constructor y el constructor por omision?
    En ambos casos se invoca a los contructores por omision para uno de los 
miembros: esto es, se contruyen variables [dia], [mes] y [anyo] de tipo [int],
inicializandolas como corresponda, dependiendo de que el objeto sea [local]
o [global]. 
    Pero en el caso del constructor explicito, se ejecuta a continuacion
el cuerpo del mismo que, segun el ejemplo, asigna a cada variable un valor 
especifico; esto supone una segunda asignacion que se traduce en 
--- mas tiempo de ejecucion ---

    Lo idea seria que el constructor de cada uno de los miembros asignara
el mismo los valores especificados y que despues se ejecutara el cuerpo del 
constructor para las operaciones adicionales, si las hay.

PARA ESTO C++ RECOMIENDA UTILIZAR SIEMPRE QUE SEA POSIBLE LA SIGUIENTE
SINTAXIS

    _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _
    CFecha::CFecha(int dd, int mm, int aa) : dia(dd), mes(mm), anyo(aa){}
    _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ ___ __ _ 

    Los dos puntos a continuacion de la lista de parametros del constructor
    indican que sigue una lista de inicializadores; en este caso, de los datos
    miembros de la clase.
    
    Observe tambien, que el cuerpo del constructor aparece vacio, puesto
    que no se requiere ninguna operacione adicional.
