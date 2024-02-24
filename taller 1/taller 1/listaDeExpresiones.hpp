//
//  listaDeExpresiones.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#ifndef listaDeExpresiones_hpp
#define listaDeExpresiones_hpp

#include "expresion.hpp"
typedef struct Nodol{
Expresion info;
Nodol * sig;
} Nodo;

typedef Nodo * Lista;
void crearListaExp(Lista &a);
void insertFrontExp(Lista &a, Expresion b);
boolean existeEnList(Lista a, int b);


#endif /* listaDeExpresiones_hpp */
