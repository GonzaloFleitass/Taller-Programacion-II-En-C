#ifndef comandos_hpp
#define comandos_hpp
#include "listaString.hpp"
#include "listaDeExpresiones.hpp"

void atomic(boolean a, Lista &b);// Función para establecer un valor atómico en un nodo de la lista
void show (Lista l, int i);// Función para mostrar el contenido de la lista en la posición especificada
void compoundOrAnd (Lista &l, int i, int a, char c);// Función para agregar una operación compuesta "OR" o "AND" en la lista en la posición especificada
void compoundNot (Lista &l, int i, char c); // Función para agregar una operación compuesta "NOT" en la lista en la posición especificada
void evaluate(Lista l ,int i); // Función para evaluar el contenido de la lista a partir de la posición especificada
void save(Lista l, int i);// Función para guardar el estado de la lista en la posición especificada
void exit (int &i);// Función para salir del programa y actualizar el valor de la variable entera i
void loadArbol (AbbExp &a,Lista &l, string nombreArchivo);//Funcion para cargar una ex[resion previamente guardada.
#endif /* comandos_hpp */
