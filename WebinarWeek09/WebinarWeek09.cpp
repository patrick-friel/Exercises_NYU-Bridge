// WebinarWeek09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int search(int arr[], int logical_size, int x);

int main()
{
    int arr[9] = { 10, 6, 100, -3, 0, 1, 17, 99, 50 };
   
    int x = 17;

    cout << search(arr, 9, 17);
}

int search(int arr[], int logical_size, int x)
{
    for (int i = 0; i < logical_size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}