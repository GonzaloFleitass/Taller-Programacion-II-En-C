#ifndef expresion_hpp
#define expresion_hpp
#include "arbolDeExp.hpp"

typedef struct {
int num;
AbbExp info;
}Expresion;

void cargarExpresion(Expresion &a, AbbExp b);// Función para cargar una expresión en una estructura de expresión
int darNum(Expresion a);// Función para obtener el número almacenado en una expresión
AbbExp darexp(Expresion a);// Función para obtener la expresión almacenada en una estructura de expresión
void MostrarExp(Expresion b);// Función para mostrar una expresión por pantalla
void cargaNumeroExpresion (Expresion &a, int n);// Función para cargar un número en una estructura de expresión

#endif
