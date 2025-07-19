#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ones_count = __builtin_popcount(n);
        int result = (1 << ones_count) -1;
        cout << result << endl;
    }
    return 0;

}
