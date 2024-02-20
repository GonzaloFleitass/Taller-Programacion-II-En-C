//
//  boolean.hpp
//  Taller
//
//  Created by Gonzalo Fleitas on 16/2/24.
//

#ifndef boolean_hpp
#define boolean_hpp

#include <stdio.h>
typedef enum {FALSE,TRUE}boolean;
boolean and (boolean a, boolean b);
boolean not (boolean a);
boolean or ( boolean a, boolean b);
#endif /* boolean_hpp */
