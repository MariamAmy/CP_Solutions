# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
 
int main(){
    int n, m, c = 0, x = 0;
    cin >> n >> m;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    x = count(v.begin(), v.end(), 1);
    if (m == 1 || m == n){ // || count(v.begin() + m, v.end(), 1) == 0 || count(v.begin(), v.begin() + m, 1) == 0){
        cout << x;
        return 0;
    }else if (count(v.begin(), v.end(), 1) == 1){
        cout << 1;
        return 0;
    }else{
        if (v[m-1] == 1) c++;
        int cur = m, a, p, t = 1;
        for (int i = cur; i < 2*n; i++){
            if ((i - 1 - t) >= 0 && v[i - 1 - t] == 1 && i >= n) c++;
            if ((i - 1 - t) < 0 && v[i] == 1) c++;
            if ( i < n && v[i] == 1 && v[i-1 - t] == 1 && (i - 1 - t) >= 0){
                c += 2;
            }
            t+=2;
        }
        cout << c;
    }
    return 0;
}