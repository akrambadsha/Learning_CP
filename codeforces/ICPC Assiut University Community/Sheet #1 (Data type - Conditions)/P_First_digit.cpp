#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int first_digit= x;

    while(first_digit >= 10)
    {
       first_digit /=10;  
    }
    
    if(first_digit % 2 == 0)
    {
        cout <<"EVEN" << endl;
    }
    else
    {
        cout <<"ODD" << endl;
    }
    return 0;


}