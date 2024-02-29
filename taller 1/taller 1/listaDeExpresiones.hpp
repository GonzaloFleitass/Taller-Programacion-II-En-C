//
//  listaDeExpresiones.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#ifndef listaDeExpresiones_hpp
#define listaDeExpresiones_hpp

#include "expresion.hpp"
typedef struct Nodol{
Expresion info;
Nodol * sig;
} NodoA ;


typedef NodoA * Lista;

// Función para crear una lista de expresiones vacía
void crearListaExp(Lista &a);

// Función para insertar una expresión al principio de la lista
void insertFrontExp(Lista &a, Expresion b);

// Función para verificar si un número está presente en alguna expresión de la lista
boolean existeEnList(Lista a, int b);

// Función para verificar si la lista está vacía
boolean esVacia(Lista a);

// Función para obtener la expresión almacenada en la lista
Expresion darExpresion(Lista a);

// Función para mostrar por pantalla todas las expresiones de la lista
void mostrarListaDeExp(Lista a);

// Función para obtener el número de la última expresión en la lista
int darNroUltimaExp(Lista a);

// Función para obtener la expresión que se encuentra en una posición específica de la lista
Expresion ObtenerExpEnList(Lista a, int b);

#endif /* listaDeExpresiones_hpp */
