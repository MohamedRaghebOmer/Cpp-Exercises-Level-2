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

    } while (Number <= 0);

    return Number;
}

bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    for (int i = 1; i <= Number / 2; i++)
    {
        if (Number % i == 0)
            Sum += i;
    }

        return Number == Sum;
}

void PrintResult(int Number)
{
    if(IsPerfectNumber(Number))
        cout << Number << " is a Perfect Number!" << endl;
    else
        cout << Number << " Not a Perfect Number." << endl;
}

int main()
{
    PrintResult((ReadPositiveNumber("Please enter a Positive Number: ")));

    return 0;
}
