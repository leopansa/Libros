# 3.1 Estructuras y Clases
### Notas

```
class CFecha 
{
    private:
    ...
	public:
    CFecha (int dd = 1, int mm = 1, int aa = 1980);
    CFecha () {};
}
```

Que diferencia hay entre este constructor y el constructor por omision?

En ambos casos se invoca a los contructores por omision para uno de los miembros: esto es, se contruyen variables *dia*, *mes* y *anyo* de tipo *int**,inicializandolas como corresponda, dependiendo de que el objeto sea *local* o *global*. 

Pero en el caso del constructor explicito, se ejecuta a continuacion el cuerpo del mismo que, segun el ejemplo, asigna a cada variable un valor especifico; esto supone una segunda asignacion que se traduce en **mas tiempo de ejecucion**

Lo idea seria que el constructor de cada uno de los miembros asignara el mismo los valores especificados y que despues se ejecutara el cuerpo del constructor para las operaciones adicionales, si las hay.
### PARA ESTO C++ RECOMIENDA UTILIZAR SIEMPRE QUE SEA POSIBLE LA SIGUIENTE SINTAXIS

```
CFecha::CFecha(int dd, int mm, int aa) : dia(dd), mes(mm), anyo(aa){}
```
Los dos puntos a continuacion de la lista de parametros del constructor
indican que sigue una lista de inicializadores; en este caso, de los datos
miembros de la clase. Observe tambien, que el cuerpo del constructor aparece vacio, puesto
que no se requiere ninguna operacione adicional.
