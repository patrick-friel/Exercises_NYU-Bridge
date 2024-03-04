#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cout << "Please enter integer: ";
	cin >> n;

	for (int i = 0; i < n + 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		for (int k = 1; k < (i + 1) * 2; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << " ";
		}
		for (int k = n * 2; k >= (i+1)*2; k--)
		{
			cout << "*";
		}

		cout << endl;

	}







	/*int n;

	cout << "Please enter an integer: ";
	cin >> n;

	for (int i = 0; i < 2*n; i++)
	{
		for (int k = 0; k < (2 * n - 1 - i); k++)
		{
			cout << " ";
		}
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}*/


	/*string n;
	int sum = 0;
	int groupA = 0;
	int groupB = 0;
	int groupC = 0;
	int groupD = 0;

	cout << "Please enter a sequence of numbers (with at least 1-digit and at most 8-digits), each one in a separate line.End your sequence by typing - 1:" << endl;

	while (n != "-1")
	{
		cin >> n;
		sum = 0;
		for (int i = 0; i < n.size(); i++)
		{
			sum += n[i] - 48;
		}

		if (sum > 0 && sum < 10)
		{
			groupA++;
		}
		else if (sum > 9 && sum < 20)
		{
			groupB++;
		}
		else if (sum > 19 && sum <30)
		{
			groupC++;
		}
		else if (sum > 29)
		{
			groupD++;
		}
	}

	cout << groupA << endl << groupB << endl << groupC << endl << groupD << endl;*/


	
	
}