#include "arbolDeExp.hpp"

void mostrarExpresionOrden(AbbExp a){
    if (a != NULL) {
        
        
        mostrarExpresionOrden(a->hizq);
        mostrarNodo(a->TiNod);
        mostrarExpresionOrden(a->hder);
        
        
    }
}



void cargarParentesisAbb(AbbExp &a){
    cargarParentesisHizq(a->hizq);
    cargarParentesisHder(a->hder);
}
void cargarParentesisHizq(AbbExp &a){
    if(a==NULL){
        a = new nodo;
        cargarParentesis('(', a->TiNod);
        a->hizq = NULL;
        a->hder = NULL;
    }
    else{
        cargarParentesisHizq(a->hizq);
    }
}
    
void cargarParentesisHder(AbbExp &a){
    if(a==NULL){
        a = new nodo;
        cargarParentesis(')', a->TiNod);
        a->hizq = NULL;
        a->hder = NULL;
    }
    else{
        cargarParentesisHder(a->hder);
    }
}
void consCompoun(AbbExp a, AbbExp b, char c,AbbExp &e){
    e= new nodo;
    
    cargarOperado(c, e->TiNod);
    e->hizq=a;
    e->hder=b;
    //cargarParentesisAbb(e);
    
}


void consCompounNot(AbbExp a, char c,AbbExp &e){
        e= new nodo;
        cargarOperado(c, e->TiNod);
        e->hizq=NULL;
        e->hder=a;
       
    }


void copiarAbb(AbbExp &a,AbbExp b){
        if (b == NULL) {
            a = NULL;
        } else {
            a = new nodo;
            a->TiNod = b->TiNod;
            copiarAbb(a->hizq, b->hizq);
            copiarAbb(a->hder, b->hder);
        }
    }

boolean evaluateAbbs(AbbExp a){
    
    if (darTipoExp(darDiscriminante((a->TiNod))) == VALOR) {
        return devuelveBoolean(a->TiNod);
    } else{
        if (darTipoExp(darDiscriminante((a->TiNod))) == OPERADOR)
            switch (darOperador(a->TiNod)) {
                case 'a':
                    return (boolean)(evaluateAbbs(a->hizq)&&evaluateAbbs(a->hder));
                    break;
                case 'o':
                    return (boolean)(evaluateAbbs(a->hizq)||evaluateAbbs(a->hder));
                    break;
                    
                case 'n':
                    return (boolean)(!evaluateAbbs(a->hder));
                    break;
                
            }
        
    }
    return TRUE;
}


void enumerarNodosEnOrden(AbbExp &a, int &contador) {
    if (a != NULL) {
        enumerarNodosEnOrden(a->hizq, contador);// Recorrer el subárbol izquierdo
        contador++;
        cargarNumero(a->TiNod, contador);     // Asignar el número id al nodo actual
        enumerarNodosEnOrden(a->hder, contador); // Recorrer el subárbol derecho
    }
}

 
tipoNodo darNodo(AbbExp a){
    return a->TiNod;
}
 
 
//el arbol tiene que estar vacio
void instertarNodo(AbbExp &a,tipoNodo p){ 
    a = new nodo;
    a -> TiNod= p;
    a -> hizq = NULL;
    a -> hder = NULL;
}

void crearAbb(AbbExp &a){
    a=NULL;
}

void bajarArbol(AbbExp  a,FILE * f){
    if(a!=NULL){
        bajarNodo(a->TiNod,f);
        bajarArbol(a->hizq,f);
        bajarArbol(a->hder,f);
    }

}


void insertarAbb(AbbExp &a,tipoNodo b){
    if (a == NULL)
    {
        a = new nodo;
        a -> TiNod = b;
        a -> hizq = NULL;
        a -> hder = NULL;
    }
    else
    {
        if (darNumero(a->TiNod) > darNumero(b))
            insertarAbb(a -> hizq, b);
        else
            insertarAbb(a -> hder, b);
    }
}

//crear una funcion para el prinicpio de este procedimiento que comrpuebe si esta vacio o no
void save(string nombreArchivo,AbbExp a){
    int contador=0;
    FILE *f=fopen (nombreArchivo,"wb");
    enumerarNodosEnOrden(a,contador);
    bajarArbol(a, f);
    fclose(f);
}

void SaveArbol (AbbExp a,string nombreArchivo){
    if (existenombrearchivo (nombreArchivo)){
        char c;
        printf("El archivo ya existe. Desea sobreescribirlo? \n Ingrese (S)i o (N)o: ");
        scanf("%c", &c);
        if (c == 's' || c == 'S') {
            
            save(nombreArchivo,a);
            printf("El Archivo se Sobreescribio");
        }else
            printf("\nEl Archivo no se guardo\n");
            
    }else{
        save(nombreArchivo,a);
        printf("Se guardo correctamente");
    }
}


void levantarArbol(AbbExp &a,FILE * f){
    tipoNodo b;
    levantarNodo(b, f);
    while(!feof(f)){
        insertarAbb(a, b);
       levantarNodo(b, f);
    }
    
}
    

