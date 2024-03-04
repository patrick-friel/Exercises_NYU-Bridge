#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    string a = "11", b = "1", c;


    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '1')
        {
            sum += pow(2, 1);
        }
    }
    for (int i = 0; i < b.size(); i++)
    {

        if (b[i] == '1')
        {
            sum += pow(2, 0);
        }
    }

    cout << sum << endl;
    
    while (sum != 0)
    {
        int temp = sum % 2;
        c = to_string(temp) + c;
        sum = sum / 2;
    }

    cout << c << endl;

	/*int input;
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

    cout << output;*/
}
