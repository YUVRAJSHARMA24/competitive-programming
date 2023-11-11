#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int maxi = 0, mini = 0;

    if (x > z && x > y)
    {
        maxi = x;
        if (z > y)
        {
            mini = y;
        }
        else
        {
            mini = z;
        }
    }
    else if (y > x && y > z)
    {
        maxi = y;
        if (x > z)
        {
            mini = z;
        }
        else
        {
            mini = x;
        }
    }
    else if (z > x && z > y)
    {
        maxi = z;
        if (x > y)
        {
            mini = y;
        }
        else
        {
            mini = x;
        }
    }

    cout << maxi - mini;
    return 0;
}