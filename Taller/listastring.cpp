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
    if(l==NULL){
        l=new Nodo;
        strcop(separado,l->info);
        l->sig=NULL;
    }else{
        
        while(aux->sig!=NULL){
            aux=aux->sig;
        }
        aux->sig=new Nodo;
        aux=aux->sig;
        strcop (separado, aux->info);
        aux->sig=NULL;
        
    }
}




void partirstring(string s, listaString &l){
    string sb,separado,resto;
        strcrear (sb);
        strcrear (separado);
        strcrear (resto);
    if (esVacio(s)==FALSE){
        do {
               eliminarBlancosPrincipio(s, sb);
                dividirString(sb , separado, resto);
                insback(separado, l);
                s = resto;
        }while(esVacio(resto)==FALSE);
                
        
    }
}

    
        
