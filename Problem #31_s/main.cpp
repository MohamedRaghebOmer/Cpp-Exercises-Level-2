#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadSize(string Message)
{
    int Number;

    do
    {
        cout << Message;
        cin >> Number;
    }while(Number <= 0);

    return Number;
}

void fillArray(int arr[], int Size)
{
    for(int i = 0; i < Size; i++)
        arr[i] = i + 1;
}

void PrintArray(int arr[], int Size)
{
    cout << "Array before shuffling:" << endl;
    for(int i = 0; i < Size; i++)
        cout << "Element[" << i + 1 << "]: " << arr[i] << endl;
}

int CreateRandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void Swap(int& Num1, int& Num2)
{
    int Temp;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

void ShuffleArray(int arr[], int Size)
{
    for(int i = 0; i < Size; i++)
    {
        int ArrayIndex1 = CreateRandomNumber(1, Size) - 1;
        int ArrayIndex2 = CreateRandomNumber(1, Size) - 1;

        Swap( arr[ArrayIndex1], arr[ArrayIndex2] );
    }
}

void PrintShuffledArray(int arr[], int Size)
{
    cout << "\nArray after shuffling:" << endl;
    for(int i = 0; i < Size; i++)
        cout << "Element[" << i + 1 << "]: " << arr[i] << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int Size = ReadSize("Enter the size (1-100): ");
    int arr[100];

    fillArray(arr, Size);
    PrintArray(arr, Size);
    ShuffleArray(arr, Size);
    PrintShuffledArray(arr, Size);
    return 0;
}
