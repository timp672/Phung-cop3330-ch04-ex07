/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tim Phung
 */
#include "std_lib_facilities.h"

using namespace std;

vector<string> spelledDigit = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<string> digit{"0","1", "2", "3", "4", "5", "6", "7", "8", "9"};

int convertString(string value){
    for(int i = 0; i < 10; ++i){
        if( value == spelledDigit[i] || value == digit[i])
            return i;
    }
    throw runtime_error("Error: Input single digits 0-9");
}

int main()
{
    char operation;
    string strVal1, strVal2;
    double val1, val2, result;
    cout << "Enter two single digits and the operator character separated by a space: ";

    while(cin >> strVal1 >> strVal2 >> operation)
    {
        val1 = convertString(strVal1);
        val2 = convertString(strVal2);

        string operStr;
        switch(operation){
        case '+':
            operStr = "sum of ";
            result = val1 + val2;
            break;
        case '-':
            operStr = "difference of ";
            result = val1 - val2;
            break;
        case '*':
            operStr = "product of ";
            result = val1 * val2;
            break;
        case '/':
            operStr = "division of ";
            result = val1 / val2;
            break;
        }
        cout << "The " << operStr << val1 << " and " << val2 << " is " << result << endl;
        cout << "Enter two single digits and the operator character separated by a space: ";
    }

    return 0;
}
