#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); // by this function we have transformed the string to lower case of s1 string
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); // by this function we have transformed the string to lower case of s1 string
    if (s1 == s2)                                           // the string comparison is done by comparing the ascii values of the characters
        cout << 0;
    else if (s1 < s2)
        cout << -1;
    else
        cout << 1;
    return 0;
}