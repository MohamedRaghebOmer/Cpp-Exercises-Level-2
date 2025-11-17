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

float MyCeil(float Number)
{
    if (int(Number) == Number)
        return Number;

    else if (Number > 0)
        return int(Number) + 1;

    else
        return int(Number);
}

int main()
{
    float Number = ReadNumber("please enter your Number: ");

    cout << "\nResult with my Ceil = " << MyCeil(Number) << endl;
    cout << "Result with C++ Ceil = " << ceil(Number) << endl;

    return 0;
}
