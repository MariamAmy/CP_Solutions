# include<bits/stdc++.h>
#include<sstream>
using namespace std;
 
#define ll              long long
#define ln              "\n"
#define lp(i, n)        for (int i = 0; i < n; i++)
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define pb(x)   push_back(x)
#define MP    make_pair
 
const int mod = (int)(1e9 + 7);
const int mxN = 5005, oo = 0x3f3f3f3f;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
//printf("%0.6f\n",x)
 
ll fact(ll i){
    if(i == 1 || i == 0) return 1;
    i %= mod;
    return i *= fact(i-1);
}
ll llog(ll a, ll b){
    return log2(a) / log2(b);
}
ll gcd(ll a, ll b){ // a > b
    if(a==0) return b;
    return gcd(b%a, a);
}
 
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f=false;
    int n; cin>>n;
    vector<vector<int>>v(mxN);
    lp(i,2*n){
        int x; cin>>x;
        v[x].push_back(i+1);
    }
    lp(i,mxN){
        if(v[i].size()%2!=0){
            f=true;
            break;
        }
    }
    if(f) cout<<-1<<ln;
    else{
        lp(i,mxN){
            if(v[i].size()!=0){
                for(int j=0; j<v[i].size()-1; j+=2){
                    cout<<v[i][j]<<" "<<v[i][j+1]<<ln;
                }
            }
        }
    }
    return 0;
}
 
 
 
 