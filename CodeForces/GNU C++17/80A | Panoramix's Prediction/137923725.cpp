# include <bits/stdc++.h>
using namespace std;
 
#define lp(i, n) for(int i = 2; i < n; i++)
 
bool isprime(int x){
    if (x <= 1) return false;
    lp(i, x){
        if(x % i == 0) return false;
    }
    return true;
}
 
int main(){
    int a, b;
    cin >> a >> b;
    if (isprime(a)){
        while (a != b){
            if(isprime(a+1)){
                if(a+1 != b){
                    cout << "NO";
                    return 0;
                }
            }
            a++;
        }
        if (a == b){
            if(isprime(b)) cout << "YES";
            else cout << "NO";
            return 0;
        }
        cout << "YES";
    }
}