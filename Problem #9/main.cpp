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

int CountDigitsFrequency(int OriginalNumber, short DigitToCheck)
{
    int LastDigit = 0;
    int Counter = 0;

    while(OriginalNumber > 0)
    {
        LastDigit = OriginalNumber % 10;
        OriginalNumber /= 10;

        if(LastDigit == DigitToCheck)
            Counter++;
    }
    return Counter;
}

void PrintAllDigitsFrequencey(int OriginalNumber)
{
    cout << endl;

    for(int i = 0; i <= 9; i++)
    {
        short DigitFrequencey = 0;

        DigitFrequencey = CountDigitsFrequency(OriginalNumber, i);

        if (DigitFrequencey > 0)
            cout << "Digit " << i << " appeared " << DigitFrequencey << " Time(s)" << endl;
    }
}

int main()
{
    PrintAllDigitsFrequencey(ReadPositiveNumber("Please enter the main number: "));
    return 0;
}

