#include <iostream>
using namespace std;

int ConvertTemp() {
    /*std::cout << "Hello, World!" << std::endl;*/
    double c;
    double f;

    cout << "Please enter the degrees in Celcius: " << endl;
    cin >> c;

    f = c * (9.0 / 5) + 32;

    cout << c << " in Fahrenheit is " << f << endl;

    return 0;
}