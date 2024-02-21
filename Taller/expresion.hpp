//
//  expresion.hpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#ifndef expresion_hpp
#define expresion_hpp
#include <stdio.h>
#include "arbolDeExp.hpp"

typedef struct {
int num;
AbbExp info;
}Expresion;

int darNum(Expresion a);
AbbExp darexp(Expresion a, AbbExp b);
void crearExpresion(Expresion);
void MostrarExp(Expresion b);

#endif /* expresion_hpp */
