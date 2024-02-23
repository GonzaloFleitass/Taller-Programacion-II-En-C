//
//  arbolDeExp.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
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

void consCompoun(AbbExp a, char c,AbbExp &e){
        e= new nodo;
        cargarOperado(c, e->TiNod);
        e->hizq=NULL;
        e->hder=a;
        agregarParentesisA(e);
        agregarParentesisFin(e);
    }



boolean evaluateAbbs(AbbExp a){
    
    switch (darTipoExp(darDiscriminante((a->TiNod)))) {
        case VALOR:
            return devuelveBoolean(a->TiNod);
            break;
        case OPERADOR:
            switch (darOperador(a->TiNod)) {
                case 'a':
                    return boolean(evaluateAbbs(a->hizq)&&evaluateAbbs(a->hder));
                    break;
                case 'o':
                    return boolean(evaluateAbbs(a->hizq)||evaluateAbbs(a->hder));
                    break;
                    
                case 'n':
                    return boolean(!evaluateAbbs(a->hder));
                    break;
                
            }
        case PARENTESIS:
            break;
    }
    return evaluateAbbs(a->hizq);
    return evaluateAbbs(a->hder);
}

void enumerarNodosEnOrden(AbbExp &a){

    int contador = 0;
    
    if (a != NULL) {
        enumerarNodosEnOrden(a->hizq); // Recorrer el subárbol izquierdo
        cargarnumero(a->TiNod, ++contador); // Asignar el número id al nodo actual
        enumerarNodosEnOrden(a->hder); // Recorrer el subárbol derecho
    }
    
}


