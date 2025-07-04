#include<bits/stdc++.h>
using namespace std;
int main()
{
    const int password = 1999;
    int x;
    while(cin >> x)
    {
    if(x == password)
    {
        cout << "Correct" << endl;
        return 0;
    }
    else
    {
        cout << "Wrong" << endl;
    }
    }
    return 0;
}