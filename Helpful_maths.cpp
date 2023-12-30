/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int one = 0, two = 0, three = 0;
    for (char ch : s) // here we are choosing each character of string s
    {
        if (ch == '1')
            one++;
        else if (ch == '2')
            two++;
        else if (ch == '3')
            three++;
    }
    string temp = "";
    for (int i = 0; i < one; i++)
    {
        temp = temp + '1' + '+';
    }
    for (int i = 0; i < two; i++)
    {
        temp = temp + '2' + '+';
    }
    for (int i = 0; i < three; i++)
    {
        temp = temp + '3' + '+';
    }
    for (int i = 0; i < temp.length() - 1; i++)
    {
        cout << temp[i];
    }
    cout << endl;
}*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    string st;
    cin >> st;
    vector<int> ans;
    string result = "";
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] != '+')
            ans.push_back(st[i] - 48);
    }
    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size() - 1; i++)
        result += to_string(ans[i]) + '+';
    result += to_string(ans[ans.size() - 1]);
    cout << result;
    return 0;
}