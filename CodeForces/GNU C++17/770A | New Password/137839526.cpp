#include <bits/stdc++.h>
 
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
 
int main(){
    int n, k, j = 0;
    cin >> n >> k;
    char c = 'a';
    lp(i, n){
        cout << c;
        c++;
        j++;
        if(j == k){c = 'a'; j = 0;}
    }
}