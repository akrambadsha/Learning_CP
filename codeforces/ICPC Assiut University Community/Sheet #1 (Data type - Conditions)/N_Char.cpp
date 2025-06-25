#include<bits/stdc++.h>
using namespace std;

int main()
{
    char X,C;
    cin >> X;
    if ((X>= 'a') && (X<= 'z'))
    {
        C= X-32;
        cout << C << endl;
    }
    else if ((X>= 'A') && (X<= 'Z'))
    {
        C= X+32;
        cout << C << endl;
    }
    else
    {
        cout << "Not English Letter";
    }
    return 0;
}