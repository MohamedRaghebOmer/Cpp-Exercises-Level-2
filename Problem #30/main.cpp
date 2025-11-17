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
    }while(Number <= 0 || Number > 100);

    return Number;
}

int CreateRandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void fillArrays(int arr1[], int arr2[], int Size)
{
    for(int i = 0; i < Size; i++)
    {
        arr1[i] = CreateRandomNumber(0, 100);
        arr2[i] = CreateRandomNumber(0, 100);
    }
}

void SumArrays(int arr1[], int arr2[], int ArraySum[], int Size)
{
    for(int i = 0; i < Size; i++)
    {
        ArraySum[i] = arr1[i] + arr2[i];
    }
}

void PrintArrays(int arr1[], int arr2[], int ArraySum[], int Size)
{
    cout << "\nArray 1 elements: " << endl;
    for(int i = 0; i < Size; i++)
    {
        cout << "Element[" << i + 1 << "]: " << arr1[i] << endl;
    }

    cout << "\nArray 2 elements: " << endl;
    for(int i = 0; i < Size; i++)
    {
        cout << "Element[" << i + 1 << "]: " << arr2[i] << endl;
    }

    cout << "\nArray sum elements(Array1 + Array2): " << endl;
    for(int i = 0; i < Size; i++)
    {
        cout << "Element[" << i + 1 << "]: " << ArraySum[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100];
    int arr2[100];
    int ArraySum[100];
    int Size = ReadSize("Enter the size (1-100): ");

    fillArrays(arr1, arr2, Size);
    SumArrays(arr1, arr2, ArraySum, Size);
    PrintArrays(arr1, arr2, ArraySum, Size);
    return 0;
}
