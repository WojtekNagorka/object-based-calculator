#include<iostream>
#include<string>
#include "DivisionOperation.h"
#include "AbstractMathematicalOperation.h"
using namespace std;

//constructor
DivisionOperation::DivisionOperation(float firstNumber,float secondNumber) 
    : AbstractMathematicalOperation("Multiplication",firstNumber,secondNumber){}


//calculate the result of division operation, undefined if division by 0
string DivisionOperation::Proceed(){
    if(msecondNumber==0){
        moperationResult="undefined";
        return moperationResult;
    }
    float operationResult=mfirstNumber/msecondNumber;
    moperationResult=to_string(operationResult);
    return moperationResult;
}
