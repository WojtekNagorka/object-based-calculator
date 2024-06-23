#include "AbstractMathematicalOperation.h"
#include "AdditionOperation.h"
#include "DifferenceOperation.h"
#include "MultiplicationOperation.h"
#include "DivisionOperation.h"
#include "MathFactory.h"
#include <iostream>
using namespace std;

//method used to create an operation of a given type
AbstractMathematicalOperation* MathFactory::createOperation(float firstNumber,float secondNumber,char operation){
    switch (operation){
    case '+':
        //create addition operation
        return new AdditionOperation(firstNumber,secondNumber);
        break;
    case '-':
        //create difference operation
        return new DifferenceOperation(firstNumber,secondNumber);
        break;
    case '*':
        //create multiplication operation
        return new MultiplicationOperation(firstNumber,secondNumber);
        break;
    case '/':
        //create division operation
        return new DivisionOperation(firstNumber,secondNumber);
        break;
    default:
        //handle invalid operation
        cout<<"invalid operation"<<endl;
        break;
    }
}