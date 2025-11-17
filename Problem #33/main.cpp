#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message;
        cin >> Number;
    }while(Number <= 0 || Number > 100);

    return Number;
}

int GeneratRandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

string GeneratWord()
{
    string Word = "";

    for(int i = 0; i < 4; i++)
    {
       Word += char(GeneratRandomNumber(65, 90));
    }
    return Word;
}

void GeneratKey()
{
    for (int i = 0; i < 4; i++)
    {
        cout << GeneratWord();

        if (i < 3)
            cout << "-";
    }

}

void PrintKey(int Times)
{
    cout << endl;

    for(int i = 0; i < Times; i++)
    {
        GeneratKey();
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Times = ReadPositiveNumber("How many keys?\n");
    PrintKey(Times);

    return 0;
}
