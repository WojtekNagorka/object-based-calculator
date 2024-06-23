#include<iostream>
#include<string>
#include "DifferenceOperation.h"
#include "AbstractMathematicalOperation.h"
using namespace std;

//constructor
DifferenceOperation::DifferenceOperation(float firstNumber,float secondNumber) 
    : AbstractMathematicalOperation("Difference",firstNumber,secondNumber){}


//calculate the result of difference operation
string DifferenceOperation::Proceed(){
    float operationResult=mfirstNumber-msecondNumber;
    moperationResult=to_string(operationResult);
    return moperationResult;
}
