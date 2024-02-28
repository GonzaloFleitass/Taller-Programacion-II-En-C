//
//  stringDinamico.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#ifndef stringDinamico_hpp
#define stringDinamico_hpp

#include "boolean.hpp"
const int MAX = 80;
typedef char * string;

void strcrear(string &s); // Crea una cadena de caracteres
void strdestruir(string &s); // Destruye una cadena de caracteres
int strlar(string s); // Devuelve la longitud de una cadena de caracteres
void print(string s); // Imprime una cadena de caracteres por pantalla
void strcop(string s, string &b); // Copia una cadena de caracteres en otra
void scan(string &s); // Lee una cadena de caracteres desde la entrada estándar
boolean streq(string s1, string s2); // Compara dos cadenas de caracteres y devuelve TRUE si son iguales, FALSE en caso contrario
boolean esVacio(string s); // Determina si una cadena de caracteres está vacía
void eliminarBlancosPrincipio(string s, string &sb); // Elimina los blancos al principio de una cadena de caracteres
void dividirString(string s, string &separado, string &resto); // Divide una cadena de caracteres en dos partes
int devolverTipoUnion(string s); // Devuelve el tipo de expresión de una cadena de caracteres
void cargarTRUE(string &l); // Carga el valor "TRUE" en una cadena de caracteres
void cargarFalse(string &l); // Carga el valor "FALSE" en una cadena de caracteres
#endif /* stringDinamico_hpp */
