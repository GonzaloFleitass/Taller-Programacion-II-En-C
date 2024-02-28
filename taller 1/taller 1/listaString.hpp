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
     NodoL * sig;
    } Nodo;

typedef Nodo * listaString;

void Crear (listaString &l);
void MostrarLista(listaString l);
void crearLista(listaString &l);
void insback (string s, listaString &l);
void partirString(string s, listaString &l);
void cargarPalabras(listaString &l);
int conversorcai(char c);
int conversorcai (char c);
void mostrarlistastring (listaString l);
string darString(listaString a);
char devuelveComando(listaString l,listaString n);
#endif /* listaString_hpp */
