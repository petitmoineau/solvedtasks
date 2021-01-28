#include <iostream>
#include <string>
#include "littlecalc.h"

using namespace std;

int whichOperation()
{
    while (true)
    {
        string symbolStr;
        cout << "Which operation would you like to choose?\n";
        cout << "1.sum\n";
        cout << "2.subtraction\n";
        cout << "3.multiplication\n";
        cout << "4.division\n";
        cout << "Enter number of operation (1-4): ";
        cin >> symbolStr;
        if (symbolStr[0] <= '4' && symbolStr[0] >= '1' && symbolStr.length() == 1)
        {
            return stoi(symbolStr);
        }
        else
        {
            cout << "Here you`re able to enter numbers from 1 to 4. Ne tupite.\n\n";
            continue;
        }
    }
}