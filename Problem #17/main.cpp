#include <iostream>
#include <string>
using namespace std;

string ReadPassword()
{
    string Password;

    cout << "Please enter your Password: ";
    cin >> Password;

    return Password;
}

bool CheckPassword(string Password)
{
    int Counter = 1;

    for(int i = 'A'; i <= 'Z'; i++)
    {
        for(int j = 'A'; j <= 'Z'; j++)
        {
            for(int k = 'A'; k <= 'Z'; k++)
            {
               string Word = "";

               Word = Word + char(i);
               Word = Word + char(j);
               Word = Word + char(k);

               cout << "Trial [" << Counter << "] : " << Word << endl;
               Counter++;

                if(Word == Password)
                {
                    cout << "\nPassword is: " << Word << endl;
                    cout << "Find after " << Counter << " Trial(s)" << endl;
                    return true;
                }
            }
        }
    }

    cout << "\nSorry, We Can't found the Password." << endl;

    return false;
}

int main()
{
    CheckPassword(ReadPassword());
    return 0;
}
