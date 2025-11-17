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

bool IsPalindromeNumber(int Number)
{
    return Number == ReverseDigits(Number);
}

void PrintResult()
{
    if(IsPalindromeNumber(ReadPositiveNumber("Please enter your number: ")))
        cout << "\nYes, it is a Palindrome Number!" << endl;
    else
        cout << "\nNo, it NOT a Palindrome Number." << endl;
}

int main()
{
    PrintResult();
    return 0;
}
