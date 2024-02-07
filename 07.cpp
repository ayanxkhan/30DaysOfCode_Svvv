#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    cout << endl
         << "The sum of array is: " << sum;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements of array are:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    sumArray(arr, size);

    return 0;
}