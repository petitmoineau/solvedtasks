#include <iostream>
#include <string>
#include "littlecalc.h"

using namespace std;

int twoNumbersOperation(int operationSymbol)
{
    double x, y; 
    cout << "Enter two numbers you want to work with at this stage:";
    cin >> x >> y;
    switch (operationSymbol)
    {
    case 1:
        return x + y;
    case 2:
        return x - y;
    case 3:
        return x * y;
    case 4:
        return x / y;
    }
}

int numberOperation(int operationSymbol, double* globalArray, int lol)
{
    while (true)
    {
        string maybeYes;
        cout << "Enter next number: ";
        cin >> maybeYes;
        double x;
        size_t* idx = new size_t(1);
   
        if (maybeYes[0] == '$')
        {
            maybeYes[0] = '0';
            x = stod(maybeYes, idx);
            if (x <= lol)
            {
                x = globalArray[(int)x];
            }
            else
            {
                cout << "Something went wrong, lets do it again";
                continue;
            }
        }
        else
        {
            x = stod(maybeYes);
        }
        switch (operationSymbol)
        {
        case 1:
            return globalArray[lol - 1] + x;
        case 2:
            return globalArray[lol - 1] - x;
        case 3:
            return globalArray[lol - 1] * x;
        case 4:
            return globalArray[lol - 1] / x;
        }
    }
}