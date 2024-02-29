//
//  tipoNodo.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

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




void cargarBol(boolean a,tipoNodo &b);//Carga el dato boolean.
void cargarOperado(char op, tipoNodo &b);//Carga el dato operador.
void cargarParentesis(char a,tipoNodo &b);//Carga el dato parentesis.
void mostrarNodo(tipoNodo a);//Muestra el dato almacenado en el nodo.
tipoExp darRaiz(tipoNodo a);
tipoExp darDiscriminante(tipoNodo a);//Devuelve el tipo de expresion (Discriminante)
boolean devuelveBoolean (tipoNodo a);
char darOperador (tipoNodo a);
void cargarnumero(tipoNodo &a,int i);
int darNumero(tipoNodo a);
void bajarNodo (tipoNodo a, FILE * f);
void levantarNodo(tipoNodo &a,FILE *f);
// Prototipos de funciones
void cargarBol(boolean a, tipoNodo &b); // Carga el dato booleano en un nodo
void cargarOperado(char op, tipoNodo &b); // Carga el dato operador en un nodo
void cargarParentesis(char a, tipoNodo &b); // Carga el dato paréntesis en un nodo
void mostrarNodo(tipoNodo a); // Muestra el dato almacenado en un nodo
tipoExp darRaiz(tipoNodo a); // Devuelve la raíz de un nodo (tipoExp)
tipoExp darDiscriminante(tipoNodo a); // Devuelve el tipo de expresión (discriminante) de un nodo
boolean devuelveBoolean(tipoNodo a); // Devuelve el valor booleano almacenado en un nodo
char darOperador(tipoNodo a); // Devuelve el operador almacenado en un nodo
void cargarNumero(tipoNodo &a, int i); // Carga un número en un nodo
int darNumero(tipoNodo a); // Devuelve el número almacenado en un nodo

#endif /* tipoNodo_hpp */

