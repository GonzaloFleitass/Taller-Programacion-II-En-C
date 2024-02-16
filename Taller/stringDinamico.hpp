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
void scan (string &s);//Carga un String
boolean streq (string s1, string s2);//reciba dos strings y devuelva TRUE si ambos strings son iguales o FALSE en caso contrario.
void Bajar_String (string s, FILE * f);// Baja el string a un archivo.
void Levantar_String (string &s, FILE * f);//Lecanta el string desde un archivo.
#endif /* stringDinamico_hpp */
