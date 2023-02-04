#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number of numbers:";
    cin >> number;
    int num[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter number:";
        cin >> num[i];
    }
    for (int i = 0; i < number; i++)
    {
        cout << "The number " << i + 1 << "is:" << num[i] << endl;
    }
}