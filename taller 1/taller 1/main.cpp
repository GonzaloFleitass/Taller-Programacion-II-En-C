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
    
    /*
     string s,sb,separado,resto;
     
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
     // mostrarListaDeExp(b);
     compoundNot (b,  n,  v);
     mostrarBool(evaluateAbbs(darexp(ObtenerExpEnList(b,3))));
     
     
     
     // show(b,4);
     }
     
     */
    int salirprograma = 0;
    
    printf (" BOOLEAN CREATOR PRO ");
    printf(" - atomic: crea una nueva expresión booleana atómica (false o true) \n - compound: crea una nueva expresión booleana compuesta (contiene al menos un operador) \n - show: despliega por pantalla una expresión booleana previamente creada \n - evaluate: evalúa una expresión booleana, indicando si es verdadera o falsa \n - save: guarda en archivo una expresión booleana previamente creada  - load: recupera a memoria una expresión booleana previamente guardada en archivo  - exit: sale de la aplicación");
    string s;
    listaString l,n;
    crearLista(n);
    cargarPalabras(n);
    
    strcrear(s);
    crearLista(l);
    printf("\n");
    printf("Ingrese un comando");
    printf("\n");
    scan(s);
    printf("\n");
 
    partirString(s, l);
    mostrarlistastring(l);
    printf("%c",devuelveComando(l,n));
  
}
    /*
    switch(devuleveComando(l){
        a:  boolean c;
                string t,f;
                cargarTRUE(t);
                cargarFalse(f);
                if( streq(darString (l),t)==TRUE){
                    c=TRUE;
                    //  cargar el boolean en lista//
                }else{
                    c=FALSE;
                    //cargar boolean en lista en caso de q sea false el boolean//
                }
                break;
<<<<<<< HEAD

        c : 
            
         
                
         
                break;

        s:

        e:

        s:

        l:

        e:     printf("Saliendo del programa...\n");
                exit(&salirprograma);
         
             break;

        default:
                printf("Comando no reconocido.");
                break;
=======
>>>>>>> parent of 4a2c8a9 (Update main.cpp)
        }
    }
        

    
   // do {}

      //  while ( salirprograma != 0);

    
    return 0;
}

*/
