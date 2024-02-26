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
} NodoA ;

typedef NodoA * Lista;
void crearListaExp(Lista &a);
void insertFrontExp(Lista &a, Expresion b);
boolean existeEnList(Lista a, int b);
boolean esVacia (Lista a);
Expresion darExpresion(Lista a);
void mostrarListaDeExp(Lista a);
#endif /* listaDeExpresiones_hpp */
