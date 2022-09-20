#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    long long a[n+5];
    for (int i =0; i < n; i++){
        cin >> a[i];
    }
    cout << abs(a[0] - a[1]) << " " << abs(a[0] - a[n-1]) << endl;
    for (int i = 1; i <n; i++){
      if (abs(a[i] - a[i-1]) < abs(a[i] - a[i+1])) cout << abs(a[i] - a[i-1]) << " ";
      else  cout << abs(a[i] - a[i+1]) << " ";
      if (abs(a[i] - a[0]) > abs(a[i] - a[n-1])) cout << abs(a[i] - a[0]) << " ";
      else  cout << abs(a[i] - a[n-1]) << " ";
      cout << endl;
    }
 
}