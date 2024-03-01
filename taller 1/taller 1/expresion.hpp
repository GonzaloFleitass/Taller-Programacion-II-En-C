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

// Función para cargar una expresión en una estructura de expresión
void cargarExpresion(Expresion &a, AbbExp b);

// Función para obtener el número almacenado en una expresión
int darNum(Expresion a);

// Función para obtener la expresión almacenada en una estructura de expresión
AbbExp darexp(Expresion a);

// Función para mostrar una expresión por pantalla
void MostrarExp(Expresion b);

// Función para cargar un número en una estructura de expresión
void cargaNumeroExpresion (Expresion &a, int n);


#endif /* expresion_hpp */
