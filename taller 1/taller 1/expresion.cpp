//
//  expresion.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#include "expresion.hpp"

int darNum(Expresion a){
    return a.num;
}
AbbExp darexp(Expresion a){
    return a.info;
}

   
void MostrarExp(Expresion b){
    mostrarExpresionOrden(b.info);
}

void cargaPrimNumeroExpresion (Expresion a){
  a.num=1;
}
