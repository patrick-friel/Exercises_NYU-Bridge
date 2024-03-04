#include <iostream>
using namespace std;

int main() {
	char input;
	

	cout << "Please enter a lower case letter: ";
	cin >> input;

	char output = input - 32;

	cout << "\n" << output << endl;

}