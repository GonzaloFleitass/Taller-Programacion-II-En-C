//
//  comandos.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 26/2/24.
//

#include "comandos.hpp"

void atomic(listaString a, Lista &b){
    boolean a;
    string t,f;
    cargarTRUE(t);
    cargarFalse(f);
    if( streq(darString (a),t)==TRUE){
        a=TRUE;
        cargarBol(a,darExpresion(b));
    }else{
        a=FALSE;
        cargarBol(a,darExpresion(b));
            }
    }
}


