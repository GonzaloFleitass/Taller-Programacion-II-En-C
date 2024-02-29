//
//  main.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//



#include "comandos.hpp"
#include "listaDeExpresiones.hpp"
#include "listaString.hpp"
int main() {
    
    
    string s,sb,separado,resto;
    string comando;
    listaString l;
    Crear(l);
    boolean a=TRUE;
    boolean c=FALSE;
    int n=2,z=1;
    char w='a',v='n';
    Lista b;
    crearListaExp(b);
    atomic(a, b);
    atomic(c,b);
    
    compoundOrAnd(b,n,z,w);
    // show(b,3);
    compoundNot (b,  n,  v);
    mostrarListaDeExp(b);
    
    
    // show(b,4);
    
    
    
    int salirprograma = 0;
    
    printf (" BOOLEAN CREATOR PRO ");
    
    
    printf(" - atomic: crea una nueva expresión booleana atómica (false o true) \n - compound: crea una nueva expresión booleana compuesta (contiene al menos un operador) \n - show: despliega por pantalla una expresión booleana previamente creada \n - evaluate: evalúa una expresión booleana, indicando si es verdadera o falsa \n - save: guarda en archivo una expresión booleana previamente creada  - load: recupera a memoria una expresión booleana previamente guardada en archivo  - exit: sale de la aplicación");
    
    listaString comandoBoolean,palabrasClaves;
    cargarPalabras(palabrasClaves);
    strcrear(comando);
    printf("Ingrese Comando:");
    scan(comando);
    Lista listaDeExpresion;
    partirString(comando, comandoBoolean);
    crearListaExp(listaDeExpresion);
    
    
    
    do {
        switch(devuelveComando(comandoBoolean,palabrasClaves)){
            a:  boolean c;
                string t,f;
                cargarTRUE(t);
                cargarFalse(f);
                if( streq(darString (l),t)==TRUE){
                    c=TRUE;
                    
                    //  cargar el boolean en lista//
                }else{
                    if(streq(darString(l),f)==TRUE){
                        
                        c=FALSE;
                        //cargar boolean en lista en caso de q sea false el boolean//
                    }else{
                        printf("Expresion Invalida");
                    }
                    break;
                    
                    
                    c :
                    
                    
                    
                    
                    break;
                    
                e:
                    break;
                    
                s:
                    break;
                    
                l:
                    break;
                ex:     printf("Saliendo del programa...\n");
                    
                    
                    break;
                    
                default:
                    printf("Comando no reconocido.");
                    break;
                    
                }
        }
        }while ( salirprograma != 0);
        
        
        return 0;
    }
    

