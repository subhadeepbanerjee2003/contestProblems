#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6] = {1, 2, 3};
    int *b = a;
    cout << b[2]; // 3 output

    /*int r[] = {1, 2, 3, 4};
    int *p = r++;                       // here error will come because we cannot increament array like that
    cout << *p << endl;*/

    char t[] = "xyz";
    char *c = &t[0];
    cout << c << endl; // xyz output

    char l[] = "xyz";
    char *c = &l[0];
    c++;
    cout << c << endl; // yz output

    return 0;
}