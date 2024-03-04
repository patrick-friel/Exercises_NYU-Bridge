#include <iostream>
using namespace std;

int main()
{
	int numCards = 0;
	int sum = 0;
	char input;
	int aceCount = 0;

	cout << "Please enter the number of cards you have (2 to 5): ";
	cin >> numCards;

	cout << "Please enter the value of each card separated by a space. Input 't', 'j', 'q', 'k', 'a' for 10, J, Q, K, A." << endl;

	for (int i = 0; i < numCards; i++)
	{
		cin >> input;

		switch (input)
		{
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			sum += input - 48;
			break;
		case 't':
		case 'j':
		case 'q':
		case 'k':
			sum += 10;
			break;
		case'a':
			aceCount++;
			break;
		}
	}

	while (aceCount > 0)
	{
		if ((21 - sum - aceCount + 1) >= 11)
		{
			sum += 11;
			aceCount--;
		}
		else
		{
			sum++;
			aceCount--;
		}
	}

	if (sum > 21)
	{
		cout << "Busted";
	}
	else if (sum == 21)
	{
		cout << "Blackjack!";
	}
	else
	{
		cout << sum;
	}

}
