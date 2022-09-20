# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
 
    string a = "ROY", b = "GBIV";
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n - 3; i++){
         a += b[i % 4];
    }
    cout << a;
 
    return 0;
}