//
//  listastring.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 17/2/24.
//

#include <stdio.h>
#include "listastring.hpp"

void partirstring(string primero, listaString &l){
    string aux;
       strcrear (aux);

    if(esVacio(primero)==FALSE){
        while (l->sig!= NULL){
            while (l->info != '\0'){
        eliminarBlancosPrincipio(l->info, &primero);
            dividirString(primero , &aux, &resto);
                insback(separado, l ->info);
            }

            l = l->sig;
        }
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
