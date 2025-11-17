#include <iostream>
#include <cmath>
using namespace std;

int ReadArraySize()
{
    int ArraySize = 0;

    do
    {
        cout << "How many elements do you want to write? \n";
        cin >> ArraySize;
    }while(ArraySize <= 0);

    return ArraySize;
}

void ReadArrayElements(int arr[], int ArraySize)
{
    cout << "\n";
    cout << "Enter array elements:\n";
    for(int i = 0; i < ArraySize; i++)
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
}

int GetNumberToCheck()
{
    int NumberToCheck;

    cout << "\nWhat is the Number do you want to check?\n";
    cin >> NumberToCheck;

    return NumberToCheck;
}

void PrintArrayElements(int arr[], int ArraySize)
{
    cout << "\nYour elements are: ";

    for(int i = 0; i < ArraySize; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;
}

void CheckNumberInTheArray(int NumberToCheck, int arr[], int ArraySize)
{
    int Counter = 0;

    for(int i = 1; i < ArraySize; i++)
    {
        if (arr[i] == NumberToCheck)
            Counter++;
    }

    cout << "\nNumber " << NumberToCheck << " appeared " << Counter << " time(s)." << endl;
}


int main()
{
    int ArraySize = ReadArraySize();
    int arr[ArraySize];

    ReadArrayElements(arr, ArraySize);
    int NumberToCheck = GetNumberToCheck();

    PrintArrayElements(arr, ArraySize);

    CheckNumberInTheArray(NumberToCheck, arr, ArraySize);

    return 0;
}
