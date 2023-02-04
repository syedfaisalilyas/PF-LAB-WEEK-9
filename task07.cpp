#include <iostream>
using namespace std;

int main()
{
    char character;
    string word;
    bool output = true;
    cout << "Enter word:";
    cin >> word;
    cout << "Enter letter:";
    cin >> character;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == character)
        {
            output = true;
            break;
        }
    }
    if (output == true)
    {
        cout << character << " is present in the " << word;
    }
    else
    {
        cout << character << " is not present in the " << word;
    }
}