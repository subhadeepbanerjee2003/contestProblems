#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                count = abs(2 - i) + abs(2 - j); // abs is used to find the absolute value of the difference or it works as mod function in mathematics
                cout << count;
                return 0;
            }
        }
    }
}