#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "\nPlease enter the number: ";
    cin >> Number;

    return Number;
}

void AddArrayElements(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void InputUserNumbersInArray(int arr[100], int& arrLength)
{
    bool AddMore = true;

    do
    {
        AddArrayElements(ReadNumber(), arr, arrLength);

        cout << "Do you want to add more numbers? Yes[1], No[0]" << endl;
        cin >> AddMore;

    }while(AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    int arr[100];
    int arrLength = 0;

    InputUserNumbersInArray(arr, arrLength);

    cout << "\nArray length: " << arrLength << endl;
    cout << "Array elements: ";
    PrintArray(arr, arrLength);

    return 0;
}
