#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter word:";
    cin >> word;
    int i = 0;
    while (word[i] != '\0')
    {
        i++;
    }
    for (int j = i; j >= 0; j--)
    {
        cout << word[j];
    }
}