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

float MyABS(float Number)
{
    if(Number >= 0)
        return Number;
    else
        return Number * -1;
}

int main()
{
    float Number = ReadNumber("please enter your Number: ");

    cout << "\nResult with my abs = " << MyABS(Number) << endl;
    cout << "Result with C++ abs = " << abs(Number) << endl;

    return 0;
}
