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

void showd (Lista l, int i) {
    Expresion exp = ObtenerExpEnList(l, i);
    MostrarExp(exp);
}
/* show recibe entero y lista
 busca en lista con entero y recibe expresion
 Muestro el ABB*/

/* compound and / or recibe 2 enteros y el char del operador
 busca en lista con 1er entero y recibe primer expresion
 busca en lista con 2do entero y recibe segunda expresion
 
 
 AbbExp ar;
 crearAbb(ar);
 
 usando darExp de modulo Expresion, obtengo el ABB de la 1er expresion
 usando darExp de modulo Expresion, obtengo el ABB de la 2da expresion
 invoco al cons con el char del operador, el arbol vacio y los arboles de las expresiones
 */

