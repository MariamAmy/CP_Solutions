#include <bits/stdc++.h>
 
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
 
int main(){
    int n;
    cin >> n;
    map <int, int> mp;
    lp(i, n){
        int x;
        cin >> x;
        mp[x] = i+1;
    }
    lp(i, n){
        cout << mp[i+1] << " ";
    }
}