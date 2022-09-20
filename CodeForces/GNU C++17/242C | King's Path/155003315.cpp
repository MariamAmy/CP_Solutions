# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1e5+5;
vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
 
set<pair<int,int>> points;
 
int main(){
   std::ios_base::sync_with_stdio(false);
 
   int x0, y0, x1, y1, n;
   cin >>x0>>y0>>x1>>y1>>n;
   lp(i,n){
        int r,a,b;
        cin>>r>>a>>b;
        for(int j=a; j<=b; j++){
            points.insert({r,j});
        }
   }
   map<pair<int,int>, int> d;
   queue<pair<int,int>> q;
   pair<int,int> cur={x0,y0};
 
   q.push(cur);
   d[cur]=0;
   int dep=0, sz=1;
   for(; !q.empty(); ++dep, sz=q.size()){
        while(sz--){
            cur=q.front();
            q.pop();
            for(auto it:moves){
                int ni = cur.first + it.first;
    int nj = cur.second + it.second;
    pair<int,int> np={ni, nj};
 
    if(!points.count(np) || d.count(np)!=0) continue;
 
    q.push(np);
    d[np] = dep+1;
 
    if (np.first == x1 && np.second == y1) {
     cout << dep + 1;
     return 0;
    }
            }
        }
   }
   cout << -1;
}