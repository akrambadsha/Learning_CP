#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    bool found = false;
    for(int i=A; i<=B; i++)
    {
        string s = to_string(i);
        bool l = true;
        for(char x : s)
        {
            if(x != '4' && x != '7')
            {
                l = false;
                break;
            }
        }
        if(l)
        {
            cout << i << " ";
            found = true;
        }
    }
    if(!found)
    {
        cout << -1 << endl;
 
    }
    return 0;
    
}