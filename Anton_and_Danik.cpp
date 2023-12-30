#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    int c1 = 0, c2 = 0; // c1 for anton and c2 for danik
    int ln = s.length();
    for (int i = 0; i < ln; i++)
    {
        if (s[i] == 'A')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if (c1 > c2)
    {
        cout << "Anton";
    }
    else if (c1 == c2)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }
    return 0;
}