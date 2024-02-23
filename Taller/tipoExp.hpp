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
typedef enum{VALOR,OPERADOR,PARENTESIS}tipoExp;

tipoExp darTipoExp (tipoExp a);//Devuelve el tipo de expresion. 

#endif /* tipoExp_hpp */
