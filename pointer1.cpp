#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a = 50;
 int *ptr = &a;
 int *q = ptr;
 (*q)++;
 cout << a  << endl;
return 0;
}