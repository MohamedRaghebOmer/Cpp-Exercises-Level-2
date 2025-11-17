#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
    float Number;

    cout << Message;
    cin >> Number;

    return Number;
}

float MyROUND(float Number)
{
    if (Number >= 0)
        return int(Number + 0.5);
    else
        return int(Number - 0.5);
}

int main()
{
    float Number = ReadNumber("please enter your Number: ");

    cout << "\nResult with my ROUND = " << MyROUND(Number) << endl;
    cout << "Result with C++ ROUND = " << round(Number) << endl;

    return 0;
}
