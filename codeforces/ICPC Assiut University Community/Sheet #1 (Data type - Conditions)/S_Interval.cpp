#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    if(25 < x && x <= 50)
    {
        cout << "Interval (25,50]" << endl;
    }
    else if(50 < x && x <=75)
    {
        cout << "Interval (50,75]" << endl;
    }
    else if(0 <= x && x <= 25)
    {
        cout << "Interval [0,25]" << endl;
    }
    else if(75 < x && x <= 100)
    {
        cout << "Interval (75,100]" << endl;
    }
    else
    {
        cout << "Out of Intervals" << endl;
    }
    return 0;
}