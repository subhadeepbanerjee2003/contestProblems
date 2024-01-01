#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a = 50;
 int *ptr = &a;
 cout << ++(*ptr) << ends;
 cout << a << endl;
return 0;
}