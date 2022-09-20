# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1005, oo = 0x3f3f3f3f;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
 
int fact(int i){
    if(i == 1 || i == 0) return 1;
    return i *= fact(i-1);
}
 
int main(){
   std::ios_base::sync_with_stdio(false);
   int p,q,l,r;
   cin>>p>>q>>l>>r;
   vector<pair<int,int>>v1(p);
   vector<pair<int,int>>v2(q);
   lp(i,p){
        int a,b; cin>>a>>b;
        v1[i] = {a,b};
   }
   lp(i,q){
        int a,b; cin>>a>>b;
        v2[i] = {a,b};
   }
   int ans=0;
   for(int i=l; i<=r; i++){
        bool f = false;
            for(int j=0; j<q; j++){
                auto it=v2[j];
                it.first+=i;
                it.second+=i;
                for(int k=0; k<p && !f; k++){
                    if(v1[k].first <= it.second && v1[k].second >= it.first){ans++; f=true;}
                }
            }
    }
    cout << ans;
}