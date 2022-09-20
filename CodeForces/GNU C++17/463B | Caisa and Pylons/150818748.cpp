# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    int n, d = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int e = 0;
    d += a[0];
    for (int i = 0; i < n-1; i++){
        if ( e >= a[i+1] - a[i]){
            //d += a[i+1] - a[i];
            e -= a[i+1] - a[i];
        }else{
            d += (a[i+1] - a[i]) - e;
            e = 0;
        }
    }
    cout << d;
 
 
    return 0;
}