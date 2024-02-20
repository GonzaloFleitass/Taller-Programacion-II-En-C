//
//  tipoExp.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//
#include "tipoExp.hpp"

int darExp(TipoExp a){
  return a;
}

void mostrarOperador(char c){
      if ( c == 'a'){
        printf("AND");} else if ( c == 'n' ){
        printf ("NOT"); } else { printf("OR");
                               }
                                }


void mostrarParentesis (char c){  
        if (c == '(') {
          printf ("("); }else{ 
          printf (")");
        }
}


