#include <iostream>
#include <cmath>

using namespace std;

int GetPositiveNumber()
{
    int Number;

    do
    {
        cout << "Please enter a Positive Number: ";
        cin >> Number;
    }
    while (N < 1);

    return N;
}

string CheckPrime(int Number)
{

    if (Number == 1)
        return "It's not a Prime Number.";

    for(int i = 2; i <= sqrt(N); i++)
        {
            if (N % i == 0)
                return "It's not a Prime Number.";

        }
            return "Prime Number!";
}

int main()
{
    cout << CheckPrime(GetPositiveNumber());
    return 0;
}
