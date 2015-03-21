
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las columnas y las filas se representan en el arreglo de la siguiente manera: [columnas][filas]
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve la distancia (o peso) de una arista dado sus dos nodos (inicio y destino)
//Nota: se sugiere NO usar recursion
int obtenerDistanciaAristaDirecta(int grafo[5][5], int inicio, int destino)
{
    return grafo[inicio][destino]; // obtenemos el peso directo entre un nodo y otro
}

//Dado un grafo y un nodo inicial. Devuelve un vector ordenado que contenga todos los nodos adjacentes al nodo inicial.
//Ejemplo:
//Dado el siguiente grafo y el nodo inicial 2
//http://visualgo.net/dfsbfs.html
//Devuelve el siguiente vector: {0,1,3}
vector<int> obtenerListaDeAristas(int grafo[5][5], int inicio)
{
    vector<int> respuesta;
    return respuesta;
}

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino dada una profundidad maxima de recorrido
//Nota: se sugiere usar recursion
bool existeCamino(int grafo[5][5], int inicio, int destino,int profundidad)
{
    if(profundidad<0 && inicio<5) // se le da un limite ala profundidad
        return false; // retorna false

    if(inicio==destino)  // que el inicio sea igual al destino
    return true; // devolvemos true


        for(int i=0; i<5; i++) // verificamos en las otras aristas
        {
            if(grafo[inicio][i]==infinito) // verificamos si existe el camino
                {
                    continue; // no le ponemos atencion
                }


            if(existeCamino(grafo,i,destino,profundidad-1)) // verificamos otro con la recursividad
                return true; // si lo llega a encontrar que nos retorne true

        }

    return false; // si no hay camino que nos de false
    return false;
}

int main ()
{
    evaluar();

    return 1;
}
