#include "AbstractMathematicalOperation.h"

//constructor
AbstractMathematicalOperation::AbstractMathematicalOperation(string operationName,float firstNumber,float secondNumber)
    : moperationName(operationName),mfirstNumber(firstNumber),msecondNumber(secondNumber) {}

//getter for operationName
string AbstractMathematicalOperation::getClassName() {
    return moperationName;
}