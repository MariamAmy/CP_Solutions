# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1e5+5;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
//
//set<pair<int,int>> points;
 
int main(){
   std::ios_base::sync_with_stdio(false);
 
   int n, m;
   cin >> n >> m;
   queue<int>g;
   lp(i,n){
        int x; cin>>x;
        g.push(x);
   }
   int c=0;
   while(!g.empty()){
        int t=m;
        int x=g.front();
        while(x<=t){
            g.pop();
            t-=x;
            if(!g.empty()) x=g.front();
            else break;
        }
        c++;
   }
   cout << c;
}