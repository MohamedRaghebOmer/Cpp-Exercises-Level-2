#include <iostream>
#include <string>
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

int main()
{
    int Number = ReadPositiveNumber("Please enter a Number to reveres it: ");
    int Result = ReverseDigits(Number);

    cout << "\nReverse is:\n" << Result << endl;

    return 0;
}
