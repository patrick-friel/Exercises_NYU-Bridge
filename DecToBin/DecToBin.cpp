#include <iostream>
#include <string>
using namespace std;

int main()
{
    int input;
    string output;
    int i = 0;

    cout << "Please enter a number: ";
    cin >> input;

    while (input != 0)
    {
        int temp = input % 2;
        output = to_string(temp) + output;
        input = input / 2;
    }

    cout << output;
}
