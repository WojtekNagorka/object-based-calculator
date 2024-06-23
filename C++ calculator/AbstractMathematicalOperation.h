#ifndef ABSTRACT_MATHEMATICAL_OPERATION_H
#define ABSTRACT_MATHEMATICAL_OPERATION_H
#include<iostream>
using namespace std;

class AbstractMathematicalOperation{
    protected:
        string moperationName;
        string moperationResult;
        float mfirstNumber;
        float msecondNumber;
    public:
        //constructor
        AbstractMathematicalOperation(string operationName,float firstNumber,float secondNumber);

        //virtual method
        virtual string Proceed()=0;

        //getter for operationName
        string getClassName();
};
#endif