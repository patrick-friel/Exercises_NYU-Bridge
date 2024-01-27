#include <iostream>
using namespace std;

int main() {

    int pocket;
    cout << "Enter a number." << endl;
    cin >> pocket;

    if (pocket == 0)
    {
        cout << "The pocket is green.";
    }
    else if (pocket >= 1 && pocket <= 10) {
        if (pocket % 2 == 0)
        {
            cout << "The pocket is black.";
        }
        else
        {
            cout << "The pocket is red.";
        }
    }
    else if (pocket > 10 && pocket < 19)
    {
        if (pocket % 2 == 0)
        {
            cout << "The pocket is red.";
        }
        else
        {
            cout << "The pocket is black,";
        }
    }
    else if (pocket > 18 && pocket < 29)
    {
        if (pocket % 2 == 0)
        {
            cout << "The pocket is black.";
        }
        else
        {
            cout << "The pocket is red.";
        }
    }
    else if (pocket > 28 && pocket < 37)
    {
        if (pocket % 2 == 0)
        {
            cout << "The pocket is red.";
        }
        else
        {
            cout << "The pocket is black.";
        }
    }
    else
    {
        cout << "Error: You entered an invalid number.";
    }

    return 0;
}