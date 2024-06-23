#include<iostream>
#include<string>
#include "MultiplicationOperation.h"
#include "AbstractMathematicalOperation.h"
using namespace std;

//constructor
MultiplicationOperation::MultiplicationOperation(float firstNumber,float secondNumber) 
    : AbstractMathematicalOperation("Multiplication",firstNumber,secondNumber){}


//calculate the result of multiplication operation
string MultiplicationOperation::Proceed(){
    float operationResult=mfirstNumber*msecondNumber;
    moperationResult=to_string(operationResult);
    return moperationResult;
}
