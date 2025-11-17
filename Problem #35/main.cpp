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

short findNumberPositionInArray(int arr[], int Size, int ReqNumber)
{
    for(short i = 0; i < Size; i++)
    {
        if(arr[i] == ReqNumber)
            return i;
    }

    return -1;
}

bool IsNumberInArray(int arr[], int Size, int ReqNumber)
{
    return findNumberPositionInArray(arr, Size, ReqNumber) != -1;
}

void PrintResult(int arr[], int Size, int ReqNumber)
{
    int Position = findNumberPositionInArray(arr, Size, ReqNumber);

    if(IsNumberInArray(arr, Size, ReqNumber))
    {
        cout << "\nNumber you are looking for is " << ReqNumber << endl;
        cout << "We found the number in Position " << Position + 1 << " :-)" << endl;
    }
    else
    {
        cout << "\nNumber you are looking for is " << ReqNumber << endl;
        cout << "No, the number is not found :-(" << endl;
    }
}

int main()
{
     srand((unsigned)time(NULL));

    int arr[100];
    int Size = ReadPositiveNumber("Enter the size (1-100): ");

    fillArray(arr, Size);
    PrintArray(arr, Size);

    int ReqNumber = GetReqNumber(arr, Size);

    PrintResult(arr, Size, ReqNumber);
    return 0;
}
