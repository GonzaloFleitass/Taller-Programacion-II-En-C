#ifndef tipoExp_hpp
#define tipoExp_hpp
#include <stdio.h>

// Definición de la enumeración tipoExp, que representa el tipo de una expresión
typedef enum {
    VALOR,      // Valor de la expresión
    OPERADOR,   // Operador de la expresión
    PARENTESIS  // Paréntesis de la expresión
} tipoExp; // El tipo de dato es tipoExp

tipoExp darTipoExp(tipoExp a); // Devuelve el tipo de expresión

#endif /* tipoExp_hpp */
