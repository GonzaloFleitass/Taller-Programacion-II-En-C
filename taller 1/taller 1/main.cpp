#include "comandos.hpp"
#include "listaDeExpresiones.hpp"
#include "listaString.hpp"

int main(){
    string s,sb,separado,resto;

      string comando;

      listaString l;

      Crear(l);

      boolean a=TRUE;

      boolean c=FALSE;

      Lista b;

      crearListaExp(b);

      mostrarListaDeExp(b);

      int salirprograma = 0;
    printf (" BOOLEAN CREATOR PRO ");
    printf(" - atomic: crea una nueva expresión booleana atómica (false o true) \n - compound: crea una nueva expresión booleana compuesta (contiene al menos un operador) \n - show: despliega por pantalla una expresión booleana previamente creada \n - evaluate: evalúa una expresión booleana, indicando si es verdadera o falsa \n - save: guarda en archivo una expresión booleana previamente creada  - load: recupera a memoria una expresión booleana previamente guardada en archivo  - exit: sale de la aplicación");

    listaString comandoBoolean,palabrasClaves;
    crearLista(palabrasClaves);
    crearLista(comandoBoolean);
    cargarPalabras(palabrasClaves);
    strcrear(comando);
    printf("Ingrese Comando:");
    scan(comando);
    Lista listaDeExpresion;
    partirString(comando, comandoBoolean);
    crearListaExp(listaDeExpresion);

    
    
    do {
        switch(devuelveComando(comandoBoolean,palabrasClaves)){
                case 'a':
                printf("hola");
                boolean c;
                string t,f;
                cargarTrue(t);
                cargarFalse(f);
                if( streq(darString (comandoBoolean),t)==TRUE){
                    c=TRUE;
                    
                    //  cargar el boolean en lista//
                }else{
                    if(streq(darString(comandoBoolean),f)==TRUE){
                        
                        c=FALSE;
                        //cargar boolean en lista en caso de q sea false el boolean//
                    }else{
                        printf("Expresion Invalida");
                    }
                    break;
                    
                case 'c':
                    break;
                    
                case 'e':
                    break;
                    
                case 'h':
                    break;
                    
                case 's':
                    break;
                
                case 'l':
                    break;
                    
                case 'x':
                    printf("Saliendo del programa...\n");
                    
                    
                    break;
                    
                default:
                    printf("Comando no reconocido.");
                    break;
                    
                }
        }
        }while ( salirprograma != 0);
        
        
        return 0;
    }


