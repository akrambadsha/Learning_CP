#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >>a>>s>>b;
    
    if(s =='+')
    {
        int ans=a+b;
        cout << ans << endl;
    }
    else if(s =='-')
    {
        int ans=a-b;
        cout << ans << endl;
    }
    else if(s =='*')
    {
        int ans=a*b;
        cout << ans << endl;
    }
    else if(s =='/')
    {
        int ans=a/b;
        cout << ans << endl;
    }
    else 
    {
        cout << "Wrong input";
    }
}