#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d, left, right;
    cin >> a >> b >> c >> d;
    left = b * log(a);
    right = d * log(c);
    if( left > right)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    return 0;
}