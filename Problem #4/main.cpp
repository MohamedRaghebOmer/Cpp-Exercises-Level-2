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

void PrintPerfectNumbersFrom1ToN(int Number)
{
    if (Number <= 5)
    {
        cout << "There are no Perfect Numbers in this range." << endl;
    }
    else
    {
        cout << "\nPerfect Numbers from 1 to " << Number << " are: " << endl;

        for (int i = 1; i <= Number; i++)
        {
            if (IsPerfectNumber(i))
            {
                cout << i << "   ";
            }
        }
        cout << endl;
    }

}

int main()
{
    PrintPerfectNumbersFrom1ToN((ReadPositiveNumber("Please enter a Positive Number: ")));

    return 0;
}
