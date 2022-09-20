# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1e5+5;
//ll a[mxN];
//ll ans = 0;
 
bool cmp(int x, int y){
    return x>y;
}
 
int main(){
    //won't work in all cases
//    bool f=false;
//    int n,s,e,c=0; cin >> n;
//    int a[n+5];
//    lp(i, n)
//        cin >> a[i];
//    if(is_sorted(a,a+n)){
//        cout << 1 << " " << 1;
//        return 0;
//    }else if(is_sorted(a,a+n,cmp)){
//        cout << 1 << " " << n;
//        return 0;
//    }else{
//        lp(i, n){
//            if(!f){
//                int j=i;
//                while(j+1<n && a[j+1]<a[j]){
//                    s=i;
//                    f=true;
//                    j++;
//                    e=j+1;
//                }
//            }else cout << "no";
//        }
//    }
    int n; cin >> n;
    vector<ll>a(n);
    lp(i,n)
        cin >> a[i];
    vector<ll>b=a;
    sort(b.begin(),b.end());
    int mn=n+1, mx=0;
    lp(i,n){
        if(a[i] != b[i]){
            mn = min(mn, i);
            mx = max(mx, i);
        }
    }
    if(mx==0) mn=mx=0;
    else{
        for(int i = mn; i <= (mn+mx)/2; i++)
            swap(a[i], a[mx-(i-mn)]);
        if(a==b){
            cout << "yes" << ln << mn+1 << " " << mx+1;
            return 0;
        }else cout << "no"; return 0;
    }
    cout << "yes" << ln << mn+1 << " " << mx+1;
}