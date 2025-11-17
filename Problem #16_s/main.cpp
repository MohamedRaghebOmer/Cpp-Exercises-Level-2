#include <iostream>
using namespace std;

void PrintCapitalLettersFromAAAtoZZZ()
{
    string Word = "";

    for(int i = 'A'; i <= 'Z'; i++)
    {
        for(int j = 'A'; j <= 'Z'; j++)
        {
            for(int k = 'A'; k <= 'Z'; k++)
            {
               Word = Word + char(i);
               Word = Word + char(j);
               Word = Word + char(k);

               cout << Word << endl;

               Word = "";
            }
        }
    }
}

int main()
{
    PrintCapitalLettersFromAAAtoZZZ();
    return 0;
}
