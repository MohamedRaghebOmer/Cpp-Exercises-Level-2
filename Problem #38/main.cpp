#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string Message)
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

void AddArrayElements(int Number, int arr2[], int& arrLength)
{
    arrLength++;
    arr2[arrLength - 1] = Number;
}

void CopyOddNumbersUsingAddArrayElements(int arr1[], int arr2[], int& arrLength, int Size)
{
    for(int i = 0; i < Size; i++)
    {
        if(arr1[i] % 2 != 0)
        {
            AddArrayElements(arr1[i], arr2, arrLength);
        }
    }
}

void PrintOriginalAndOddArrays(int arr1[], int arr2[], int Size, int arrLength)
{
    cout << "\nArray 1 Elements: ";
    for(int i = 0; i < Size; i++)
        cout << arr1[i] << " ";


    cout << "\nOdd numbers in Array 2: ";
        for(int i = 0; i < arrLength; i++)
            cout << arr2[i] << " ";

    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100];
    int arr2[100];
    int arrLength = 0;


    int Size = ReadPositiveNumber("How many elements?");

    fillArrayWithRanNumbers(arr1, Size);
    CopyOddNumbersUsingAddArrayElements(arr1, arr2, arrLength, Size);
    PrintOriginalAndOddArrays(arr1, arr2, Size, arrLength);

    return 0;
}
