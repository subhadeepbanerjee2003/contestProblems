#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    cout << count;

    return 0;
}