#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; // length of string
        int a[n]; // array of length n for storing index where operation has to be performed
        string s;
        cin >> s;
        int t = 0;
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
                swap(s[i], s[i + 1]);
                count++;
            }
            else
            {
                a[t++] = i;
            }
        }

        cout << count << endl;
    }
    return 0;
}