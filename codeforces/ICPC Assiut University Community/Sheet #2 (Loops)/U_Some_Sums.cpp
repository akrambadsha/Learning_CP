#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, fast, temp, sumOfD, aSum = 0;
    cin >> n >> a >> b;
    for(int i=1; i<=n; i++)
    {
        sumOfD = 0;
        temp = i;
        while(temp > 0)
        {
            fast = temp % 10;
            sumOfD += fast;
            temp /= 10;
        }
        if(sumOfD >= a && sumOfD <= b)
        {
            aSum += i;
        }
    }
    cout << aSum << endl;
    return 0;

}