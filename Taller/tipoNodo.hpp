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

<<<<<<< HEAD
void cargarBol(boolean,tipoNodo &b);
void cargarOperado(char op, tipoNodo &b);
void mostrarNodo(tipoNodo a);
=======
void cargarBol(boolean a,tipoNodo &b);
void cargarOperado(string op, tipoNodo &b);
>>>>>>> c5d967d267327019d74e10d551c42ff573f162b9
#endif /* tipoNodo_hpp */
