//
//  listaString.cpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#include "listaString.hpp"

void insback (string separado, listaString &l){
    listaString aux=l;
    if(l==NULL){
        l=new Nodo;
        strcop(separado,l->info);
        l->sig=NULL;
    }else{
        
        while(aux->sig!=NULL){
            aux=aux->sig;
        }
        aux->sig=new Nodo;
        aux=aux->sig;
        strcop (separado, aux->info);
        aux->sig=NULL;
        
    }
}




void partirstring(string s, listaString &l){
    string sb,separado,resto;
        strcrear (sb);
        strcrear (separado);
        strcrear (resto);
    if (esVacio(s)==FALSE){
        do {
               eliminarBlancosPrincipio(s, sb);
                dividirString(sb , separado, resto);
                insback(separado, l);
                s = resto;
        }while(esVacio(resto)==FALSE);
                
        
    }
}

    
void cargarPalabras(listaString &l){
    string a,c,e,s,L,m;
    strcrear(a);
    strcrear(m);
    strcrear(c);
    strcrear(e);
    strcrear(s);
    strcrear(L);
    a[0]='a';
    a[1]='t';
    a[2]='o';
    a[3]='m';
    a[4]='i';
    a[5]='c';
    a[6]='\0';
    insback(a,l);
    
    c[0]='c';
    c[1]='o';
    c[2]='m';
    c[3]='p';
    c[4]='o';
    c[5]='u';
    c[6]='n';
    c[7]='d';
    a[8]='\0';
    insback(c,l);
    
    e[0]='e';
    e[1]='v';
    e[2]='a';
    e[3]='l';
    e[4]='u';
    e[5]='a';
    e[6]='t';
    e[7]='e';
    e[8]='\0';
    insback(e, l);
    
    s[0]='s';
    s[1]='a';
    s[2]='v';
    s[3]='e';
    s[4]='\0';
    insback(s, l);
    
    L[0]='l';
    L[1]='o';
    L[2]='a';
    L[3]='d';
    L[4]='\0';
    insback(L, l);
    
    m[0]='e';
    m[1]='x';
    m[2]='i';
    m[3]='t';
    insback(m, l);
    
}
int conversorcai (char c){
    int i;
    i = c - '0';
    return i;
}
