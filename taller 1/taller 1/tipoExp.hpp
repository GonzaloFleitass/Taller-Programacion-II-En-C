//
//  tipoExp.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#ifndef tipoExp_hpp
#define tipoExp_hpp

#include <stdio.h>

typedef enum{VALOR,OPERADOR,PARENTESIS}tipoExp;

tipoExp darTipoExp (tipoExp a);//Devuelve el tipo de expresion.


#endif /* tipoExp_hpp */
