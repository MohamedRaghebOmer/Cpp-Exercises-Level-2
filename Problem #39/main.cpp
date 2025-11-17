#include <iostream>
#include <cmath>
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

void FillArrayWithRanNumbers(int arr1[], int Size)
{
    for(int i = 0; i < Size; i++)
        arr1[i] = RandomNumber(1, 100);
}

bool CheckPrime(int Number)
{
    if (Number <= 1)
        return false;

    for (int Counter = 2; Counter <= sqrt(Number); Counter++)
    {
        if (Number % Counter == 0)
            return false;
    }
    return true;
}

void AddArrayElements(int Number, int arr2[], int& arrLength)
{
    arrLength++;
    arr2[arrLength - 1] = Number;
}

void CopyPrimeNumbers(int arr1[], int arr2[], int Size, int& arrLength)
{
    for(int i = 0; i < Size; i++)
    {
        if(CheckPrime(arr1[i]) == true)
            AddArrayElements(arr1[i], arr2, arrLength);
    }
}

void PrintOriginalAndPrimeArrays(int arr1[], int arr2[], int Size, int arrLength)
{
    cout << "\nArray 1 elements:\n";
    for(int i = 0; i < Size; i++)
        cout << arr1[i] << " ";

        cout << endl;

    cout << "\nPrime Numbers in Array 2:\n";
    for(int i = 0; i < arrLength; i++)
        cout << arr2[i] << " ";

    cout << endl;
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
    CopyPrimeNumbers(arr1, arr2, Size, arrLength);
    PrintOriginalAndPrimeArrays(arr1, arr2, Size, arrLength);

    return 0;
}
