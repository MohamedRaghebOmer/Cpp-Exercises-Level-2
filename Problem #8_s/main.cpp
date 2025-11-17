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

int CountDigitFrequency(int OriginalNumber, short DigitToCheck)
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

void RunDigitFrequencyProgram()
{
    short DigitToCheck = 0;
    int Number = ReadPositiveNumber("Please enter the main number: ");

    cout << "Please enter the digit you want to check (0-9): ";
    cin >> DigitToCheck;

    int Result = CountDigitFrequency(Number, DigitToCheck);


    cout << "\nDigit " << DigitToCheck << " appeared " << Result << " Time(s)." << endl;
}

int main()
{
    RunDigitFrequencyProgram();

    return 0;
}
