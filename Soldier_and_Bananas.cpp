#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int t = (w * (w + 1)) / 2;
    if ((t * k) > n)
    {
        cout << (t * k) - n << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}