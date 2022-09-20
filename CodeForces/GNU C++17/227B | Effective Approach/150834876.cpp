# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    ll p = 0, va = 0;
    int n;
    cin >> n;
    vector <int> v(n+1);
    for (int i = 1; i < n+1; i++){
        int y; cin >> y;
        v[y] = i;
    }
    int q; cin >> q;
    while (q--){
        int x; cin >> x;
        //auto it = find(v.begin(), v.end(), x);
        //int index = it - v.begin();
        //cout << index + 1 << " " << n - index;
        p += v[x] ;
        va += n - v[x] + 1;
    }
    cout << p << " " << va;
    return 0;
}