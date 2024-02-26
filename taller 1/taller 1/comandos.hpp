//
//  comandos.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 26/2/24.
//

#ifndef comandos_hpp
#define comandos_hpp

#include "listaString.hpp"
#include "listaDeExpresiones.hpp"
void atomic(boolean a, Lista &b);
void show (Lista l, int i);
void compoundOrAnd (Lista &l, int i, int a, char c); 
void compoundNot (Lista &l, int i, char c); 
void evaluate(); 
void save(); 
void load(); 
void exit (int &i);
#endif /* comandos_hpp */
