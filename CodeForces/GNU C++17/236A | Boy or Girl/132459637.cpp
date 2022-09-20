#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
    string a;
    vector<char> temp;
    cin >> a;
    int c=0;
    for (int i = 0; i < a.size(); i++) {
      auto it = find(temp.begin(), temp.end(), a[i]);
      if (it == temp.end()){
        for (int j=i+1; j< a.size(); j++){
            if (a[i]==a[j]){
                c++;
                temp.push_back(a[i]);
            }
 
        }
      }
    }
    if ((a.size()-c)%2!=0) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
 
return 0;
}