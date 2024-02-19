//
//  arbolDeExp.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#include "arbolDeExp.hpp"


void mostrarExpresionOrden(AbbExp a){
    if (a!=NULL){
        mostrarExpresionOrden(a->hizq);
        mostrarnodo(a->TiNod);
        mostrarExpresionOrden(a->hder);
    }
}

void agregarParentesis(AbbExp a);
void cons(AbbExp a, AbbExp b, char c,AbbExp &e);
char darRaiz(AbbExp a);
boolean evaluateAbbs(AbbExp a);



#endif /* arbolDeExp_hpp */
