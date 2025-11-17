#include <iostream>
using namespace std;

bool DoYouWantMore()
{
    int Answer;

    do
    {
        cout << "Do you want to add more numbers? [0]:No, [1]:Yes" << endl;
        cin >> Answer;
    }
    while(Answer < 0 || Answer > 1);

    return Answer != 0;
}

void ReadNumbers(int arr[], int& Counter)
{
    cout << "\nPlease enter the number: ";
    cin >> arr[Counter];
    Counter++;
}

void Loop(int arr[], int& Counter)
{
    do
    {
        if (Counter >= 100)
        {
            cout << "The Counter is full." << endl;
            break;
        }

        ReadNumbers(arr, Counter);

    } while (DoYouWantMore());
}

void PrintArrayData(int arr[], int Counter)
{
    cout << "\nArray length = " << Counter << endl;
    cout << "Array elements : ";

    for (int i = 0; i < Counter; i++)
         cout << arr[i] << "   ";

    cout << endl;
}

int main()
{
    int arr[100], Counter = 0;

    Loop(arr, Counter);
    PrintArrayData(arr, Counter);

    return 0;
}
