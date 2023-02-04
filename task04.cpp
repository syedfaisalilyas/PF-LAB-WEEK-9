#include <iostream>
using namespace std;

main()
{
    int number[5];
    for (int count = 0; count < 5; count++)
    {
        cout << "Enter number:";
        cin >> number[count];
    }
    cout << "The first element in the array is:" << number[0];
    cout << "The last element in the array is:" << number[4];
}