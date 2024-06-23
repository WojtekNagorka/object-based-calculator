#include <iostream>
#include <string>
#include "AdditionOperation.h"
#include "AbstractMathematicalOperation.h"
using namespace std;

//constructor
AdditionOperation::AdditionOperation(float firstNumber,float secondNumber) 
    : AbstractMathematicalOperation("Addition",firstNumber,secondNumber){}


//calculate the result of addition operation
string AdditionOperation::Proceed(){
    float operationResult=mfirstNumber+msecondNumber;
    moperationResult=to_string(operationResult);
    return moperationResult;
}

