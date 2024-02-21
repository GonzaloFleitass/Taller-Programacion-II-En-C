//
//  expresion.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#include "expresion.hpp"

int darNum(Expresion a){
    return a.num;
}
AbbExp darexp(Expresion a, AbbExp b){
    return a.info;
}

void crearExpresion(Expresion b){
    cargarExpresion(b.info);
    scanf("%d",&b.num);
}
                                
void MostrarExp(Expresion b){
    mostrarExpresionOrden(b.info);
}
