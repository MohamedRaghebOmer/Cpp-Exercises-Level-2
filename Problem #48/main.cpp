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

float Myfloor(float Number)
{
    if (Number >= 0)
        return int(Number);
    else
        return int(Number - 0.5) -1;
}

int main()
{
    float Number = ReadNumber("please enter your Number: ");

    cout << "\nResult with my Floor = " << Myfloor(Number) << endl;
    cout << "Result with C++ Floor = " << Myfloor(Number) << endl;

    return 0;
}
