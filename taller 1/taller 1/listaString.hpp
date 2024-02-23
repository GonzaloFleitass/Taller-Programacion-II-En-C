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


void insback (string s, listaString &l);
void partirstring(string s, listaString &l);
void cargarPalabras(listaString &l);
int conversorcai (char c);

#endif /* listaString_hpp */
