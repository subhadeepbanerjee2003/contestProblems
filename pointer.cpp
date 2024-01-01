#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=20;// declaring an integer variable
    cout<<&a<<endl;
    int *ptr;//declaring a pointer variable
    ptr=&a; // assigning the address of a(int type) to ptr
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    a++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

return 0;
}