//
//  tipoExp.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
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
