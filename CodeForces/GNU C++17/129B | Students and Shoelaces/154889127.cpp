# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7), mxN = 1e5 + 5, mxM = 1e5 + 5;
 
int dx[4] = {1, 0, -1, 0};
int dy[4]= {0, 1, 0, -1};
char dir[4] = {'D', 'R', 'U', 'L'};
//vector <vector<int>> v;
//vector <bool> vis;
//vector <int> p;
//int n, m, fn, fp;
 
int main(){
    int n, m, a, b, g = 0;
    cin >> n >> m;
    vector<set<int>> v(n);
    //vector<int> ans;
    while (m--){
        cin >> a >> b, --a, --b;
        v[a].insert(b);
        v[b].insert(a);
    }
    while(1){
        vector<int>ans;
        for (int i = 0; i < n; i++)
            if (v[i].size() == 1)
                ans.push_back(i);
        for (int i = 0; i < (int)ans.size(); i++){
            auto it = v[ans[i]].begin();
            v[ans[i]].clear();
            v[*it].erase(ans[i]);
        }
        if (!ans.empty())
            g++;
        else break;
    }
    cout << g << endl;
}