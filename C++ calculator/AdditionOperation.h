#ifndef ADDITION_OPERATION_H
#define ADDITION_OPERATION_H

#include<iostream>
#include "AbstractMathematicalOperation.h"
using namespace std;

//operation class responsible for addition calculation
class AdditionOperation: public AbstractMathematicalOperation{
    public:
        //constructor
        AdditionOperation(float firstNumber,float secondNumber);

        //method used to calculate the result
        string Proceed() override;
};

#endif