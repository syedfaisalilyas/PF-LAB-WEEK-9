#include <iostream>
using namespace std;

main()
{
    int elements[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter element" << i + 1 << ":";
        cin >> elements[i];
    }

    elements[0] = elements[0] * 0.25;
    elements[1] = elements[1] * 0.10;
    elements[2] = elements[2] * 0.05;
    elements[3] = elements[3] * 0.01;
    float sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += elements[i];
    }
    cout << sum;
    float result;
    cout << "Enter result:";
    cin >> result;
    if (sum == result)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}