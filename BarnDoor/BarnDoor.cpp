#include <iostream>
using namespace std;

int main() {

	// Create a barn door shape with n = 10

	int n;
	char num = '#';
	char mon = '$';

	cout << "Please enter a positive number: ";
	cin >> n;
	int z = (n - 1) / 2;

	for (int i = 0; i < n; i++)
	{
		cout << num;
	}
	cout << "\n";

	for (int i = z; i > 0; i--)
	{
		cout << num;

		for (int k = n; k > i + z + 2; k--)
		{
			cout << " ";
		}
		cout << mon;
		for (int j = 0; j < (i - 1) * 2; j++)
		{
			cout << " ";
		}
		cout << mon;
		for (int w = z; w > i; w--)
		{
			cout << " ";
		}
		cout << num << "\n";
	}

	for (int i = 0; i < z; i++)
	{
		cout << num;

		for (int k = z; k > i + 1; k--)
		{
			cout << " ";
		}
		cout << mon;
		for (int j = 0; j < i * 2; j++)
		{
			cout << " ";
		}
		cout << mon;
		for (int w = z; w > i + 1; w--)
		{
			cout << " ";
		}
		cout << num << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		cout << num;
	}
}