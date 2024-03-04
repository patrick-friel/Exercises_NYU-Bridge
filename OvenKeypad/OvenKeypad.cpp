#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 1, 4, and 7 are broken. Compute the next highest and lowest temp.

	int input;
	string lower;
	string higher;
	//string output;
	int div = 100;

	cout << "Please enter a desired temp between 0 and 999: ";
	cin >> input;


	for (int i = 0; i < 3; i++)
	{
		int temp = input / div;
		if (temp == 1 || temp == 4 || temp == 7)
		{
			lower += to_string(temp - 1);
			higher += to_string(temp + 1);
		}
		else
		{
			lower += to_string(temp);
			higher += to_string(temp);
		}

		input = input % div;
		div = div / 10;
		
	}

	if (lower == higher)
	{
		cout << lower;
	}
	else
	{
		cout << lower << endl << higher;
	}
	





	/*cout << "Please enter a desired temp between 0 and 999: ";
	cin >> input;
	int hundred = input / 100;
	int ten = (input % 100) / 10;
	int one = ((input % 100) % 10);
	if (hundred == 1 || hundred == 4 || hundred == 7)
	{
		lower += to_string(hundred - 1);
		higher += to_string(hundred + 1);
		if (ten == 1 || ten == 4 || ten == 7)
		{
			lower += to_string(ten - 1);
			higher += to_string(ten + 1);
			if (one == 1 || one == 4 || one == 7)
			{
				lower += to_string(one - 1);
				higher += to_string(one + 1);
				cout << lower << endl << higher;
			}
			else
			{
				lower += to_string(one);
				higher += to_string(one);
				cout << lower << endl << higher;
			}
		}
		else
		{
			lower += to_string(ten);
			higher += to_string(ten);
			if (one == 1 || one == 4 || one == 7)
			{
				lower += to_string(one - 1);
				higher += to_string(one + 1);
				cout << lower << endl << higher;
			}
			else
			{
				lower += to_string(one);
				higher += to_string(one);
				cout << lower << endl << higher;
			}
		}

	}
	else
	{
		output = hundred;
	}*/


}