#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
    string Text;

    cout << "What is the text do you want to encrypt?\n";
    getline(cin, Text);

    return Text;
}

string EncryptText(string Text, short EncryptoinKey)
{
    for(int i = 0; i < Text.length(); i++)
    {
        Text[i] = char( (int)Text[i] + EncryptoinKey );
    }

    return Text;
}

string DecryptText(string EncryptedText, short EncryptoinKey)
{
    for(int i = 0; i < EncryptedText.length(); i++)
    {
        EncryptedText[i] = char( (int)EncryptedText[i] - EncryptoinKey );
    }

    return EncryptedText;
}

int main()
{
    const short EncryptoinKey = 2; // This is the key

    string Text = ReadText();
    string TextAfterEncryption = EncryptText(Text, EncryptoinKey);
    string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptoinKey);

    cout << "\nText before encryption is: " << Text << endl;
    cout << "Text after encryption is: " << TextAfterEncryption << endl;
    cout << "Text after decryption is: " << TextAfterDecryption << endl;

    return 0;
}
