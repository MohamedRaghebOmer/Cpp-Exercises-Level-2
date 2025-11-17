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

    return ArraySize + 1;
}

void ReadArrayElements(int arr[], int ArraySize)
{
    cout << "\n";
    cout << "Enter array elements:\n";

    for(int i = 1; i < ArraySize; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }
}

int GetDigitToCheck()
{
    int DigitToCheck;

    do
    {
        cout << "\nWhat is the Digit do you want to check?\n";
        cin >> DigitToCheck;

    }while(DigitToCheck < 0 || DigitToCheck > 9);

    return DigitToCheck;
}

void PrintArrayElements(int arr[], int ArraySize)
{
    cout << "\nYour elements are: ";

    for(int i = 1; i < ArraySize; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;
}

void CheckDigitInTheArray(int DigitToCheck, int arr[], int ArraySize)
{
    int Counter = 0;

    for(int i = 1; i < ArraySize; i++)
    {
        int LastDigit = 0;
        int Temp = abs(arr[i]);

        if (arr[i] == 0 && DigitToCheck == 0)
        Counter++;

        while(Temp > 0)
        {
            LastDigit = Temp % 10;
            Temp /= 10;


            if (LastDigit == DigitToCheck)
                Counter++;
        }

    }

    cout << "\nDigit " << DigitToCheck << " appeared " << Counter << " time(s)." << endl;
}

int main()
{
    int ArraySize = ReadArraySize();
    int arr[ArraySize];

    ReadArrayElements(arr, ArraySize);
    int DigitToCheck = GetDigitToCheck();

    PrintArrayElements(arr, ArraySize);

    CheckDigitInTheArray(DigitToCheck, arr, ArraySize);

    return 0;
}
