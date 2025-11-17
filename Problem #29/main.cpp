#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string Message)
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

void fillArray(int arr[], int Size)
{
    cout << endl;

    for(int i = 0; i < Size; i++)
    {
        int Num = CreateRandomNumber(0, 100);
        arr[i] = Num;
    }
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

int PrimToArray2(int arr[], int arr2[], int Size)
{
    int Counter = 0;

    for(int i = 0; i < Size; i++)
    {
        if(CheckPrime(arr[i]) == true)
        {
            arr2[Counter] = arr[i];
            Counter++;
        }

    }

    return Counter;
}

void PrintArray(int arr[], int Size)
{
    cout << "Main array:" << endl;

    for(int i = 0; i < Size; i++)
    {
        cout << "Element[" << i + 1 << "]: " << arr[i] << endl;
    }
}

void ExtractPrimes(int arr2[], int HowMenyPrimesInArr2)
{
    cout << "\nPrime Numbers from array2 are:" << endl;

    for(int i = 0; i < HowMenyPrimesInArr2; i++)
    {
        cout << "Element[" << i + 1 << "]: " << arr2[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arr2[100];
    int Size = ReadPositiveNumber("Enter the size (1-100): ");

    fillArray(arr, Size);

    int HowMenyPrimesInArr2 = PrimToArray2(arr, arr2, Size);

    PrintArray(arr, Size);
    ExtractPrimes(arr2, HowMenyPrimesInArr2);


    return 0;
}
