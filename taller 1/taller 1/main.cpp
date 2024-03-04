
#include "comandos.hpp"
int main(){
    string comando;
    listaString l;
    Crear(l);
    Lista b;
    crearListaExp(b);
    mostrarListaDeExp(b);
    int salirprograma = 1;
    listaString comandoBoolean,palabrasClaves;
    crearLista(palabrasClaves);
    crearLista(comandoBoolean);
    cargarPalabras(palabrasClaves);
    strcrear(comando);
    Lista listaDeExpresion;
    crearListaExp(listaDeExpresion);
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
    do {
        fflush(stdin);
        printf("------------------------------------------------------------------");
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
                    if(LargoRecu(comandoBoolean)!=2){
                        printf("\nError, Comando mal ingresado\n");
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
                            printf("\nExpresion creada\n");
                            
                            
                            
                        }else{
                            if(streq(boole,f)==TRUE){
                                c=FALSE;
                                atomic(c,listaDeExpresion);
                                printf("\nExpresion creada\n");
                                
                            }else{
                                printf("\nExpresion Invalida\n");
                                
                            }
                        }
                        
                        break;
                        
                    case 'c':
                        if (LargoRecu(comandoBoolean) == 3) {
                            string Numero, operador;
                            strcrear(Numero);
                            strcrear(operador);
                            darString(comandoBoolean, 2, Numero);
                            darString(comandoBoolean, 1, operador);

                            if (comparaOperadores(operador)) {
                                int num = conversorcai(Numero);

                                if (existeEnList(listaDeExpresion, num)) {
                                    char op = darPrimerLetra(operador);
                                    compoundNot(listaDeExpresion, num, op);
                                    printf("\nExpresion creada\n");
                                } else {
                                    printf("\nNo existe expresion en Lista\n");
                                }
                            }
                        } else {
                            if (LargoRecu(comandoBoolean) == 4) {
                                string Numero, Numero2, operador;
                                darString(comandoBoolean, 1, Numero);
                                darString(comandoBoolean, 3, Numero2);
                                darString(comandoBoolean, 2, operador);
                                string op;
                                strcrear(op);
                                strcop(operador, op);
                                
                                if (comparaOperadores(op)) {
                                    int num = conversorcai(Numero);
                                    int num2 = conversorcai(Numero2);
                                    
                                    if (existeEnList(listaDeExpresion, num) && existeEnList(listaDeExpresion, num2)) {
                                        darString(comandoBoolean, 2, operador);
                                        char op = darPrimerLetra(operador);
                                        compoundOrAnd(listaDeExpresion, num, num2, op);
                                        printf("\nExpresion creada\n");
                                    } else {
                                        printf("\nNo existe expresion en Lista\n");
                                    }
                                }
                                else {
                                    printf("\nOperador invalido\n");
                                }
                            } else {
                                printf("\nComando no valido\n");
                            }
                        }


                                break;
                                
                            case 'e':if (LargoRecu(comandoBoolean) != 2) {
                                printf("\nError, comando escrito incorrectamente\n");
                            } else {
                                string numero;
                                darString(comandoBoolean, 1, numero);
                                int num = conversorcai(numero);
                                if (existeEnList(listaDeExpresion, num)) {
                                    evaluate(listaDeExpresion, num);
                                } else {
                                    printf("\nNo existe expresion en Lista\n");
                                }
                            }
                                break;
                                break;
                                
                            case 'h':if(LargoRecu(comandoBoolean)!=2){
                                printf("\nError, no puso Expresion\n");
                            }else{
                                string strNum;
                                darString(comandoBoolean,1,strNum);
                                int num=conversorcai(strNum);
                                if(existeEnList(listaDeExpresion,num)){
                                    show(listaDeExpresion, num);
                                }else{
                                    printf("\nNo existe expresion en Lista\n");
                                }
                            }
                                break;
                                
                            case 's':
                                if(LargoRecu(comandoBoolean)!=3){
                                    printf("\nError, no puso comando correctamnete, debe poner 'save' 'numero de expresion' 'nombre de archivo'\n");
                                }else{
                                    string strNum;
                                    darString(comandoBoolean,1,strNum);
                                    int num=conversorcai(strNum);
                                    if(existeEnList(listaDeExpresion,(num))){
                                        string nombreArchivo;
                                        darString(comandoBoolean, 2,nombreArchivo);
                                        if(verificar(nombreArchivo)){
                                            SaveArbol(darexp(darExpresion(listaDeExpresion)),nombreArchivo);
                                            
                                        }else{
                                            printf("\nEl archivo debe ser .dat, Por favor ingrese todo nuevamente\n");
                                        }
                                    }else{
                                        printf("\nLa expresion no existe en Lista\n");
                                    }
                                }
                                
                                break;
                                
                            case 'l': if (LargoRecu(comandoBoolean) !=2) {
                                printf("\nError, no se proporcionó el nombre del archivo correctamente\n");
                            } else {
                                string archi;
                                darString(comandoBoolean, 1, archi);
                                if( existenombrearchivo (archi)){
                                    AbbExp a;
                                    string nombreArchivo;
                                    darString(comandoBoolean, 1, nombreArchivo);
                                    loadArbol(a,listaDeExpresion, nombreArchivo);
                                    printf("\nArchivo cargado correctamente...\n");
                                    
                                }
                                else{
                                    printf("\nNo existe archivo\n");
                                    
                                }}
                                break;
                            case 'x':
                                exit(salirprograma);
                                printf("\nSaliendo del programa\n");
                                
                                
                                break;
                                
                            default:
                                printf("\nComando no reconocido.\n");
                                break;
                            }
            }
            }else{
                        printf("\nComando no existente\n");
                    }
            borrarLista(comandoBoolean);
            strdestruir(comando);
            strcrear(comando);
            strdestruir(copi);
            strcrear(copi);
        }while ( salirprograma != 0);

    }


