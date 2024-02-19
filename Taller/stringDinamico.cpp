//
//  stringDinamico.cpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
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
        sb=new char[strlar(s)+1];
        while(s[i]!='\0'){
            sb[i]=s[i];
            i++;
        }
        sb[i]='\0';
    }
}


void dividirString (string s, string &separado, string &resto){
    if (esVacio(s)==FALSE){
        int i=0;
        while(s[i]!=' '||s[i]!='\0'){
            i++;
        }
        delete[]separado;
        separado=new char[i+1];
    }
    int i=0;
    while(s[i]!=' '||s[i]!='\0'){
        separado[i]=s[i];
        i++;
    }
    separado[i]='\0';
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


