# include<bits/stdc++.h>
#include<sstream>
using namespace std;
 
#define ll              long long
#define ln              "\n"
#define lp(i, n)        for (int i = 0; i < n; i++)
#define all(v)   (((v).begin()), ((v).end()))
#define sz(v)   ((int)((v).size()))
#define pb(x)   push_back(x)
#define MP    make_pair
 
const int mod = (int)(1e9 + 7);
const int mxN = 1003, oo = 0x3f3f3f3f;
 
int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt","w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s; cin>>s;
    vector<int>v;
    lp(i, s.length()){
        if(s[i]=='r') cout<<i+1<<ln;
        else v.push_back(i+1);
    }
    reverse(v.begin(),v.end());
    for(auto it:v) cout<<it<<ln;
    return 0;
}
 
 
 
 