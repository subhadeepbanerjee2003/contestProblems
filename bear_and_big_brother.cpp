#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int y = 1;
    while (y > 0) // y is year which will increase untill the condition satisfies
    {
        if (a * 3 > b * 2) // a=4 , b=7
        {
            cout << y;
            return 0;
        }
        y++;
        a = a * 3; // 12
        b = b * 2; // 14
    }
    /*
    int a, b;
    cin >> a >> b;
    int c = 3 * a;
    int d = 2 * b;
    int y = 1;

    while (c <= d)
    {
        c *= 3;
        d *= 2;
        y++;
    }

    cout << y;*/
}