#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    long long int fast = a[0];
    int b=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]<fast)
        {
            fast=a[i];
            b=i;
        }
    }
 cout << fast << " " << b + 1 <<endl;
}