#ifndef DIFFERENCE_OPERATION_H
#define DIFFERENCE_OPERATION_H

#include<iostream>
#include "AbstractMathematicalOperation.h"
using namespace std;

//operation class responsible for difference calculation
class DifferenceOperation: public AbstractMathematicalOperation{
    public:
        //constructor
        DifferenceOperation(float firstNumber,float secondNumber);

        //method used to calculate the result
        string Proceed() override;
};

#endif