#include <iostream>
using namespace std;

main()
{

    string input;
    cout << "Enter array:";
    getline(cin, input);

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
        {
            continue;
        }
        cout << input[i];
    }
}
