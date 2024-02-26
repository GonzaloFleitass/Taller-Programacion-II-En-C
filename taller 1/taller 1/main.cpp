//
//  main.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//


#include <stdio.h>

#include "listaString.hpp"
int main() {
    
    
    string s,sb,separado,resto;
    listaString l;
    
    
    int salirprograma = 0;
    
    printf (" BOOLEAN CREATOR PRO ");
    printf(" - atomic: crea una nueva expresión booleana atómica (false o true) \n - compound: crea una nueva expresión booleana compuesta (contiene al menos un operador) \n - show: despliega por pantalla una expresión booleana previamente creada \n - evaluate: evalúa una expresión booleana, indicando si es verdadera o falsa \n - save: guarda en archivo una expresión booleana previamente creada  - load: recupera a memoria una expresión booleana previamente guardada en archivo  - exit: sale de la aplicación");
    
    strcrear(s);
    printf("\n");
    printf("Ingrese un comando");
    printf("\n");
    scan(s);
    printf("\n");
    crearLista(l);
    partirString(s, l);
    mostrarlistastring(l);
    
    
    switch(){
        atomic:  boolean c;
                string t,f;
                cargarTRUE(t);
                cargarFalse(f);
                if( streq(darString (l),t)==TRUE){
                    c=TRUE;
                    //  cargar el boolean en lista//
                }else{
                    c=FALSE;
                    //cargar boolean en lista en caso de q sea false el boolean//
                }
                break;
        }
    }
        

    
   // do {}

      //  while ( salirprograma != 0);

    
    return 0;
}

