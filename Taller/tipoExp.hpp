//
//  tipoExp.hpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#ifndef tipoExp_hpp
#define tipoExp_hpp

#include <stdio.h>
#include "stringDinamico.hpp"
typedef enum{BOOLEAN,OPERADOR, PARENTESISA, PARENTESISC}tipoExp;

int darExp(TipoExp a);
void mostrarOperador(char c);
void mostrarParentesis (char c);
#endif /* tipoExp_hpp */
