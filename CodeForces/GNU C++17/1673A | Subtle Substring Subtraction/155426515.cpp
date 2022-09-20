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
 
string sortString(string s, int n)
{
    n = s.length();
 
    // Stores the frequency of each
    // character of the string
    vector<int> freq(256, 0);
 
    // Count and store the frequency
    for (int i = 0; i < n; i++) {
        freq[s[i]]++;
    }
 
    s = "";
 
    // Store the result
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < freq[i]; j++)
            s = s + (char)i;
    }
 
    return s;
}
 
 
 
ll sum=0;
 
int main(){
   std::ios_base::sync_with_stdio(false);
   int t;
   cin>>t;
   while(t--){
        sum=0;
        string s;
        cin>>s;
        int n = s.length();
        if (n==1){
            cout<<"Bob"<<" "<<s[0]-'a'+1<<ln;
        }else if (n%2==0){
            for(int i=0; i<n; i++){
                sum += s[i]-'a'+1;
            }
            cout<<"Alice"<<" "<<sum<<ln;
        }else{
//            string temp="";
              ll suma=0, sumb=0;
//            int t=0;
//            string x = sortString(s,n);
//            for(int i=n-1; i>0; i--){
//                for(int j=0; j<n; j++){
//                    while(x[i]==s[j]){
//                        suma += x[i]-'a'+1;
//                        t++;
//                    }
//                    if(t%2==0)
//                }
//            }
            for(int i=0; i<n-1; i++){
                suma += s[i]-'a'+1;
            }
            for(int i=1; i<n; i++){
                sumb += s[i]-'a'+1;
            }
            if(suma>sumb)
                cout<<"Alice"<<" "<<suma-(s[n-1]-'a'+1)<<ln;
            else
                cout<<"Alice"<<" "<<sumb-(s[0]-'a'+1)<<ln;
        }
   }
}