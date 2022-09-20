# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
 
int main(){
    int n, m, c = 0, t = 0, sum =0;
    cin >> n >> m;
    vector < pair <int, int> > v (m);
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
         c += x;
         t += x*y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), sortbysec);
 
//    for (int i=0; i<m; i++)
//    {
//        // "first" and "second" are used to access
//        // 1st and 2nd element of pair respectively
//        cout << v[i].first << " "
//             << v[i].second << endl;
//    }
    if (n > c){
        cout << t;
        return 0;
    }
    while(n){
        for (int i = 0; i < m; i++){
            if (n <= v[i].first){
                sum += n * v[i].second;
                cout << sum;
                return 0;
            }else{
                sum += v[i].first * v[i].second;
                n -= v[i].first;
            }
        }
 
    }
    return 0;
}