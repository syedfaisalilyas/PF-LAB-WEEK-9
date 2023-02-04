#include <iostream>
using namespace std;

int main()
{
    string word;
    char letter;
    cout << "Enter word:";
    cin >> word;
    cout << "Enter letter:";
    cin >> letter;
    int i = 0;
    while (word[i] != '\0')
    {
        i++;
    }
    if (word[i - 1] == letter)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}