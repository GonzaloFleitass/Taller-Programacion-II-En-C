//
//  tipoNodo.hpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
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

void cargarBol(string a,tipoNodo &b);
void cargarOperado(char op, tipoNodo &b);
#endif /* tipoNodo_hpp */
