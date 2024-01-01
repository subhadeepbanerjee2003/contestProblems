#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a = 50;
 cout << a  << endl;
 int *ptr = &a;
 cout << ptr  << endl;
 cout << *ptr  << endl;
 int *q = ptr;
 cout << q  << endl;
cout << *q  << endl;
 (*q)++;
 cout << a  << endl;
return 0;
}