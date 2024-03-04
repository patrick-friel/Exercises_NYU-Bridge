// BridgeScratch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    /*int input;
    cout << "Please enter a positive integer: ";
    cin >> input;

    for (int i = 1; i <= input; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }

        for (int j = (i - 1) * 2; j < input * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }*/

    int input = 30;

    for (int i = 1; i < input; i++)
    {
        int temp = i / 10;

        if (i % 2 == 0)
        {
	        if (temp == 0 || temp % 2 == 0)
	        {
                cout << i << " ";
	        }
        }
    }

}

