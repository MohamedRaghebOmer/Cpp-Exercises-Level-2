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

int SumOfDigits(int Number)
{
    int Remainder = 0;
    int Sum = 0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        Sum += Remainder;
    }
    return Sum;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number: ");
    int Result = SumOfDigits(Number);

    cout << "Sum of Digits = " << Result << endl;

    return 0;
}
