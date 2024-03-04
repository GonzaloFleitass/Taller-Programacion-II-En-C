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


void compoundOrAnd(Lista &l, int i, int a, char c) {
    if (existeEnList(l, i) == TRUE && existeEnList(l, a) == TRUE) {
        AbbExp e, aux, aux2;

  
        crearAbb(e);
        crearAbb(aux);
        crearAbb(aux2);

     
        copiarAbb(aux2, darexp(ObtenerExpEnList(l, a)));
        copiarAbb(aux, darexp(ObtenerExpEnList(l, i)));
        
 
        consCompoun(aux, aux2, c, e);
        
      
        Expresion ex;
       
        cargarExpresion(ex, e);
        
        cargaNumeroExpresion(ex, darNroUltimaExp(l));
        
    
        insertFrontExp(l, ex);
      
    }
}


void compoundNot (Lista &l, int i, char c){
    if(existeEnList(l,i)==TRUE){//Busca en la lista si existe la expresion con el numer entero que recibe.
        AbbExp e,aux;
        copiarAbb(aux,darexp(ObtenerExpEnList(l,i) ));
        crearAbb(e);
        consCompounNot(aux, c, e);
        Expresion  ex;
        cargarExpresion(ex, e);
        cargaNumeroExpresion(ex,darNroUltimaExp(l));
        insertFrontExp(l,ex);
        
    }
}

void save(Lista l, int i){
    if(existeEnList(l,i)==TRUE){
        int contador=0;
        AbbExp  aux;
        copiarAbb(aux,darexp(ObtenerExpEnList(l,i) ));
        enumerarNodosEnOrden(aux,contador);

        //SaveArbol(aux,); falta el nombre del archivo

    }
}
void loadArbol (AbbExp &a,Lista &l,string nombreArchivo){
    crearAbb(a);
    FILE  * f = fopen (nombreArchivo, "rb");
    if (f!=NULL)
    {
       levantarArbol(a, f);
    }
    Expresion   e;
    cargaNumeroExpresion(e, darNroUltimaExp(l));
    cargarExpresion(e, a);
    insertFrontExp(l, e);
}
