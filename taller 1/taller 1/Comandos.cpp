//
//  comandos.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 26/2/24.
//

#include "comandos.hpp"

void atomic(boolean a, Lista &b){
    tipoNodo c;
    cargarBol(a,c);
    AbbExp ar;
    crearAbb(ar);
    instertarNodo(ar,c);
    Expresion exp;
    cargarExpresion(exp, ar);
    cargaPrimNumeroExpresion(exp);
    insertFrontExp(b,exp);
    
}

