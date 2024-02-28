//
//  tipoExp.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#ifndef tipoExp_hpp
#define tipoExp_hpp

#include <stdio.h>

// Definición de la enumeración tipoExp, que representa el tipo de una expresión
typedef enum {
    VALOR,      // Valor de la expresión
    OPERADOR,   // Operador de la expresión
    PARENTESIS  // Paréntesis de la expresión
} tipoExp; // El tipo de dato es tipoExp

// Prototipo de función
tipoExp darTipoExp(tipoExp a); // Devuelve el tipo de expresión


#endif /* tipoExp_hpp */
