//
//  boolean.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#include "boolean.hpp"

boolean and(boolean a, boolean b) {
    return (a == TRUE && b == TRUE) ? TRUE : FALSE;
}

boolean or(boolean a, boolean b) {
    return (a == TRUE || b == TRUE) ? TRUE : FALSE;
}

boolean not(boolean a) {
    return (a == TRUE) ? FALSE : TRUE;
}

void mostrarBool (boolean a){
    if ( a == TRUE){
            printf( "TRUE");
                } else {   
                            printf ("FASLSE");
    }
}


