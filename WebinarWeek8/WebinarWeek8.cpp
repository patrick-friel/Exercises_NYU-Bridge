#include <iostream>
using namespace std;

int main()
{
	int n;

	void palendrome(int n);

	cout << "Please enter a number: ";
	cin >> n;

	palendrome(n);

}

void palendrome(int n)
{
	int rev = 0;
	int temp = 0;
	int temp2 = n;
	int mult = 10;

	while (temp2 > 0)
	{
		temp = temp2 % 10;
		temp2 = temp2 / 10;
		rev = (rev * mult) + temp;
		
	}

	if (n == rev)
	{
		cout << "Palendrome number";
	}
	else
	{
		cout << "Not Palendrome number";
	}

}