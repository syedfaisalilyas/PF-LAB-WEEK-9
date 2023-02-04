#include <iostream>
using namespace std;

main()
{
    int number, num2;
    cout << "Enter number of Resistaces:";
    cin >> number;
    float num[number];
    float sum = 0;
    for (int i = 0; i < number; i++)
    {
        cout << "Enter Resistance:";
        cin >> num[i];
        sum += num[i];
    }
    cout << "The Total resistance is:" << sum;
}