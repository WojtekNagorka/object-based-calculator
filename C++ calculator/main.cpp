#include <iostream>
#include <fstream>
#include <string>
#include "MathFactory.h"
#include "AbstractMathematicalOperation.h"
using namespace std;



int main(){
    //declare the input variables 
    float firstNumber,secondNumber;
    char operation;
    int operationCount;
    
    //create the factory
    MathFactory* mathFactory=new MathFactory();

    //provide the results file
    ofstream file("results.csv");

    //handling the input
    cout<<"How many operations would you like to perform?"<<endl;
    cin>>operationCount;
    cout<<endl;
    file<<"Operation;Result"<<endl;
    for(int i=0;i<operationCount;i++){
        cout<<"OPERATION NUMBER "<<to_string(i+1)<<endl<<endl;
        cout<<"Input the first number"<<endl;
        cin>>firstNumber;
        cout<<"Input the second number"<<endl;
        cin>>secondNumber;
        cout<<"Provide the operation (+,-,*,/)"<<endl;
        cin>>operation;
        AbstractMathematicalOperation* newOperation=mathFactory->createOperation(firstNumber,secondNumber,operation);
        file<<newOperation->getClassName()<<";"<<newOperation->Proceed()<<endl;
        delete newOperation;
        cout<<endl; 
    }
    file.close();
}