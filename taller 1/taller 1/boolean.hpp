//
//  boolean.hpp
//  taller 1
//
//  Created by Gonzalo Fleitas on 23/2/24.
//

#ifndef boolean_hpp
#define boolean_hpp

#include <stdio.h>

typedef enum {FALSE,TRUE}boolean;
boolean andd (boolean a, boolean b);
boolean notd (boolean a);
boolean ord ( boolean a, boolean b);
void mostrarBool (boolean a);
#endif /* boolean_hpp */

