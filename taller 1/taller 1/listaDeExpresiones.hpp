#ifndef listaDeExpresiones_hpp
#define listaDeExpresiones_hpp
#include "expresion.hpp"

typedef struct Nodol{
Expresion info;
Nodol * sig;
} NodoA ;
typedef NodoA * Lista;

void crearListaExp(Lista &a);// Función para crear una lista de expresiones vacía
void insertFrontExp(Lista &a, Expresion b);// Función para insertar una expresión al principio de la lista
boolean existeEnList(Lista a, int b);// Función para verificar si un número está presente en alguna expresión de la lista
boolean esVacia(Lista a);// Función para verificar si la lista está vacía
Expresion darExpresion(Lista a);// Función para obtener la expresión almacenada en la lista
void mostrarListaDeExp(Lista a);// Función para mostrar por pantalla todas las expresiones de la lista
int darNroUltimaExp(Lista a);// Función para obtener el número de la última expresión en la lista
Expresion ObtenerExpEnList(Lista a, int b);// Función para obtener la expresión que se encuentra en una posición específica de la lista

#endif /* listaDeExpresiones_hpp */
