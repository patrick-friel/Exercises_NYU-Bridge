// BridgeScratch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int input;

    cout << "Please enter a positive integer: ";
    cin >> input;

    for (int i = 0; i < input; i+=2)
    {        
            for (int j = input; j > i; j--)
            {
                cout << "*";
            }        
        cout << endl;
    }
    cout << "*";
    for (int i = 0; i <= input; i+=2)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}

