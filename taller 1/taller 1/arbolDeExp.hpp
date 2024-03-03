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

// Función para crear un árbol de expresiones vacío
void crearAbb(AbbExp &a);

// Función para copiar un árbol de expresiones en otro
void copiarAbb(AbbExp &a,AbbExp b);

// Función para insertar un nodo en el árbol de expresiones
void instertarNodo(AbbExp &a, tipoNodo p);

// Función para obtener el nodo almacenado en la raíz del árbol
tipoNodo darNodo(AbbExp a);

// Función para mostrar las expresiones del árbol en orden
void mostrarExpresionOrden(AbbExp a);

// Función para agregar un paréntesis de apertura al árbol de expresiones
void agregarParentesisA(AbbExp &a);

// Función para agregar un paréntesis de cierre al árbol de expresiones
void agregarParentesisFin(AbbExp &a);

// Función para construir una expresión compuesta (AND/OR) entre dos árboles de expresiones
void consCompoun(AbbExp a, AbbExp b, char c, AbbExp &e);

// Función para construir una expresión compuesta NOT a partir de un árbol de expresiones
void consCompounNot(AbbExp a, char c, AbbExp &e);

// Función para obtener el valor booleano del nodo izquierdo de un árbol de expresiones
//boolean darBoolizq(AbbExp a);

// Función para evaluar un árbol de expresiones
boolean evaluateAbbs(AbbExp a);

void enumerarNodosEnOrden(AbbExp &a,int &contador);
void SaveArbol (AbbExp a,string nombreArchivo);
void bajarArbol(AbbExp  a,FILE * f);
void levantarArbol (AbbExp &a, FILE * f);
void SaveArbol (AbbExp a,string nombreArchivo);
void bajarArbol(AbbExp  a,FILE * f);

void save(string nombreArchivo,AbbExp a);
// Función para enumerar los nodos en orden dentro del árbol de expresiones
void enumerarNodosEnOrden(AbbExp &a,int &contador );





// Función para cargar un árbol de expresiones desde un archivo
//void LoadArbol(FILE *f, AbbExp &a);


#endif /* arbolDeExp_hpp */

