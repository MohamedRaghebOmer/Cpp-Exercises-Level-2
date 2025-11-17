#include <iostream>
using namespace std;

void TheTop()
{

    for(int Spaces = 0; Spaces <= 40; Spaces++)
        cout << " ";
        cout << "Multiplication Table From 1 to 10\n" << endl;


    for(int TopNumbers = 1; TopNumbers <= 10; TopNumbers++)
        cout << "         " << TopNumbers;


        cout << "\n";


    for(int Hyphens = 0; Hyphens <= 119; Hyphens++)
        cout << "-";
}

void FirstRow()
{
    cout << "1" << "    " << "|   ";

    for(int Row = 1; Row <= 10; Row++)
        cout << Row << "         ";
}

void SecondRow()
{

    cout << "\n2" << "    " << "|   ";

    for(int Row = 1; Row <= 20; Row++)
    {
        Row += 1;

        if(Row < 10)
            cout << Row << "         ";

        else
            cout << Row << "        ";
    }
}

void ThirdRow()
{
    cout << "\n3" << "    " << "|   ";

    for(int Row = 1; Row <= 30; Row++)
    {
        Row += 2;

        if(Row < 10)
            cout << Row << "         ";

        else
            cout << Row << "        ";
    }
}

void FourthRow()
{
    cout << "\n4" << "    " << "|   ";

    for(int Row = 1; Row <= 40; Row++)
    {
        Row += 3;

        if(Row < 10)
            cout << Row << "         ";

        else
            cout << Row << "        ";
    }
}

void FifthRow()
{
   cout << "\n5" << "    " << "|   ";

    for(int Row = 1; Row <= 50; Row++)
    {
        Row += 4;

        if(Row < 10)
            cout << Row << "         ";

        else
            cout << Row << "        ";
    }
}

void SixthRow()
{
    cout << "\n6" << "    " << "|   ";

    for(int Row = 1; Row <= 60; Row++)
    {
        Row += 5;

        if(Row < 10)
            cout << Row << "         ";

        else
            cout << Row << "        ";
    }
}

void SeventhRow()
{
    cout << "\n7" << "    " << "|   ";

    for(int Row = 1; Row <= 70; Row++)
    {
        Row += 6;

        if(Row < 10)
            cout << Row << "         ";

        else
            cout << Row << "        ";
    }
}

void EighthRow()
{
    cout << "\n8" << "    " << "|   ";

    for(int Row = 1; Row <= 80; Row++)
    {
        Row += 7;

        if(Row < 10)
            cout << Row << "         ";

        else
            cout << Row << "        ";
    }
}

void NinthRow()
{
    cout << "\n9" << "    " << "|   ";

    for(int Row = 1; Row <= 90; Row++)
    {
        Row += 8;

        if(Row < 10)
            cout << Row << "         ";

        else
            cout << Row << "        ";
    }
}

void TenthRow()
{
    cout << "\n10" << "   " << "|   ";

    for(int Row = 1; Row <= 100; Row++)
    {
        Row += 9;

        if(Row < 10)
            cout << Row << "         ";

        else if (Row >= 10 && Row < 100)
            cout << Row << "        ";

        else
            cout << Row << "       ";
    }

    cout << endl;
}

int main()
{
    TheTop();
    FirstRow();
    SecondRow();
    ThirdRow();
    FourthRow();
    FifthRow();
    SixthRow();
    SeventhRow();
    EighthRow();
    NinthRow();
    TenthRow();

    return 0;
}
