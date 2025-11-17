#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumbere(string Message)
{
    int Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    }while(Number <= 0 || Number > 100);

    return Number;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void fillArrayWithRanNumbers(int arr1[], int Size)
{
    for(int i = 0; i < Size; i++)
        arr1[i] = RandomNumber(1, 100);
}

void AddArrayElements(int arr1[100], int arr2[100], int Size, int& arrLength)
{
    for(int i = 0; i < Size; i++)
    {
        arrLength++;
        arr2[arrLength - 1] = arr1[i];
    }
}

void PrintArrays(int arr1[100], int arr2[100], int Size)
{
    cout << endl;

    cout << "Array 1 Elements: " << endl;
    for(int i = 0; i < Size; i++)
        cout << "Element[" << i + 1 << "]: " << arr1[i] << endl;


    cout << "\nArray 2 Elements: " << endl;
        for(int i = 0; i < Size; i++)
            cout << "Element[" << i + 1 << "]: " << arr2[i] << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[100];
    int arr2[100];

    int Size = ReadPositiveNumbere("How many elements?");

    int arrLength = 0;

    fillArrayWithRanNumbers(arr1, Size);
    AddArrayElements(arr1, arr2, Size, arrLength);
    PrintArrays(arr1, arr2, arrLength);

    return 0;
}
