#include<bits/stdc++.h>
using namespace std;
int main()
{
  double a, b, f, c, r; 
  cin >> a >> b ;
  f = floor(a / b);
  c = ceil(a / b);
  r = round(a / b);
  cout << "floor " << a << " / " << b << " = " << f << endl ;
  cout << "ceil " << a << " / " << b << " = " << c << endl ;
  cout << "round " << a << " / " << b << " = " << r << endl ; 
  return 0;

}