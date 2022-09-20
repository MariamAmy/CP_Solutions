# include<bits/stdc++.h>
using namespace std;
 
int main(){
    int  x, c = 0; cin >> x;
    while (x != 0){
        c += x %2;
        x /= 2;
    }
    cout << c;
}