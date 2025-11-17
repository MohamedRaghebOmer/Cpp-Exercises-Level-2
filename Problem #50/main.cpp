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

float MySqrt(float Number)
{
    return pow(Number, 0.5);
}

int main()
{
    float Number = ReadNumber("please enter your Number: ");

    cout << "\nResult with my Sqrt = " << MySqrt(Number) << endl;
    cout << "Result with C++ Sqrt = " << sqrt(Number) << endl;

    return 0;
}
