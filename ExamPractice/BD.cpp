#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int z = (n - 2) / 2;

	for (int i = 0; i < n; i++)
	{
		cout << "#";
	}

	cout << endl;

	for (int i = 0; i < (n-1) / 2; i++)
	{
		cout << "#";

		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}

		cout << "$";

		for (int j = z; j > (i-1) * 2; j--)
		{
			cout << " ";
		}

		cout << "$";

		for (int w = 0; w < i; w++)
		{
			cout << " ";
		}

		cout << "#\n";
	}

	for (int i = 0; i < z; i++)
	{
		cout << "#";

		for (int k = z; k > i+1; k--)
		{
			cout << " ";
		}

		cout << "$";

		for (int j = 0; j < i * 2; j++)
		{
			cout << " ";
		}

		cout << "$";

		for (int w = z-1; w > i; w--)
		{
			cout << " ";
		}

		cout << "#\n";

	}

	for (int i = 0; i < n; i++)
	{
		cout << "#";
	}

}
