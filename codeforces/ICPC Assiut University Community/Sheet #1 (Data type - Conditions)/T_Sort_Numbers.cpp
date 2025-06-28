#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[3];
    cin >>n[0]>>n[1]>>n[2];
    int arr[3]={n[0],n[1],n[2]};

    sort(arr, arr + 3);

    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << n[i] << endl;
    }
    return 0;

}