#include <iostream>
using namespace std;

main()
{
    int number, num2;
    cout << "Enter number of numbers:";
    cin >> number;
    int num[number];
    int SMALLEST = INT8_MAX;
    for (int i = 0; i < number; i++)
    {
        cout << "Enter number:";
        cin >> num[i];
        if (num[i] < SMALLEST)
        {
            SMALLEST = num[i];
        }
    }
    cout << "The smallest is:" << SMALLEST;
}