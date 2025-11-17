#include <iostream>
using namespace std;

void PrintTableHeader()
{
    cout << "\t\t\t\t\t Multiplication Table From 1 to 10\n\n\t";

    for(int i = 1; i <= 10; i++)
        cout << i << "\t" ;

    cout << "\n___________________________________________________________________________________\n";
}

string  ColumSperator(int i)
{
    if(i < 10)
        return "   |";

    else
        return "  |";
}


void PrintMultiplicationTable()
{
    PrintTableHeader();


    for(int i = 1; i <= 10; i++)
    {
        cout << " " << i << ColumSperator(i) << "\t";

        for(int Y = 1; Y <= 10; Y++)
            cout << i * Y << "\t";

        cout << endl;

    }
}

int main()
{
    PrintMultiplicationTable();
    return 0;
}
