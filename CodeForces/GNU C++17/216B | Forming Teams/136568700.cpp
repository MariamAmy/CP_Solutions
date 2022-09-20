#include <bits/stdc++.h>
 
using namespace std;
 
#define REP(i, n)  for(int i = 0; i < n; ++i)
 
vector<vector<int>> graph;
bool visited[101];
 
bool dfs(int cur, int par, int &cnt){
    if (visited[cur]) return 1;
    visited[cur] = 1;
    for (auto child : graph[cur]) if (child != par){
        cnt++;
        if (dfs(child, cur, cnt) == 1)  return 1;// check by if condition if the child is visited and if so return 1
    }
    return 0;
}
 
int main(){
    int n, m;
    cin >> n >> m;
    graph = vector<vector<int>>(n);
    REP (i, m){
        int x, y;
        cin >> x >> y;
        x--; y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int ans = 0;
    REP(i, n) if(!visited[i]){
            int c = 0;
            int s = dfs(i, -1, c);
            if(s == 1){
                ans += (c % 2 != 0);
            }
        }
    if((n - ans) % 2 != 0) ans++;
    cout << ans;
}