#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, fast;
    cin >> n;
    fast = n * 4;
    for (int i=1; i <= fast; i++ )
    {
        if(i % 4 == 0)
        {
           cout << "PUM" << endl;
        }
        else 
        {
             cout << i << " ";
        }
    }
    return 0;

}
