#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, years, months, days, temp;
    cin >> n;
    years = n /365;
    temp = n % 365;
    if(temp >= 0)
    {
        months = temp / 30;
        temp = temp % 30;
    }
        days = temp;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    return 0;

    
}