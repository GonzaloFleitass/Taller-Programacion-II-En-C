#include "comandos.hpp"
#include "listaDeExpresiones.hpp"
#include "listaString.hpp"

int main(){
      string comando,copia;

      listaString l;

      Crear(l);

      boolean a=TRUE;

      boolean c=FALSE;

      Lista b;

      crearListaExp(b);

      mostrarListaDeExp(b);

      int salirprograma = 1;
    printf (" BOOLEAN CREATOR PRO ");
    printf(" - atomic: crea una nueva expresión booleana atómica (false o true) \n - compound: crea una nueva expresión booleana compuesta (contiene al menos un operador) \n - show: despliega por pantalla una expresión booleana previamente creada \n - evaluate: evalúa una expresión booleana, indicando si es verdadera o falsa \n - save: guarda en archivo una expresión booleana previamente creada  - load: recupera a memoria una expresión booleana previamente guardada en archivo  - exit: sale de la aplicación");

    listaString comandoBoolean,palabrasClaves;
    crearLista(palabrasClaves);
    crearLista(comandoBoolean);
    cargarPalabras(palabrasClaves);
    strcrear(comando);
    
    Lista listaDeExpresion;
  
    crearListaExp(listaDeExpresion);

    
    
    do {
        printf("Ingrese Comando:");
        scan(comando);
        partirString(comando, comandoBoolean);
        
     
            switch(devuelveComando(comandoBoolean,palabrasClaves)){
                case 'a':
                    if(LargoRecu(comandoBoolean)<2){
                        printf("Error, no puso boolean");
                    }else{
                        boolean c;
                        string t,f;
                        cargarTrue(t);
                        cargarFalse(f);
                        if( streq(darString(comandoBoolean,1),t)==TRUE){
                            c=TRUE;
                            atomic(c,listaDeExpresion);
                            printf("\n Expresion creada");
                            
                        }else{
                            if(streq(darString(comandoBoolean,1),f)==TRUE){
                                c=FALSE;
                                atomic(c,listaDeExpresion);
                                printf("\n Expresion creada");
                                
                            }else{
                                printf("Expresion Invalida");
                                
                            }
                        }
                    
                        break;
                        
                    case 'c':
                        
                        break;
                        
                    case 'e':
                        break;
                        
                    case 'h':if(LargoRecu(comandoBoolean)<2){
                        printf("Error, no puso Expresion");
                            }else{
                            if(existeEnList(listaDeExpresion,conversorcai(darPrimerLetra(darString(comandoBoolean,1))))){
                                show(listaDeExpresion, conversorcai(darPrimerLetra(darString(comandoBoolean,1))));
                            }else{
                                printf("No existe expresion en Lista");
                            }
                        }
                        break;
                        
                    case 's':
                        if(LargoRecu(comandoBoolean)<2){
                            printf("Error, no puso Expresion");
                        }else{
                            //entra en el parsing, busca el numero que es un char, lo convierte en int y se lo da al existe en lista
                            if(existeEnList(listaDeExpresion,conversorcai(darPrimerLetra(darString(comandoBoolean,1))))){
                                if(verificar(darString(comandoBoolean, 2))){
                                    SaveArbol(darexp(darExpresion(listaDeExpresion)),darString(comandoBoolean, 2));
                                }else{
                                    printf("El archivo debe ser .dat, Por favor ingrese todo nuevamente");
                                }
                            }
                        }
                        
                        break;
                        
                    case 'l':
                        break;
                        
                    case 'x':
                        exit(salirprograma);
                        printf("Saliendo del programa...\n");
                        
                        
                        break;
                        
                    default:
                        printf("Comando no reconocido.");
                        break;
                        
                    }
            }
        borrarLista(comandoBoolean);
        strdestruir(comando);
        strcrear(comando);
        }while ( salirprograma != 0);
        

        return 0;
    }

