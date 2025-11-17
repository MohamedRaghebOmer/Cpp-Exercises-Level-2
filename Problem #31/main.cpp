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

int CreateRandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void fillArrays(int arr1[], int arr2[], int Size)
{
    for(int i = 0; i < Size; i++)
        arr1[i] = i + 1;

    for(int i = 0; i < Size; i++)
        arr2[i] = CreateRandomNumber(1, Size);
}

void PrintArrays(int arr1[], int arr2[], int Size)
{
    cout << "\nArray 1 elements: " << endl;
    for(int i = 0; i < Size; i++)
        cout << "Element[" << i + 1 << "]: " << arr1[i] << endl;


    cout << "\nArray 2 elements: " << endl;
    for(int i = 0; i < Size; i++)
        cout << "Element[" << i + 1 << "]: " << arr2[i] << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int Size = ReadSize("Enter the size (1-100): ");
    int arr1[100];
    int arr2[100];

    fillArrays(arr1, arr2, Size);
    PrintArrays(arr1, arr2, Size);
    return 0;
}
