#include "comandos.hpp"
#include "listaDeExpresiones.hpp"
#include "listaString.hpp"
#include "comandos.hpp"
int main(){
    string comando,copia;
    
    listaString l;
    
    Crear(l);
    
    
    
    Lista b;
    
    crearListaExp(b);
    
    mostrarListaDeExp(b);
    
    int salirprograma = 1;
    printf("+--------------------------------------------------------------------+\n");
    printf("|                       BOOLEAN CREATOR PRO                          |\n");
    printf("+--------------------------------------------------------------------+\n");
    printf("| - atomic: crea una nueva expresión booleana (false o true)         |\n");
    printf("| - compound: crea una nueva expresión booleana compuesta            |\n");
    printf("|             (contiene al menos un operador)                        |\n");
    printf("| - show: despliega por pantalla una expresión booleana previamente  |\n");
    printf("|         creada                                                     |\n");
    printf("| - evaluate: evalúa una expresión booleana, indicando si es         |\n");
    printf("|             verdadera o falsa                                      |\n");
    printf("| - save: guarda en archivo una expresión booleana previamente       |\n");
    printf("|         creada                                                     |\n");
    printf("| - load: recupera a memoria una expresión booleana previamente      |\n");
    printf("|         guardada en archivo                                        |\n");
    printf("| - exit: sale de la aplicación                                      |\n");
    printf("+--------------------------------------------------------------------+\n");
    
    listaString comandoBoolean,palabrasClaves;
    crearLista(palabrasClaves);
    crearLista(comandoBoolean);
    cargarPalabras(palabrasClaves);
    strcrear(comando);
    
    Lista listaDeExpresion;
    
    crearListaExp(listaDeExpresion);
    
    
    
    do {
        printf("\nIngrese Comando:");
        scan(comando);
        partirString(comando, comandoBoolean);
        string copi;
        strcrear(copi);
        darString(comandoBoolean, 0, copi);
        boolean a=  ExisteComando(palabrasClaves,copi );
        if(a==TRUE){
            switch(devuelveComando(comandoBoolean, palabrasClaves)){
                case 'a':
                    if(LargoRecu(comandoBoolean)<2){
                        printf("Error, no puso boolean");
                    }else{
                        boolean c;
                        string t,f;
                        cargarTrue(t);
                        cargarFalse(f);
                        string boole;
                        darString(comandoBoolean, 1, boole);
                        if( streq(boole,t)==TRUE){
                            c=TRUE;
                            atomic(c,listaDeExpresion);
                            printf("\n Expresion creada");
                            
                            
                            
                        }else{
                            if(streq(boole,f)==TRUE){
                                c=FALSE;
                                atomic(c,listaDeExpresion);
                                printf("\n Expresion creada");
                                
                            }else{
                                printf("Expresion Invalida");
                                
                            }
                        }
                        
                        break;
                        
                    case 'c':
                        if(LargoRecu(comandoBoolean)==3){
                            string Numero,operador;
                            strcrear(Numero);
                            strcrear(operador);
                            darString(comandoBoolean,2,Numero);
                            darString(comandoBoolean,1,operador);
                            int num=conversorcai(Numero);
                            char op=darPrimerLetra(operador);
                            compoundNot(listaDeExpresion, num, op);
                        }else{
                            if(LargoRecu(comandoBoolean)==4){
                                string Numero,Numero2,operador;
                                darString(comandoBoolean,1,Numero);
                                darString(comandoBoolean,3,Numero2);
                                darString(comandoBoolean,2,operador);
                                int num=conversorcai(Numero);
                                int num2=conversorcai(Numero2);
                                char op=darPrimerLetra(operador);
                                compoundOrAnd (listaDeExpresion, num,  num2, op);
                                
                            }
                        }
                        break;
                        
                    case 'e':if (LargoRecu(comandoBoolean) < 2) {
                        printf("Error, comando escrito incorrectamente");
                    } else {
                        string numero;
                        darString(comandoBoolean, 1, numero);
                        int num = conversorcai(numero);
                        if (existeEnList(listaDeExpresion, num)) {
                            evaluate(listaDeExpresion, num);
                        } else {
                            printf("No existe expresion en Lista");
                        }
                    }
                        break;
                        break;
                        
                    case 'h':if(LargoRecu(comandoBoolean)<2){
                        printf("Error, no puso Expresion");
                    }else{
                        string strNum;
                        darString(comandoBoolean,1,strNum);
                        int num=conversorcai(strNum);
                        if(existeEnList(listaDeExpresion,num)){
                            // show 46
                            show(listaDeExpresion, num);
                        }else{
                            printf("No existe expresion en Lista");
                        }
                    }
                        break;
                        
                    case 's':
                        if(LargoRecu(comandoBoolean)<2){
                            printf("Error, no puso Expresion");
                        }else{
                            string strNum;
                            darString(comandoBoolean,1,strNum);
                            int num=conversorcai(strNum);
                            //entra en el parsing, busca el numero que es un char, lo convierte en int y se lo da al existe en lista
                            if(existeEnList(listaDeExpresion,(num))){
                                string nombreArchivo;
                                darString(comandoBoolean, 2,nombreArchivo);
                                if(verificar(nombreArchivo)){
                                    SaveArbol(darexp(darExpresion(listaDeExpresion)),nombreArchivo);
                                    printf("Archivo Guardado Exiostosamente");
                                }else{
                                    printf("El archivo debe ser .dat, Por favor ingrese todo nuevamente");
                                }
                            }else{
                                printf("La expresion no existe en Lista");
                            }
                        }
                        
                        break;
                        
                    case 'l': if (LargoRecu(comandoBoolean) < 2) {
                            printf("Error, no se proporcionó el nombre del archivo\n");
                        } else {
                            AbbExp a;
                            string nombreArchivo;
                            darString(comandoBoolean, 2, nombreArchivo);
                            loadArbol(a, nombreArchivo);
                            printf("Archivo cargado correctamente...")
                        }
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
            }else{
                        printf("comando no existente");
                    }
    
            borrarLista(comandoBoolean);
            strdestruir(comando);
            strcrear(comando);
            strdestruir(copi);
            strcrear(copi);
        }while ( salirprograma != 0);
        
        
        return 0;
    }

