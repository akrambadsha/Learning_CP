#include<bits/stdc++.h>
using namespace std;
int main()
 
{
    long long x, y;
    cin >> x >> y;
    int sum = x + y;
    long long multi = x * y;
    int sub = x - y;
    
    cout << x << " + " << y << " = " << sum << '\n' << x << " * " << y << " = " << multi << '\n' << x << " - " << y << " = " << sub << '\n';
    return 0;
}