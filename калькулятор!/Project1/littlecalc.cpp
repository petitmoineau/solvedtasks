#include <iostream>
#include "littlecalc.h"
#include <string>

using namespace std;

int main() //программа выполняется после команды make
{
    int i = 0;
    int numberOfOperations;
    double resultArray[10];
    double operationResult = 0;
    cout << "Hello! Indicate how many consecutive operations you will perform: ";
    cin >> numberOfOperations;
    operationResult = twoNumbersOperation(whichOperation());
    cout << operationResult << "\n\n";
    resultArray[0] = operationResult;

    for (i = 1; i < numberOfOperations; i++)
    {
        operationResult = numberOperation(whichOperation(), resultArray, i);
        cout << operationResult << "\n\n";
        resultArray[i] = operationResult;
    }
    cout << "Thank you for testing my calculator. I hope it was a great pleasure for you :)\n";
    return 0;
}