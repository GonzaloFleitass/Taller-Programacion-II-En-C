//
//  arbolDeExp.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#ifndef arbolDeExp_hpp
#define arbolDeExp_hpp

#include "tipoNodo.hpp"


typedef struct nodoA {
tipoNodo TiNod;
nodoA * hizq;
nodoA * hder;
} nodo;

typedef nodo * AbbExp;

void instertarNodo(AbbExp &a);
tipoNodo darNodo(AbbExp a);
void mostrarExpresionOrden(AbbExp a);
void agregarParentesisA(AbbExp &a);
void agregarParentesisFin(AbbExp &a);
void consCompoun(AbbExp a, AbbExp b, char c,AbbExp &e);
void consCompoun(AbbExp a, char c,AbbExp &e);
boolean darBoolizq (AbbExp a);
boolean evaluateAbbs(AbbExp a);
void enumerarNodosEnOrden(AbbExp &a);

#endif /* arbolDeExp_hpp */

