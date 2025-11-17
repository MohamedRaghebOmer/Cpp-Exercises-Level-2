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

int ReverseDigits(int OriginalNumber)
{
    int LastDigit = 0;
    int ReversedNumber = 0;

    while(OriginalNumber > 0)
    {
        LastDigit = OriginalNumber % 10;
        OriginalNumber /= 10;
        ReversedNumber = ReversedNumber * 10 + LastDigit;
    }
    return ReversedNumber;
}

void PrintDigits(int Number)
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
    PrintDigits(ReverseDigits(ReadPositiveNumber("Please enter a Number: ")));
    return 0;
}
