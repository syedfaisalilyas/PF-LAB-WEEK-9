#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number of numbers:";
    cin >> number;
    int num[number];
    int j = 0;
    for (int i = 0; i < number; i++)
    {
        cout << "Enter number:";
        cin >> num[i];
        j++;
    }
    for (int i = j - 1; i >= 0; i--)
    {
        cout << num[i];
    }
}