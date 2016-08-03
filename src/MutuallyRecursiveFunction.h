// ****************************** ExtendedCsmith ****************************** >>
//
//  MutuallyRecursiveFunction.h
//  extended-csmith
//
//  Created by eitan mashiah on 3.8.2016.
//  Copyright © 2016 eitan mashiah. All rights reserved.
//

#ifndef MutuallyRecursiveFunction_h
#define MutuallyRecursiveFunction_h

#include "Function.h"

class MutuallyRecursiveFunction: public Function
{
public:
    MutuallyRecursiveFunction(const std::string &name, const Type *return_type);
    
    // Returns whether this function is the first one in its recursive call cycle
    bool is_first() { return !prev_function; }

private:
    // the previous function in the corresponding recursive call cycle
    MutuallyRecursiveFunction* prev_function;
};

#endif /* MutuallyRecursiveFunction_h */
// **************************************************************************** <<
