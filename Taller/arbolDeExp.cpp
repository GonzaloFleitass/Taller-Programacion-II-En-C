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
    if(a->hizq!=NULL){
        agregarParentesisA(a->hizq);
            }
        a = new nodo;
        cargarParentesis('(',a->TiNod);
        a->hizq =NULL;
        a->hder =NULL;
        }
void agregarParentesisFin(AbbExp &a){
    if(a->hder!=NULL){
        agregarParentesisA(a->hder);
            }
        a = new nodo;
        cargarParentesis(')',a->TiNod);
        a->hizq =NULL;
        a->hder =NULL;
        }
    
void consCompoun(AbbExp a, AbbExp b, char c,AbbExp &e){
    e= new nodo;
    cargarOperado(c, e->TiNod);
    e->hizq=a;
    e->hder=b;
    agregarParentesisA(e);
    agregarParentesisFin(e);
}

boolean darBoolizq (AbbExp a){
    if(a->hizq!=NULL){
        return darBoolizq(a->hizq) && darBoolizq(a->hizq);
        
    }
    
}

boolean evaluateAbbs(AbbExp a){
    switch (darTipoExp(darDiscriminante((a->TiNod)))) {
        case VALOR:
            return devuelveBoolean(a->TiNod);
            break;
        case OPERADOR:
            switch (darOperador(a->TiNod)) {
                case 'a':
                    return evaluateAbbs(a->hizq);
                    break;
                    
                default:
                    break;
            }
        default:
            break;
    }
}


