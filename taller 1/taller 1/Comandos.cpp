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

        // Suponiendo que crearAbb inicializa una estructura de árbol de expresiones vacía.
        crearAbb(e);
        crearAbb(aux);
        crearAbb(aux2);

        // Suponiendo que darexp devuelve la expresión almacenada en un nodo de la lista.
        copiarAbb(aux2, darexp(ObtenerExpEnList(l, a)));
        copiarAbb(aux, darexp(ObtenerExpEnList(l, i)));
        
        // Suponiendo que consCompoun realiza la operación compuesta (AND/OR).
        consCompoun(aux, aux2, c, e);

        Expresion ex;
        
        // Suponiendo que cargarExpresion carga una expresión en una estructura de datos.
        cargarExpresion(ex, e);
        
        // Suponiendo que cargaNumeroExpresion asigna un número a la expresión.
        cargaNumeroExpresion(ex, darNroUltimaExp(l));
        
        // Suponiendo que insertFrontExp inserta la expresión al frente de la lista.
        insertFrontExp(l, ex);
        // Dependiendo del contexto, podrías lanzar una excepción o retornar un código de error.
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
    }else{
        printf("Error, la expresion no existe");
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
