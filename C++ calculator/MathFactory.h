#ifndef MATH_FACTORY_H
#define MATH_FACTORY_H
#include "AbstractMathematicalOperation.h"
#include <iostream>
using namespace std;

/*
A factory that creates instances of operations:
    -addition
    -difference
    -multiplication
    -division
*/
class MathFactory{
    public:
        //create an operation
        AbstractMathematicalOperation* createOperation(float firstNumber,float secondNumber,char operation);
};

#endif