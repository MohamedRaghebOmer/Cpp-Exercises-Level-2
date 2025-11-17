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
    cout << "\n";

    for (int i = 'A'; i <= 'A' + Number - 1; i++)
    {
        for (int j = 1; j <= i - 'A' + 1; j++)
        {
            cout << char(i);
        }
        cout << "\n";
    }
}

int main()
{
    PrintInvertedNumbersPattern(ReadPositiveNumber("Please enter a Positive Number: "));
    return 0;
}
