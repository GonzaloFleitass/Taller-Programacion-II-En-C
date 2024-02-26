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


/*
boolean evaluateAbbs(AbbExp a){
    
    switch (darTipoExp(darDiscriminante((a->TiNod)))) {
        case VALOR:
            return devuelveBoolean(a->TiNod);
            break;
        case OPERADOR:
            switch (darOperador(a->TiNod)) {
                case 'a':
                    return (boolean)(evaluateAbbs(a->hizq)&&evaluateAbbs(a->hder));
                    break;
                case 'o':
                    return (boolean)(evaluateAbbs(a->hizq)||evaluateAbbs(a->hder));
                    break;
                    
                case 'n':
                    return (boolean)(!evaluateAbbs(a->hder));
                    break;
            }
        case PARENTESIS:
            break;
    }

}
 */


boolean evaluateAbbs(AbbExp a){
    
    if (darTipoExp(darDiscriminante((a->TiNod))) == VALOR) {
        return devuelveBoolean(a->TiNod);
    } else{
        if (darTipoExp(darDiscriminante((a->TiNod))) == OPERADOR)
            switch (darOperador(a->TiNod)) {
                case 'a':
                    return (boolean)(evaluateAbbs(a->hizq)&&evaluateAbbs(a->hder));
                    break;
                case 'o':
                    return (boolean)(evaluateAbbs(a->hizq)||evaluateAbbs(a->hder));
                    break;
                    
                case 'n':
                    return (boolean)(!evaluateAbbs(a->hder));
                    break;
                
            }
        
    }
    return TRUE;
}




void enumerarNodosEnOrden(AbbExp &a){

    int contador = 0;
    
    if (a != NULL) {
        enumerarNodosEnOrden(a->hizq); // Recorrer el subárbol izquierdo
        cargarnumero(a->TiNod, contador+1); // Asignar el número id al nodo actual
        enumerarNodosEnOrden(a->hder); // Recorrer el subárbol derecho
    }
    
}
tipoNodo darNodo(AbbExp a){
    return a->TiNod;
}
//el arbol tiene que estar vacio
void instertarNodo(AbbExp &a,tipoNodo p){ 
    a = new nodo;
    a -> TiNod= p;
    a -> hizq = NULL;
    a -> hder = NULL;
}

void crearAbb(AbbExp &a){
    a=NULL;
}
