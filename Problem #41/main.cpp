#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void FillArray(int arr[], int& arrLength)
{
    arrLength = 6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

void PrintArray(int arr[], int arrLength)
{
    cout << "Array elements:\n";

    for(int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
}

bool IsPalindromeArray(int arr[], int arrLength)
{
    for(int i = 0; i < arrLength / 2; i++)
    {
        if(arr[i] != arr[arrLength - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    int arr[100], arrLength = 0;

    FillArray(arr, arrLength);
    PrintArray(arr, arrLength);

    if(IsPalindromeArray(arr, arrLength))
        cout << "\n\nIt's Palindrome array :-)" << endl;
    else
        cout << "\n\nIt's NOT a palindrome array :-(" << endl;

    return 0;
}
