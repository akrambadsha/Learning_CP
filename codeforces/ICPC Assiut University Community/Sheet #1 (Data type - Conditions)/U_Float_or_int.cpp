#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    double b = stod(n);
    int x = floor(b);
    double a = (b - x);
    if (a == 0)
    {
        cout << "int" << " " << x << endl;
    }
    else
    {
        cout << "float" << " " << x << " " << fixed << setprecision(3) << a << endl;
    }
    return 0;
}