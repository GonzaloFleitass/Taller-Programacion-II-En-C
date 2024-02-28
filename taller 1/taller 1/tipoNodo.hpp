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
int numero;
tipoExp discriminante;
union{
        boolean bol;
        char operador;
        char parentesis;
    }datos;
}tipoNodo;



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
#endif /* tipoNodo_hpp */

