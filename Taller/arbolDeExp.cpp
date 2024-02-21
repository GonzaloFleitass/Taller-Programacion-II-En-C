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
        mostrarNodo(a->TiNod);
        mostrarExpresionOrden(a->hder);
    }
}
void agregarParentesisA(AbbExp &a){
    if(a!=NULL){
        agregarParentesisA(a->hizq);
            }
        a = new abb;
        cargarParentesisA(a->TiNod);
        a->hizq =NULL;
        a->hder =NULL;
        }
void agregarParentesisFin(AbbExp &a){
    if(a!=NULL){
        agregarParentesisA(a->hder);
            }
        a = new abb;
        cargarParentesisFin(a->TiNod);
        a->hizq =NULL;
        a->hder =NULL;
        }
    
void consCompoun(AbbExp a, AbbExp b, char c,AbbExp &e){
    e= new abb;
    cargarOperado(c, a->TiNod);
    e->hizq=a;
    e->hder=b;
    agregarParentesisA(e);
    agregarParentesisFin(e);
}
char darRaiz(AbbExp a);
boolean evaluateAbbs(AbbExp a);



#endif /* arbolDeExp_hpp */
