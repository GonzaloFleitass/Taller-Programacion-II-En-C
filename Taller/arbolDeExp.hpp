//
//  arbolDeExp.hpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#ifndef arbolDeExp_hpp
#define arbolDeExp_hpp
#include <stdio.h>
#include "tipoNodo.hpp"
#include "boolean.hpp"

typedef struct nodoA {
tipoNodo TiNod;
nodoA * hizq;
nodoA * hder;
} abb;
typedef abb * AbbExp;

void mostrarExpresionOrden(AbbExp a);
void agregarParentesisA(AbbExp &a);
void agregarParentesisFin(AbbExp &a);
void cons(AbbExp a, AbbExp b, char c,AbbExp &e);
char darRaiz(AbbExp a);
boolean evaluateAbbs(AbbExp a);
#endif /* arbolDeExp_hpp */
