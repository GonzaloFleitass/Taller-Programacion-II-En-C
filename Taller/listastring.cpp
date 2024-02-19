//
//  listastring.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 17/2/24.
//

#include <stdio.h>
#include "listastring.hpp"


void insback (string separado, listaString &l){
    listaString aux=l;
    while(aux->sig!=NULL){
        aux=aux->sig;
    }
    aux->sig=new Nodo;
    aux=aux->sig;
    strcop (separado, aux->info);
    aux->sig=NULL;
        l=aux;
    }




void partirstring(string s, listaString &l){
    string sb,separado,resto;
        strcrear (sb);
        strcrear (separado);
        strcrear (resto);
    if (esVacio(s)==FALSE){
        while (l->sig!= NULL){
            while(esVacio(resto)==FALSE){
                eliminarBlancosPrincipio(s, &sb);
                dividirString(sb , &separado, &resto);
                insback(separado, l);
            }
        }
    }
        l = l->sig;
}

    
        
