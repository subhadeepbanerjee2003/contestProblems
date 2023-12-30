#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long arr; // long long is used because the input can be very large long long int is not used because it is not supported by some compilers
    cin >> arr;
    int count = 0;
    while (arr != 0)
    {

        if (arr % 10 == 7 || arr % 10 == 4)
        {
            count++;
        }
        arr = arr / 10;
    }
    if (count == 7 || count == 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
