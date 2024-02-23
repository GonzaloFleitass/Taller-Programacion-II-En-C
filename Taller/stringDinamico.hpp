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
boolean esVacio (string s);//Determina si el string es vacio;
void eliminarBlancosPrincipio(string s, string &sb);//Copia hacia sb los caracteres de s,pero sin los blancos que s puede tener al principio, Precondicion s no es vacio.
void dividirString (string s, string &separado, string &resto);//divide el string en dos, el primeor guarda la primer palabra de s, y en el segundo el resto del string, pre condicion, s noes vacio
int devolverTipoUnion(string s);//Devuelve tipo de expresion (Union discriminada).
#endif /* stringDinamico_hpp */
