#include <iostream>
using namespace std;

main()
{
    int number, num2;
    cout << "Enter number of numbers:";
    cin >> number;
    int num[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter number:";
        cin >> num[i];
    }
    cout << "Enter another number:";
    cin >> num2;
    for (int i = 0; i < number; i++)
    {
        if (num2 == num[i])
        {
            cout << "Already entered";
        }
    }
}