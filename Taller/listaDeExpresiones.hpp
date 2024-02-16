//
//  listaDeExpresiones.hpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#ifndef listaDeExpresiones_hpp
#define listaDeExpresiones_hpp

#include <stdio.h>
#include "expresion.hpp"
typedef struct Nodol{
Expresion info;
Nodol * sig;
} Nodo;

typedef Nodo * Lista;
void crearLista(Lista &a);
void insertFrontExp(Lista &a, Expresion b);
boolean existeEnList(Lista a, int b);
#endif /* listaDeExpresiones_hpp */
