#ifndef arbolDeExp_hpp
#define arbolDeExp_hpp
#include "tipoNodo.hpp"
#include "stringDinamico.hpp"

typedef struct nodoA {
tipoNodo TiNod;
nodoA * hizq;
nodoA * hder;
} nodo;
typedef nodo * AbbExp;

void crearAbb(AbbExp &a);// Función para crear un árbol de expresiones vacío
void copiarAbb(AbbExp &a,AbbExp b);// Función para copiar un árbol de expresiones en otro
void instertarNodo(AbbExp &a, tipoNodo p);// Función para insertar un nodo en el árbol de expresiones
tipoNodo darNodo(AbbExp a);// Función para obtener el nodo almacenado en la raíz del árbol
void mostrarExpresionOrden(AbbExp a);// Función para mostrar las expresiones del árbol en orden
void agregarParentesisA(AbbExp &a);// Función para agregar un paréntesis de apertura al árbol de expresiones
void agregarParentesisFin(AbbExp &a);// Función para agregar un paréntesis de cierre al árbol de expresiones
void consCompoun(AbbExp a, AbbExp b, char c, AbbExp &e);// Función para construir una expresión compuesta (AND/OR) entre dos árboles de expresiones
void consCompounNot(AbbExp a, char c, AbbExp &e);// Función para construir una expresión compuesta NOT a partir de un árbol de expresiones
boolean evaluateAbbs(AbbExp a);// Función para evaluar un árbol de expresiones
void enumerarNodosEnOrden(AbbExp &a, int &contador); // Función para enumerar los nodos en orden en el árbol 'a' y actualizar el contador
void SaveArbol(AbbExp a, string nombreArchivo); // Función para guardar el árbol 'a' en un archivo con el nombre 'nombreArchivo'
void bajarArbol(AbbExp a, FILE *f); // Función para escribir el contenido del árbol 'a' en un archivo a través del puntero 'f'
void levantarArbol(AbbExp &a, FILE *f); // Función para leer el contenido de un árbol desde un archivo a través del puntero 'f' y almacenarlo en 'a'
void save(string nombreArchivo, AbbExp a); // Función para guardar el árbol 'a' en un archivo con el nombre 'nombreArchivo'
void enumerarNodosEnOrden(AbbExp &a,int &contador );// Función para enumerar los nodos en orden dentro del árbol de expresiones
void cargarParentesisAbb(AbbExp &a); // Función para cargar los paréntesis en el árbol 'a' como nodos con operador de abstracción
void cargarParentesisHizq(AbbExp &a); // Función para cargar los paréntesis izquierdos en el árbol 'a' como nodos con operador de apertura
void cargarParentesisHder(AbbExp &a); // Función para cargar los paréntesis derechos en el árbol 'a' como nodos con operador de cierre

#endif /* arbolDeExp_hpp */

