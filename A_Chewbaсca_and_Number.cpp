#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;

    for (auto &ch : str)
    {
        if (ch > '4')
            ch = '9' - ch + '0';
    }

    if (str[0] == '0')
        str[0] = '9';

    cout << str;
    return 0;
}
