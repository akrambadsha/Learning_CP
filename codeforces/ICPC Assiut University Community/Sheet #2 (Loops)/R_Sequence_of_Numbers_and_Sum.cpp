#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        if(n <= 0 || m <= 0)
        {
            break;
        }
        int a = max(n,m);
        int b = min(n,m);
        int sum = 0;
        for(int i=b; i<=a; i++)
        {
          cout << i << " ";
          sum = sum + i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}