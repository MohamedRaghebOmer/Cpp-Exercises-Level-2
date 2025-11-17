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

void PrintNumbersPattern(int Number)
{
    cout << endl;

    for(int A = 1; A <= Number; A++)
    {
        for(int B = 1; B <= A; B++)
        {
            cout << A;
        }
        cout << endl;
    }
}

int main()
{
    PrintNumbersPattern(ReadPositiveNumber("Please enter a Positive Number: "));
    return 0;
}
