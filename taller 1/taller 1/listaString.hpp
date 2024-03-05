#ifndef listaString_hpp
#define listaString_hpp
#include "stringDinamico.hpp"

typedef struct NodoL {
    int num;
    string info;
    NodoL *sig;
} Nodo;

typedef Nodo * listaString;

void Crear(listaString &l);// Función para crear una lista enlazada vacía
void MostrarLista(listaString l);// Función para mostrar los elementos de la lista enlazada
void crearLista(listaString &l);// Función para crear una lista enlazada vacía
void insback(string s, listaString &l);// Función para insertar una cadena al final de la lista enlazada
void partirString(string s, listaString &l);// Función para dividir una cadena en palabras y agregar cada palabra a la lista enlazada
void cargarPalabras(listaString &l);// Función para cargar palabras en la lista enlazada
int conversorcai(string s);// Función para convertir un string en su valor ASCII
void mostrarlistastring(listaString l);// Función para mostrar los elementos de una lista de cadenas
char devuelveComando(listaString l, listaString n);// Función para devolver un comando de la lista enlazada
void darString(listaString l, int i, string &s); // Función para obtener el string en la posición 'i' de la lista 'l' y almacenarlo en 's'
void borrarLista(listaString &L); // Función para eliminar todos los elementos de la lista 'L'
int LargoRecu(listaString L); // Función para calcular recursivamente el largo de la lista 'L'
boolean ExisteComando(listaString a, string b); // Función para verificar si el string 'b' existe en la lista 'a' (devuelve un valor booleano)

#endif /* listaString_hpp */
