//
//  expresion.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#ifndef expresion_hpp
#define expresion_hpp

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
