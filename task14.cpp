#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter word:";
    cin >> word;
    int j = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            j++;
        }
    }
    cout << "Number of vowels:" << j;
}