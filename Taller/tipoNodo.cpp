//
//  tipoNodo.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#include "tipoNodo.hpp"


void cargarBol(boolean a,tipoNodo &b){

    b.datos.bol=a;
    }

void cargarOperado(char op, tipoNodo &b){
    b.datos.operador=op;
}

void cargarParentesisA (tipoNodo &b){
    b.datos.parentesis='(';
}
void cargarParentesisFin (tipoNodo &b){
    b.datos.parentesis=')';
}


void mostrarNodo(tipoNodo a){
  
    if(a.discriminante==BOOLEAN){
        mostrarBool(a.datos.bol);
    }else{
        if(a.discriminante==OPERADOR){
            mostrarOperador(a.datos.operador);
        } else{
            if(a.discriminante==PARENTESISA){
                mostrarParentesisa(a.datos.parentesis);
            }else{
                mostrarParentesisc(a.datos.parentesis);
            }
        }
    }
}
     
