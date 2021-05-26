#include <iostream>
using namespace std;

int main()
{
    string str[10], t;

    cout << "Enter 5 words: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        getline(cin, str[i]);
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4 - i; ++j)
        {
            if (str[j] > str[j + 1])
            {
                t = str[j];
                str[j] = str[j + 1];
                str[j + 1] = t;
            }
        }
    }

    cout << "In lexicographical order: " << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << str[i] << endl;
    }
    return 0;
}
