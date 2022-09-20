# include <bits/stdc++.h>
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
 
int large(long long int n)
{
    int l = 0;
    while(n){
        int r = n % 10;
        l = max(r, l);
        n = n / 10;
    }
    return l;
}
 
int small(long long int n)
{
    if(n == 0) return n;
    int s = 9;
    while(n){
        int r = n % 10;
        s = min(r, s);
        n = n / 10;
    }
    return s;
}
 
 
bool countDigit(int n, int y)
{
    set <int> s;
    while(n != 0){
        int r = n % 10;
        if(r <= y) s.insert(r);
        n /= 10;
    }
    return (s.size() == y + 1);
 
}
 
int main(){
 
    int n, k, c = 0;
    cin >> n >> k;
    long long x;
    lp(i, n){
        cin >> x;
        if(countDigit(x, k)) c++;
    }
    cout << c;
}