//
//  listastring.hpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#ifndef listastring//.hpp
#define listastring//.hpp

#include <stdio.h>
#include "stringDinamico.hpp"
#include "boolean.hpp"

typedef struct NodoL { 
     string info; 
     NodoL * sig;
    } Nodo;

typedef Nodo * listaString;


void insback (string s, listaString &l);
void partirstring(string s, listaString &l);
void cargarPalabras(listaString &l);
int conversorcai(char c);

#endif /* listastring.hpp */
