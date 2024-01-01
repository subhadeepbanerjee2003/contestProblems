#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr = 0; // Initializing to null pointer (potential issue)
    int a = 10;
    *ptr = a; // Assigning the address of 'a' to the pointer
    cout << *ptr << endl;

    return 0;
}