//
//  stringDinamico.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

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

void scan (string &s){
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


boolean streq (string s1, string s2)
{
    int i=0;
    boolean iguales = TRUE;
    while (iguales && (s1[i] != '\0') && (s2[i] != '\0')) {


        if (s1[i] != s2[i])
            iguales = FALSE;
        i++;
        if ((s1[i] != '\0') || (s2[i] != '\0'))
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


void dividirString (string s, string &separado, string &resto){
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
