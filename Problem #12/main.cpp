#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message;
        cin >> Number;
    }while (Number <= 0);

    return Number;
}

void PrintInvertedNumbersPattern(int Number)
{
    cout << endl;

    for(int A = Number; A >= 1; A--)
    {
        for(int B = 1; B <= A; B++)
        {
            cout << B;
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedNumbersPattern(ReadPositiveNumber("Please enter a Positive Number: "));
    return 0;
}

