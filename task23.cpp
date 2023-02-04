#include <iostream>
using namespace std;

main()
{

    string input;
    cout << "Enter array:";
    getline(cin, input);
    cout << "something ";
    for (int i = 0; input[i] != '\0'; i++)
    {
        cout << input[i];
    }
}
