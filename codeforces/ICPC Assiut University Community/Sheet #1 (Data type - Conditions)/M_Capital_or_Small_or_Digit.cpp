#include<bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;
    if ((X>='A') && (X<='Z'))
    {
        cout << "ALPHA\nIS CAPITAL";
    }
    else if ((X>='0') && (X<='9'))
    {
        cout << "IS DIGIT";
    }
    if (( X>='a' ) && (X<='z'))
    {
        cout <<  "ALPHA\nIS SMALL";
    }
    return 0;

}