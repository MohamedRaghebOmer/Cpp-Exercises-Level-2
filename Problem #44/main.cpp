#include <iostream>
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
        arr1[i] = RandomNumber(-100, 100);
}

void PrintArray(int arr1[], int arr2[], int Size, int arrLength)
{
    cout << "\nArray 1 elements: ";
    for(int i = 0; i < Size; i++)
        cout << arr1[i] << " ";

        cout << endl;
}

int CountPositiveNumbers(int arr1[], int Size)
{
    int Counter = 0;

    for(int i = 0; i < Size; i++)
    {
        if (arr1[i] > 0)
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
    PrintArray(arr1, arr2, Size, arrLength);

    cout << "\nThere is " << CountPositiveNumbers(arr1, Size) << " Positive number In the array." << endl;

    return 0;
}
