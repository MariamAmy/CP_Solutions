# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1e5+5;
//ll a[mxN];
//ll ans = 0;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}};
//set<char>ans;
//vector<string>v;
//int n, m; char c;
//void valid(int i, int j){
//    for(auto it:moves){
//        int ni = i+it.first, nj = j+it.second;
//        if(ni<n && nj<m && ni>=0 && nj>=0 && v[ni][nj]!='.' && v[ni][nj]!=c){
//            ans.insert(v[ni][nj]);
//            ni=i;
//            nj=j;
//        }
//    }
//}
 
int main(){
    string s;
    cin >> s;
    cout << s;
    reverse(s.begin(), s.end());
    cout << s;
}