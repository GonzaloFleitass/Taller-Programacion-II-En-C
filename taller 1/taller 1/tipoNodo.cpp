#include "tipoNodo.hpp"

void cargarBol(boolean a,tipoNodo &b){
    b.discriminante=VALOR;
    b.datos.bol=a;
    }

void cargarOperado(char op, tipoNodo &b){
    b.discriminante=OPERADOR;
    b.datos.operador=op;
}


void cargarParentesis (char a, tipoNodo &b){
    b.discriminante=PARENTESIS;
    b.datos.parentesis=a;
    
}

void mostrarNodo(tipoNodo a){
    switch(a.discriminante){
   
        case VALOR:
            mostrarBool(a.datos.bol);
            break;
        case PARENTESIS:
            printf("%c",a.datos.parentesis);
            break;
        case OPERADOR:
            switch(a.datos.operador){
                case 'a':
                    printf(" AND ");
                    break;
                case 'o': printf(" OR ");
                    
                    break;
                case 'n': printf("NOT ");
                    break;
            }
            
            break;
    }
}
   

tipoExp darRaiz(tipoNodo a){
    return darTipoExp(a.discriminante);
    }
   
tipoExp darDiscriminante(tipoNodo a){
    return a.discriminante;
}

boolean devuelveBoolean (tipoNodo a){
    return a.datos.bol;
}

char darOperador (tipoNodo a){
    return a.datos.operador;
}

void cargarNumero(tipoNodo &a,int num){
    a.numero=num;
}
 
int darNumero(tipoNodo a){
    return a.numero;
}

void bajarNodo (tipoNodo a, FILE * f){
    fwrite(&a.numero,sizeof(int),1,f);
    fwrite(&a.discriminante,sizeof(tipoExp),1,f);
    
    switch(a.discriminante){
   
        case VALOR:
            fwrite(&a.datos.bol, sizeof(boolean),1,f);
            break;
        case PARENTESIS:
            fwrite(&a.datos.parentesis, sizeof(char),1,f);
            break;
        case OPERADOR:
            fwrite(&a.datos.operador, sizeof(char),1,f);
            break;
            }
    }



 void levantarNodo(tipoNodo &a,FILE *f){
    fread(&a.numero,sizeof(int),1,f);
    fread(&a.discriminante,sizeof(tipoExp),1,f);
    
    switch(a.discriminante){
   
        case VALOR:
            fread(&a.datos.bol, sizeof(boolean),1,f);
            break;
        case PARENTESIS:
            fread(&a.datos.parentesis, sizeof(char),1,f);
            break;
        case OPERADOR:
            fread(&a.datos.operador, sizeof(char),1,f);
            break;
            }
    }

