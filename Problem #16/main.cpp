#include <iostream>
using namespace std;

void PrintCapitalLettersFromAAAtoZZZ()
{
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            for(int k = 0; k < 26; k++)
            {
                cout << char('A' + i) << char('A' + j) << char('A' + k) << endl;
            }
        }
    }
}

int main()
{
    PrintCapitalLettersFromAAAtoZZZ();
    return 0;
}
