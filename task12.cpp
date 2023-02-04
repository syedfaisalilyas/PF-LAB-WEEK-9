#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter word:";
    getline(cin, word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isalpha(word[i]))
        {
            if (word[i] == 'z' || word[i] == 'Z')
            {
                word[i] = (char)(word[i] - 25);
            }
            else
            {
                word[i] = (char)(word[i] + 1);
            }
        }
    }
    cout << "The converted word is:" << word << endl;
}