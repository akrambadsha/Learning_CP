#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, sum = 0;
        cin >> x >> y;
        if(x > y)
        {
            swap(x, y);
        }
        for(int i= x+1; i<y; i++)
        {
            if(i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}