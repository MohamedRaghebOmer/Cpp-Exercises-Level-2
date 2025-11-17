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

void PrintReversedDigits(int Number)
{
    int Remainder = 0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;

        cout << Remainder << endl;
    }
}

int main()
{
    PrintReversedDigits(ReadPositiveNumber("Please enter a Positive Number: "));

    return 0;
}
