#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    string s;
    cin >> a >> s >> b;
    if((a > b && s == ">") || (a < b && s == "<") || (a == b && s == "="))
    {
        cout << "Right" << endl;
    }
    else 
    {
        cout << "Wrong";
    }
    return 0;
   
    
}