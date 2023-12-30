#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    int count = 0;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= l)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}