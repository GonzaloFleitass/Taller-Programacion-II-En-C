//
//  tipoExp.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//
#include "tipoExp.hpp"

tipoExp darTipoExp (tipoExp a){
    switch (a) {
        case VALOR:
            return VALOR;
            break;
        case OPERADOR:
            return OPERADOR;
            break;
        case PARENTESIS:
            return PARENTESIS;
            break;
        default:
            break;
    }
}
