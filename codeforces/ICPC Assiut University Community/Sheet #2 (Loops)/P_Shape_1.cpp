#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
for(int col=n; col>=1; col--)
{
    for(int row=1; row<=col; row++)
    {
        cout << "*";
    }
    cout << endl;
}
return 0;
}