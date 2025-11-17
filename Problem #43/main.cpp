#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enNumberType{Odd, Even};

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

void FillArrayWithRanNumbers(int arr1[], int Size)
{
    for(int i = 0; i < Size; i++)
        arr1[i] = RandomNumber(1, 100);
}

enNumberType Type(int Number)
{
    if(Number % 2 != 0)
        return enNumberType::Odd;
    else
        return enNumberType::Even;
}

void AddArrayElements(int Number, int arr2[], int& arrLength)
{
    arrLength++;
    arr2[arrLength - 1] = Number;
}

void CopyEvenNumbers(int arr1[], int arr2[], int Size, int& arrLength)
{
    for(int i = 0; i < Size; i++)
    {
        if(Type(arr1[i]) == enNumberType::Even)
            AddArrayElements(arr1[i], arr2, arrLength);
    }
}

void PrintOriginalAndOddArrays(int arr1[], int arr2[], int Size, int arrLength)
{
    cout << "\nArray 1 elements: ";
    for(int i = 0; i < Size; i++)
        cout << arr1[i] << " ";

        cout << endl;

    cout << "\nOdd Numbers in Array 2 : ";
    for(int i = 0; i < arrLength; i++)
        cout << arr2[i] << " ";

    cout << endl;
}

int CountEven(int arr1[], int Size)
{
    int Counter = 0;

    for(int i = 0; i < Size; i++)
    {
        if (arr1[i] % 2 == 0)
            Counter++;
    }

    return Counter;
}

int main()
{
    srand((unsigned)time(NULL));

    const int MAX_SIZE = 100;
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int arrLength = 0;


    int Size = ReadPositiveNumber("How many elements?");

    FillArrayWithRanNumbers(arr1, Size);
    CopyEvenNumbers(arr1, arr2, Size, arrLength);
    PrintOriginalAndOddArrays(arr1, arr2, Size, arrLength);

    cout << "There is " << CountEven(arr1, Size) << " Even number In the array." << endl;

    return 0;
}
