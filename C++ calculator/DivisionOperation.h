#ifndef DIVISION_OPERATION_H
#define DIVISION_OPERATION_H

#include<iostream>
#include "AbstractMathematicalOperation.h"
using namespace std;

//operation class responsible for division calculation
class DivisionOperation: public AbstractMathematicalOperation{
    public:
        //constructor
        DivisionOperation(float firstNumber,float secondNumber);

        //method used to calculate the result
        string Proceed() override;
};

#endif