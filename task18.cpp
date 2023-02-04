#include <iostream>
using namespace std;

main()
{
    int number, num2;
    cout << "Enter number of numbers:";
    cin >> number;
    int num[number];
    int largest = INT8_MIN;
    for (int i = 0; i < number; i++)
    {
        cout << "Enter number:";
        cin >> num[i];
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    cout << "The largest is:" << largest;
}