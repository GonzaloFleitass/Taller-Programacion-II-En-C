//
//  stringDinamico.hpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#ifndef stringDinamico_hpp
#define stringDinamico_hpp

#include <stdio.h>
#include "boolean.hpp"
const int MAX = 80;
typedef char * string;
void strcrear (string &s);
void strdestruir (string &s);
int strlar (string s);//Devuelve el largo del String
void print (string s);//Despliega String por pantalla
void strcop (string s, string &b); //Copia un string en otro string
void scan (string &s);//Carga un String
boolean streq (string s1, string s2);//reciba dos strings y devuelva TRUE si ambos strings son iguales o FALSE en caso contrario.

#endif /* stringDinamico_hpp */
