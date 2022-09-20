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
 
   string s; cin >> s;
   //swap(s[0], s[])
   int n; cin >> n;
//   lp(i, n){
//       for(int i=0; i<(int)s.length(); i++){
//            if(i+1<(int)s.length() && s[i] < s[i+1]){
//                swap(s[i+1], s[i]);
//                break;
//            }
//       }
//   }
 
   for(int i = 0; i < (int)s.length(); i++){
        bool f = false;
        int ndx=-1;
        int mx=s[i];
        int swaps=0;
        for(int j=i+1; j<(int)s.length(); j++){
            if(s[j]>mx && n-(j-i) >= 0){
                f=true;
                ndx=j;
                mx=s[j];
                swaps=j-i;
            }
        }
        if(f){
            n-=swaps;
            for(int k=ndx; k>i; k--)
                swap(s[k], s[k-1]);
        }
   }
   cout << s;
}