#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter word:";
    cin >> word;
    int sum = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        sum++;
    }
    if (sum % 2 == 0)
    {
        cout << "The length is even";
    }
    else
    {
        cout << "The length is odd";
    }
}