#include "stringDinamico.hpp"
void strcrear (string &s){
    s = new char [1];
    s[0]='\0';
}

void strdestruir (string &s){
    delete []s;
    s=NULL;
}

int strlar (string s){
    int i=0;
    while (s[i] != '\0')
        i++;
    return i;
}

void print (string s){
    int i=0;
    while(s[i]!= '\0'){
        printf("%c", s[i]);
        i++;
    }
}

void strcop(string s, string &b){
    delete[]b;
    b=new char[strlar(s)+1];
    int i=0;
    while(s[i]!='\0'){
        b[i]=s[i];
        i++;
    }
    b[i]='\0';
}

void scan(string &s){
    string aux= new char[MAX];
    int i=0;
    char c;
    scanf ("%c", &c);
    while ((c!='\n')&& (i<MAX-1)){
        aux[i]=c;
        i++;
        scanf("%c",&c);
    }
    aux[i]='\0';
    strcop(aux,s);
    strdestruir(aux);
}


boolean streq(string s1, string s2) {
    int i = 0;
    boolean iguales = TRUE;

    while (iguales && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            iguales = FALSE;
        }
        i++;
    }

    // Si alguna cadena todavía tiene elementos, no son iguales
    if (s1[i] != '\0' || s2[i] != '\0') {
        iguales = FALSE;
    }

    return iguales;
}


boolean esVacio (string s){
    if (s[0]=='\0'){
        return TRUE;
    }else
        return FALSE;
}

void eliminarBlancosPrincipio(string s, string &sb){
    if (esVacio(s)==FALSE){
        int i=0;
        while(s[i]==' '){
            i++;
        }
        delete[]sb;
        sb=new char[strlar(s)-i+1]; //strlar cuenta el largo y le descuento la cantidad de espacios
        int j=0;
        while(s[i]!='\0'){
            sb[j]=s[i];
            j++;
            i++;
        }
        sb[j]='\0';
    }
}


void dividirString(string s, string &separado, string &resto){
    if (esVacio(s)==FALSE){
        int i=0;
        
        //cuento el largo de la primer palabra
        while(s[i]!=' '&&s[i]!='\0'){
            i++;
        }
        
        //libero memoria anterior y reservo para tama;o de primer palabra
        delete[]separado;
        separado=new char[i+1];
    }
    //copio primer palabra a separado
    int i=0;
    while(s[i]!=' '&&s[i]!='\0'){
        separado[i]=s[i];
        i++;
    }
    separado[i]='\0';
    
    //libero memoria anterior y reservo para tama;o de resto
    delete[]resto;
    resto=new char[strlar(s)-i];
    int b=0;
    while(s[i]!='\0'){
        resto[b]=s[i];
        i++;
        b++;
        resto[b]='\0';
    }
}



int devolverTipoUnion(string s){
    int num;
    if(s[0]=='t'){
        num=0;
    }else{
        if(s[0]=='f'){
            num=  1;
        }else {
            if(s[0]=='a'){
                num=2;
            }else{
                if(s[0]=='o'){
                    num=3;
                }
                else
                    num=4;
                
            }
        }
    }
    return num;
}
void cargarTrue(string &truE){
   
    strcrear(truE);
    
    truE[0]='t';
    truE[1]='r';
    truE[2]='u';
    truE[3]='e';
    truE[4]='\0';
}
void cargarFalse(string &l){
    strcrear(l);

    l[0]='f';
    l[1]='a';
    l[2]='l';
    l[3]='s';
    l[4]='e';
    l[5]='\0';
}

char darPrimerLetra(string l) {
    char letra = l[0];

    // Verifica si la primera letra es 'e' y la siguiente es 'x'
    if (letra == 'e' && l[1] == 'x') {
        letra = 'x';
    } else if (letra == 's' && l[1] == 'h') {
        // Verifica si la primera letra es 's' y la siguiente es 'h'
        letra = 'h';
    }

    return letra;
}
boolean verificar(string s) {
    boolean ok = FALSE;
    int largo = strlar(s);

    if (largo >= 5) {
        if (s[largo - 1] == 't' && s[largo - 2] == 'a' && s[largo - 3] == 'd' && s[largo - 4] == '.') {
            ok = TRUE;
        }
    } else {
        ok = FALSE;
    }

    return ok;
}
boolean existenombrearchivo (string nombre){
    boolean b = FALSE;

    FILE * f = fopen (nombre, "rb");
    if (f != NULL){
        b = TRUE;
    }
    fclose(f);

    return b;
    }
