//
//  listaDeExpresiones.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#include "listaDeExpresiones.hpp"
void crearListaExp(Lista &a){
    a=NULL;
}
void insertFrontExp(Lista &a, Expresion b){
    
    Lista aux=new NodoA;
    aux->info=b;
    aux->sig=a;
    a=aux;
}
boolean existeEnList(Lista a, int b){
    boolean existe=FALSE;
    while(a->sig!=NULL&&existe!=TRUE){
        if(darNum(a->info)==b){
            existe=TRUE;
        }else{
            a=a->sig;
        }
    }
    return existe;
}




boolean esVacia(Lista a){
    if(a==NULL){
        return TRUE;
    }else{
        return FALSE;
            }
}


Expresion darExpresion(Lista a){
    return a->info;
}
void mostrarListaDeExp(Lista a){
    while(a!=NULL){
        MostrarExp(a->info);
        a=a->sig;
    }
}
