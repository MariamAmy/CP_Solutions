#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k, c = 0;
    cin >> n >> k;
    int a[2*n+1];
    for (int i = 0; i < 2*n+1; i++){
        cin >> a[i];
    }
    for(int i = 1; i < 2*n+1; i+=2 ){
        if (k>0 && a[i]-1 > a[i-1] && a[i]-1 > a[i+1]){
            a[i]--;
            k--;
        }
    }
    for (int i = 0; i < 2*n+1; i++){
        cout << a[i] << " ";
    }
}