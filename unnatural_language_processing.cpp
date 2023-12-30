#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s; string ans;
        cin>>s;
        cout<<s[0];
        for(int i=1;i<n;i++){
            if((s[i]=='b'||s[i]=='c'||s[i]=='d')&&(s[i+1]=='a'||s[i+1]=='e')){ // CV  or CVC come together then . will be printed otherwise the char
                cout<<".";
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;
        
    }
return 0;
}