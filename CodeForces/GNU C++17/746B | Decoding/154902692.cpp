# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7), mxN = 1e5 + 5, mxM = 1e5 + 5;
//
//int dx[4] = {1, 0, -1, 0};
//int dy[4]= {0, 1, 0, -1};
//char dir[4] = {'D', 'R', 'U', 'L'};
//vector <vector<int>> v;
//vector <bool> vis;
//vector <int> p;
//int n, m, fn, fp;
// y[mxN], z[mxN];
 
// The encoding
//int main(){
//    int n;
//    cin >> n;
//    string s, ans = "";
//    cin >> s;
//    while(n!=0){
//        if (n%2 == 1){
//            ans += s[n/2];
//            s.erase(s.begin() + (n/2));
//        }else{
//            ans += s[n/2 - 1];
//             s.erase(s.begin() + (n/2 - 1));
//        }
//        n--;
//    }
//    ans += s;
//    cout << ans;
//}
// The Decoding
int main(){
//    int n, i=0, j=0;
//    cin >> n;
//    int b = 0, e = n-1;
//    string s;
//    vector<char>ans(n);
//    cin >> s;
//    reverse(s.begin(), s.end());
//    while(s.size() && j!=(n-j-1)){
//        ans.insert(ans.begin()+(n-j-1), s[i]);
//        if (i+1 < n) ans.insert(ans.begin()+j, s[i+1]);
//        s.erase(s.begin()+i);
//        if(i+1 < n) s.erase(s.begin()+i+1);
//        i+=2;
//        j++;
//    }
//    for (auto it : ans)
//        cout << it;
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i+=2){
        v.push_back(s[i]);
    }
    if (n%2 == 1){
        for (int i = n-2; i > 0; i-=2){
            v.push_back(s[i]);
        }
    }else{
        for (int i = n-1; i > 0; i-=2){
            v.push_back(s[i]);
        }
    }
    for(auto it = v.end()-1; it >= v.begin(); it--){
        cout  << *it;
    }
}