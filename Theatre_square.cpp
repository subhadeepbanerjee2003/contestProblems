#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int x = n / a; // minimum number of flagstones required in length
    long long int y = m / a; // minimum number of flagstones required in breadth
    if (n % a != 0)
    {
        x++; // if n is not divisible by a then we need one more flagstone -> extra flagstone case
    }
    if (m % a != 0)
    {
        y++; // if n is not divisible by a then we need one more flagstone -> extra flagstone case
    }
    cout << x * y << endl; // total number of flagstones required -> final calculation
    return 0;
}