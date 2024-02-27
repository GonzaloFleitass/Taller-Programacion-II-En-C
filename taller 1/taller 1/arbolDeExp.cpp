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
        printf(" ");
        
    }
}

void agregarParentesisA(AbbExp &a){
    AbbExp aux=a;
    if(aux!=NULL){
        agregarParentesisA(aux->hizq);
            }
        aux = new nodo;
        cargarParentesis('(',aux->TiNod);
        aux->hizq =NULL;
        aux->hder =NULL;
    a=aux;
        }
void agregarParentesisFin(AbbExp &a){
    AbbExp aux=a;
    if(aux!=NULL){
        agregarParentesisA(aux->hder);
            }
        aux = new nodo;
        cargarParentesis(')',aux->TiNod);
        aux->hizq =NULL;
        aux->hder =NULL;
    a=aux;
        }
    
void consCompoun(AbbExp a, AbbExp b, char c,AbbExp &e){
    e= new nodo;
    cargarOperado(c, e->TiNod);
    e->hizq=a;
    e->hder=b;
    agregarParentesisA(a->hizq);
    agregarParentesisFin(a->hder);
    agregarParentesisA(b->hizq);
    agregarParentesisFin(b->hder);
}

void consCompounNot(AbbExp a, char c,AbbExp &e){
        e= new nodo;
        cargarOperado(c, e->TiNod);
        e->hizq=NULL;
        e->hder=a;
        agregarParentesisA(a->hizq);
        agregarParentesisFin(a->hder);
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
