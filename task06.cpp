#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    float average = 0;
    int num[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        sum += num[i];
    }
    average = sum / 5;
    cout << "The sum is:" << sum << endl;
    cout << "The average is:" << average;
}