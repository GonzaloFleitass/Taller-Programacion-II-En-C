//
//  listastring.hpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#ifndef listastring.hpp
#define listastring.hpp

#include <stdio.h>
#include <stringDinamico.h>
#include <boolean.h>

typedef struct NodoL { 
     string s; 
     NodoL *sig; 
    } Nodo; 

 typedef Nodo * listastring;  

void partirstring(string s, listastring &l);
void insback (string s, listastring &l);
 
#endif /* listastring.hpp */
