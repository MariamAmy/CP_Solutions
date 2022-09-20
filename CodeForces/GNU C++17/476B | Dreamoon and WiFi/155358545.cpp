# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1005, oo = 0x3f3f3f3f;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
 
int fact(int i){
    if(i == 1 || i == 0) return 1;
    return i *= fact(i-1);
}
 
int main(){
   //std::ios_base::sync_with_stdio(false);
   char a[13], b[13];
   scanf("%s%s", a, b);
 
   int rp = 0;
   lp(i,strlen(a))
       rp += (a[i]=='+'? 1:-1);
 
   int p = 0, g = 0;
   lp(i,strlen(b)){
       if(b[i]=='?') g++;
       else p += (b[i]=='+'? 1:-1);
   }
   int d = rp - p;
   double ans;
   if(g<abs(d) || (d+g)&1) ans = 0;
   else{
        int r = (g+abs(d))/2;
        int c = fact(g) / (fact(r)*fact(g-r));
        ans = (double) c/(1<<g);
   }
   printf("%.9f", ans);
}