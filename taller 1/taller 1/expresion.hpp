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

void cargarExpresion(Expresion &a, AbbExp b);
int darNum(Expresion a);
AbbExp darexp(Expresion a);
void crearExpresion(Expresion);
void MostrarExp(Expresion b);
void cargaPrimNumeroExpresion (Expresion a);

#endif /* expresion_hpp */
