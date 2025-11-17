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

int CreateRandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void fillArrayWithRandomNumbers(int arr[], int Size)
{
    cout << endl;

    for(int i = 0; i < Size; i++)
    {
        int Num = CreateRandomNumber(0, 100);
        arr[i] = Num;
    }
}

void printArrayElements(int arr[], int Size)
{
    for(int i = 0; i < Size; i++)
    {
        cout << "Element[" << i + 1 << "]: " << arr[i] << endl;
    }
}

int MaxNumberInArray(int arr[], int Size)
{
    int Max = arr[0];

    for(int i = 1; i < Size; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }

    return Max;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int Size = ReadPositiveNumber("How many numbers do you want to creat?(Maximum size is 100)");

    fillArrayWithRandomNumbers(arr, Size);
    printArrayElements(arr, Size);

    cout << "\nMax number in the array is: " << MaxNumberInArray(arr, Size) << endl;

    return 0;
}
