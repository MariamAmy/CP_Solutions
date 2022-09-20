# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1005, oo = 0x3f3f3f3f;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
 
ll sum=0;
 
int main(){
   std::ios_base::sync_with_stdio(false);
   int n; cin >> n;
   vector<ll>v(n);
   lp(i,n)
    cin>>v[i];
   sort(v.begin(), v.end());
   for(int i=1; i<n-1; i++){
        if(max((v[i]+v[i-1]), v[i+1]) > v[i+1]){
            cout<<"YES";
            return 0;
        }
   }
   cout<<"NO"<<ln;
}