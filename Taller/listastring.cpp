//
//  listastring.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 17/2/24.
//

#include <stdio.h>
#include "listastring.hpp"

void partirstring(string primero, listaString &l){
    if(esVacio(primero)==FALSE){
        eliminarBlancosPrincipio(l->info, primero);
        dividirString(l->info, primero, l->info);
    }
}
void insback (string primero, listaString &l){
    listaString aux=l;
    while(aux->sig!=NULL){
        aux=aux->sig;
    }
    aux->sig=new Nodo;
    aux=aux->sig;
    strcop (primero, aux->info);
    aux->sig=NULL;
        l=aux;
    }
