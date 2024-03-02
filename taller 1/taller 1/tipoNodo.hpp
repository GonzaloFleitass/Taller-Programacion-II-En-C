#ifndef tipoNodo_hpp
#define tipoNodo_hpp
#include "tipoExp.hpp"
#include "boolean.hpp"

typedef struct {
    int numero; // Un número entero
    tipoExp discriminante; // Una expresión de tipo tipoExp
    union { // Unión de diferentes tipos de datos
        boolean bol; // Un booleano
        char operador; // Un operador (char)
        char parentesis; // Un paréntesis (char)
    } datos; // El miembro datos de tipo unión
} tipoNodo; // El tipo de dato es tipoNodo



void cargarBol(boolean a, tipoNodo &b); // Carga el dato booleano en un nodo
void cargarOperado(char op, tipoNodo &b); // Carga el dato operador en un nodo
void cargarParentesis(char a, tipoNodo &b); // Carga el dato paréntesis en un nodo
void mostrarNodo(tipoNodo a); // Muestra el dato almacenado en un nodo
tipoExp darRaiz(tipoNodo a); // Devuelve la raíz de un nodo (tipoExp)
tipoExp darDiscriminante(tipoNodo a); // Devuelve el tipo de expresión (discriminante) de un nodo
boolean devuelveBoolean(tipoNodo a); // Devuelve el valor booleano almacenado en un nodo
char darOperador(tipoNodo a); // Devuelve el operador almacenado en un nodo
void cargarNumero(tipoNodo &a,int num); // Carga un número en un nodo
int darNumero(tipoNodo a); // Devuelve el número almacenado en un nodo
void bajarNodo (tipoNodo a, FILE * f);
void levantarNodo(tipoNodo &a,FILE *f);
#endif /* tipoNodo_hpp */

