#include <iostream>
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

int GenerateRandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void fillArray(int arr[], int Size)
{
    cout << endl;

    for(int i = 0; i < Size; i++)
    {
        arr[i] = GenerateRandomNumber(1, 100);
    }
}

void PrintArray(int arr[], int Size)
{
    cout << "Your array is:" << endl;

    for(int i = 0; i < Size; i++)
        cout << "Element[" << i + 1 << "]: " << arr[i] << endl;
}

int GetReqNumber(int arr[], int Size)
{
    int ReqNumber;

    cout << "\nWhat is the number you are looking for?" << endl;
    cin >> ReqNumber;

    return ReqNumber;
}

void PrintIndex(int arr[], int Size, int ReqNumber)
{
    int Counter = 0;

    for(int i = 0; i < Size; i++)
    {
        if(arr[i] == ReqNumber)
        {
            cout << "\nNumber You are looking for is: " << ReqNumber << endl;
            cout << "Number position in the array: " << i << endl;
            cout << "The Number found in order: " << i + 1 << endl;
            Counter++;
        }
    }

    cout << "\nNumber " << ReqNumber << " appeared " << Counter << " Time(s)." << endl;

    if(Counter == 0)
        cout << "\nThe Number you are looking for not found :-(" << endl;
}

int main()
{
     srand((unsigned)time(NULL));

    int arr[100];
    int Size = ReadPositiveNumber("Enter the size (1-100): ");

    fillArray(arr, Size);
    PrintArray(arr, Size);

    int ReqNumber = GetReqNumber(arr, Size);

    PrintIndex(arr, Size, ReqNumber);

    return 0;
}
