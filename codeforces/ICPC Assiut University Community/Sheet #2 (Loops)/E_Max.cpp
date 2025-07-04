#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,num;
    cin >> x;
    long long arr[x];
    for (int i=0; i<x; i++)
    {
        cin >> arr[i];
    }
    num =arr[0];
    for (int i=1; i<x; i++)
    {
        if(arr[i] > num)
        {
            num = arr[i];
        }
    }
    cout << num;
    return 0;


}