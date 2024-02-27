//
//  comandos.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 26/2/24.
//

#include "comandos.hpp"

void atomic(boolean a, Lista &b){
    tipoNodo c; //creo variable con contenido de nodo del ABB
    cargarBol(a,c); //seteo discriminante y valor booleano
    AbbExp ar;
    crearAbb(ar);
    instertarNodo(ar,c);
  
    Expresion exp;
    cargarExpresion(exp, ar);
    cargaNumeroExpresion(exp,darNroUltimaExp(b));//obtengo el numero de la ultima expresion y se lo asigno a la nueva
    insertFrontExp(b,exp);
    
}

void show (Lista l, int i) {
    MostrarExp( ObtenerExpEnList(l, i));
}

void evaluate (Lista l, int i){
            Expresion exp = ObtenerExpEnList(l, i);
            mostrarBool(evaluateAbbs(darexp(exp)));
}

void exit (int &i){

    i = 0;
}


void compoundOrAnd (Lista &l, int i, int a, char c){
    if((existeEnList(l,i)==TRUE)&&(existeEnList(l,a)==TRUE)){//Busca en la lista si existen las dos expresiones con los numeros enteros que recibe.
        AbbExp e;
        crearAbb(e);
        consCompoun((darexp(ObtenerExpEnList(l,i))), (darexp(ObtenerExpEnList(l,a))), c, e);//Obtiene la expresion que corresponde a cada numero ingresado, devuelve el arbol de cada una de esas dos expresiones y las ingresa en el consCompound para formar un nuevo arbol con el operador que recibe del char c.
        Expresion  ex;
        cargarExpresion(ex, e);
        cargaNumeroExpresion(ex,darNroUltimaExp(l));
        insertFrontExp(l,ex);
    }else{
        printf("Error, las expresiones no existen");
    }
}

void compoundNot (Lista &l, int i, char c){
    if(existeEnList(l,i)==TRUE){//Busca en la lista si existe la expresion con el numer entero que recibe.
        AbbExp e;
        crearAbb(e);
        consCompounNot((darexp(ObtenerExpEnList(l,i))), c, e);//Obtiene la expresion que corresponde al  numero ingresado, devuelve el arbol de  la expresion y lo ingresa en el consCompound para formar un nuevo arbol con el operador que recibe del char c que es un NOT.
        Expresion  ex;
        cargarExpresion(ex, e);
        cargaNumeroExpresion(ex,darNroUltimaExp(l));
        insertFrontExp(l,ex);
    }else{
        printf("Error, la expresion no existe");
    }
       
}



