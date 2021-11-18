# Deconstrucción de objetos.
### Autor: Fco. Javier Ceballos, 1997

* Existe una función que permite destruir cada objeto construido, liberando así la memoria que ocupa. Esta función recibe el nombre de *destructor*.
* Un objeto es destruido automáticamente al salir del ámbito en el que ha sido definido el objeto.
* A diferencia de los *constructores*, solo se puede definir un *destructor*
* Se distingue facilmente porque tiene el mismo nombre de la clase a la que pertenece procedido por una tilde ~
* El destructor no se hereda, no tiene argumentos, no puede retornar valor (incluyendo void) y no puede ser declarado **const** ni **static** 

## Excepción

* Los objetos creados  dinámicamente con el operador **new** tiene que ser destruidos con el operador **delete**, de lo contrario el sistema destruiría la variable puntero pero no liberaría el espacio en memoria referenciado por ella. 





