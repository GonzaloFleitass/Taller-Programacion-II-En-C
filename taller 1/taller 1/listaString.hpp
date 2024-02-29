//
//  listaString.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#ifndef listaString_hpp
#define listaString_hpp

#include "stringDinamico.hpp"


typedef struct NodoL {
    string info;    
    NodoL *sig;
} Nodo;

// Alias para un puntero a Nodo, representando una lista de cadenas
typedef Nodo * listaString;

// Declaraciones de funciones

// Función para crear una lista enlazada vacía
void Crear(listaString &l);

// Función para mostrar los elementos de la lista enlazada
void MostrarLista(listaString l);

// Función para crear una lista enlazada vacía
void crearLista(listaString &l);

// Función para insertar una cadena al final de la lista enlazada
void insback(string s, listaString &l);

// Función para dividir una cadena en palabras y agregar cada palabra a la lista enlazada
void partirString(string s, listaString &l);

// Función para cargar palabras en la lista enlazada
void cargarPalabras(listaString &l);

// Función para convertir un carácter en su valor ASCII
int conversorcai(char c);

// Función para mostrar los elementos de una lista de cadenas
void mostrarlistastring(listaString l);

// Función para obtener una cadena concatenada a partir de la lista enlazada
string darString(listaString a);

// Función para devolver un comando de la lista enlazada
char devuelveComando(listaString l, listaString n);

#endif /* listaString_hpp */
