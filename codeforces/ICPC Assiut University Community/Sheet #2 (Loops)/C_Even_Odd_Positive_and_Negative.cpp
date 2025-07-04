#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count_even = 0, count_odd = 0;
    int count_positive = 0, count_negative = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
        if(arr[i] > 0)
        {
            count_positive++;
        }
        else if(arr[i] < 0)
        {
            count_negative++;
        }
    }
    cout << "Even: " << count_even << endl << "Odd: " << count_odd << endl << "Positive: " << count_positive << endl << "Negative: " << count_negative << endl;
    return 0;
}