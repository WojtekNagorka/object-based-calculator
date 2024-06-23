#ifndef MULTIPLICATION_OPERATION_H
#define MULTIPLICATION_OPERATION_H

#include<iostream>
#include "AbstractMathematicalOperation.h"
using namespace std;

//operation class responsible for multiplication calculation
class MultiplicationOperation: public AbstractMathematicalOperation{
    public:
        //constructor
        MultiplicationOperation(float firstNumber,float secondNumber);

        //method used to calculate the result
        string Proceed() override;
};

#endif