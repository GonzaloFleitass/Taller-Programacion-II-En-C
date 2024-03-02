#include "boolean.hpp"

void mostrarBool(boolean a) {
    if (a == TRUE) {
        printf("TRUE");
    } else {
        printf("FALSE");
    }
}

boolean verificar(string s) {
    boolean ok = false;
    int largo = strlar(s); 

    if (largo >= 5) {
        if (s[largo - 1] == 't' && s[largo - 2] == 'a' && s[largo - 3] == 'd' && s[largo - 4] == '.') {
            ok = true;
        }
    } else {
        ok = false;
    }

    return ok;
}
