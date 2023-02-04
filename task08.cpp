#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter word:";
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << "The " << i + 1 << " character of the " << word << "is stored at :" << i << " location" << endl;
    }
}