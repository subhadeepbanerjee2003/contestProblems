/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ch;
    int ln = s.length();
    int u = 0, l = 0;
    for (int i = 0; i < ln; i++)
    {
        if (isupper(s[i]))
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u > l)
    {
        for (int i = 0; i < ln; i++)
        {

            // convert str[i] to uppercase
            ch = toupper(s[i]);

            cout << ch;
        }
    }
    else
    {
        for (int i = 0; i < ln; i++)
        {

            // convert str[i] to uppercase
            ch = tolower(s[i]);

            cout << ch;
        }
    }
    return 0;
}*/

// 2nd approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ch;
    int ln = s.length();
    int u = 0, l = 0;
    for (int i = 0; i < ln; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u > l)
    {
        for (int i = 0; i < ln; i++)
        {

            // convert str[i] to uppercase
            ch = toupper(s[i]);

            cout << ch;
        }
    }
    else
    {
        for (int i = 0; i < ln; i++)
        {

            // convert str[i] to uppercase
            ch = tolower(s[i]);

            cout << ch;
        }
    }
    return 0;
}
