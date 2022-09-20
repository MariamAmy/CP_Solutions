//# include<bits/stdc++.h>
//using namespace std;
//
//#define ll              long long int
//#define ln              "\n"
//#define lp(i, n)        for (int i = 0; i < n; i++)
//#define all(v)   ((v).begin()), ((v).end())
//#define sz(v)   ((int)((v).size()))
//#define pb       push_back
//#define MP    make_pair
//
//const int mod = (int)(1e9 + 7);
//const int mxN = 1005, oo = 0x3f3f3f3f;
////vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
//
//ll fact(ll i){
//    if(i == 1 || i == 0) return 1;
//    i %= mod;
//    return i *= fact(i-1);
//}
//
//ll llog(ll a, ll b){
//    return log2(a) / log2(b);
//}
//
//ll gcd(ll a, ll b){
//    if(b==0) return a;
//    return gcd(b, a%b);
//}
//
//ll power(ll b, ll p, ll m){   // O(log(p) base 2)
// if(p == 0) return 1;
// ll sq = power(b, p/2, m);
// sq = (sq*sq) % m;
// if(p%2 == 1)
//  sq = (sq*b) % m;
// return sq%m;
//}
//
//// Very important function
//int FactN_PrimePower(int n, int p){  // O(log(n) base p)
//    int pow = 0;
//    for(int i = p; i <= n ; i = i * p)
//     pow += n/i;
//    return pow;
//}
//
//ll sumPows(ll a, int k){ // Return a^1+a^1+a^2+.....a^k in O(k)
// if (k == 0)
//  return 0;
// if (k % 2 == 1)
//  return a * (1 + sumPows(a, k - 1));
// ll half = sumPows(a, k / 2);
// return half * (1 + half - sumPows(a, k / 2 -1) );
//}
//
//int main(){
//    std::ios_base::sync_with_stdio(false);
//    //int t; cin>>t;
//    ll n,m;
//    ll a[101][101]; //pascal_triangle
//    a[1][0] = a[1][1] = 1;
//    for(int i=2; i<101; i++){
//        a[i][0] = 1;
//        for(int j=1; j<101; j++){
//            a[i][j] = a[i-1][j] + a[i-1][j-1];
//        }
//    }
//    while(cin>>n>>m){
//        if(!n && !m) return 0;
//        cout << n << " things taken " << m << " at a time is " << a[n][m] << " exactly." << ln;
////        ll d=n-m;
////        if(d>m){
////            ll c = fact(n) / (fact(d)*fact(n-d));
////            cout << n << " things taken " << m << " at a time is " << c << " exactly." << ln;
////        }
////        else{
////            ll c = fact(n) / (fact(m)*fact(n-m));
////            cout << n << " things taken " << m << " at a time is " << c << " exactly." << ln;
////        }
//    }
//}
//
//---------------------------------------------------------------------------------------------------------------
//
//# include<bits/stdc++.h>
//using namespace std;
//
//#define ll              long long int
//#define ln              "\n"
//#define lp(i, n)        for (int i = 0; i < n; i++)
//#define all(v)   ((v).begin()), ((v).end())
//#define sz(v)   ((int)((v).size()))
//#define pb       push_back
//#define MP    make_pair
//
//const int mod = (int)(1e9 + 7);
//const int mxN = 1005, oo = 0x3f3f3f3f;
////vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
//
//ll llog(ll a, ll b){
//    return log2(a) / log2(b);
//}
//
//ll gcd(ll a, ll b){
//    if(b==0) return a;
//    return gcd(b, a%b);
//}
//
//ll power(ll b, ll p, ll m){   // O(log(p) base 2)
// if(p == 0) return 1;
// ll sq = power(b, p/2, m);
// sq = (sq*sq) % m;
// if(p%2 == 1)
//  sq = (sq*b) % m;
// return sq%m;
//}
//
//// Very important function
//int FactN_PrimePower(int n, int p){  // O(log(n) base p)
//    int pow = 0;
//    for(int i = p; i <= n ; i = i * p)
//     pow += n/i;
//    return pow;
//}
//
//ll sumPows(ll a, int k){ // Return a^1+a^1+a^2+.....a^k in O(k)
// if (k == 0)
//  return 0;
// if (k % 2 == 1)
//  return a * (1 + sumPows(a, k - 1));
// ll half = sumPows(a, k / 2);
// return half * (1 + half - sumPows(a, k / 2 -1) );
//}
//
//int main(){
//    std::ios_base::sync_with_stdio(false);
//    //int t; cin>>t;
//    ll b,p,m;
//    while(cin>>b>>p>>m){
//        cout<<power(b,p,m);
//    }
//}
//
//# include<bits/stdc++.h>
//using namespace std;
//
//#define ll              long long int
//#define ln              "\n"
//#define lp(i, n)        for (int i = 0; i < n; i++)
//#define all(v)   ((v).begin()), ((v).end())
//#define sz(v)   ((int)((v).size()))
//#define pb       push_back
//#define MP    make_pair
//
//const int mod = (int)(1e9 + 7);
//const int mxN = 1005, oo = 0x3f3f3f3f;
////vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
////printf("%0.6f\n",x)
//
//ll fact(ll i){
//    if(i == 1 || i == 0) return 1;
//    i %= mod;
//    return i *= fact(i-1);
//}
//
//ll llog(ll a, ll b){
//    return log2(a) / log2(b);
//}
//
//ll gcd(ll a, ll b){ // a > b
//    if(b==0) return a;
//    return gcd(b, a%b);
//}
//
//ll power(ll b, ll p, ll m){   // O(log(p) base 2)
// if(p == 0) return 1;
// ll sq = power(b, p/2, m);
// sq = (sq*sq) % m;
// if(p%2 == 1)
//  sq = (sq*b) % m;
// return sq%m;
//}
//
//// Very important function
//int FactN_PrimePower(int n, int p){  // O(log(n) base p)
//    int pow = 0;
//    for(int i = p; i <= n ; i = i * p)
//     pow += n/i;
//    return pow;
//}
//
//ll sumPows(ll a, int k){ // Return a^1+a^1+a^2+.....a^k in O(k)
// if (k == 0)
//  return 0;
// if (k % 2 == 1)
//  return a * (1 + sumPows(a, k - 1));
// ll half = sumPows(a, k / 2);
// return half * (1 + half - sumPows(a, k / 2 -1) );
//}
//
//// C++ program to find sum of two large numbers.
//#include<bits/stdc++.h>
//using namespace std;
//
//// Function for finding sum of larger numbers
//string findSum(string str1, string str2)
//{
//    // Before proceeding further, make sure length
//    // of str2 is larger.
//    if (str1.length() > str2.length())
//        swap(str1, str2);
//
//    // Take an empty string for storing result
//    string str = "";
//
//    // Calculate length of both string
//    int n1 = str1.length(), n2 = str2.length();
//    int diff = n2 - n1;
//
//    // Initially take carry zero
//    int carry = 0;
//
//    // Traverse from end of both strings
//    for (int i=n1-1; i>=0; i--)
//    {
//        // Do school mathematics, compute sum of
//        // current digits and carry
//        int sum = ((str1[i]-'0') +
//                   (str2[i+diff]-'0') +
//                   carry);
//        str.push_back(sum%10 + '0');
//        carry = sum/10;
//    }
//
//    // Add remaining digits of str2[]
//    for (int i=n2-n1-1; i>=0; i--)
//    {
//        int sum = ((str2[i]-'0')+carry);
//        str.push_back(sum%10 + '0');
//        carry = sum/10;
//    }
//
//    // Add remaining carry
//    if (carry)
//        str.push_back(carry+'0');
//
//    for (int i=0; i<str.length(); i++){
//        if(str[i]!='0') break;
//        if(str[i]=='0'){
//            str.erase(str.begin()+i);
//            i--;
//        }
//    }
//
//    // reverse resultant string
//    //reverse(str.begin(), str.end());
//
//    return str;
//}
//
//int main(){
//    //std::ios_base::sync_with_stdio(false);
//    int t; cin>>t;
//    while(t--){
//        string a,b;
//        cin>>a>>b;
//        reverse(a.begin(), a.end());
//        reverse(b.begin(), b.end());
////        for (int i=0; i<a.length(); i++){
////            if(a[i]!='0') break;
////            if(b[i]=='0'){
////                a.erase(a.begin()+i);
////                i--;
////            }
////        }
////        for (int i=0; i<b.length(); i++){
////            if(b[i]!='0') break;
////            if(b[i]=='0'){
////                b.erase(b.begin()+i);
////                i--;
////            }
////        }
//        cout<<findSum(a,b)<<ln;
//    }
////    int z;
////    while(t--){
////        string a,b;
////        cin>>a>>b;
////        //int mini = min(a.length(), b.length());
////        int l = max(a.length(), b.length()) - min(a.length(), b.length());
////        if(a.length() > b.length()){
////            lp(i,l)
////                b+='0';
////        }
////        if(b.length() > a.length()){
////            lp(i,l)
////                a+='0';
////        }
////        //cout<<a<<ln<<b;
////        //reverse(a.begin(), a.end());
////        //reverse(b.begin(), b.end());
////        string ans="";
////        int carry=0;
////        for(int i=a.length()-1; i>=0; i--){
////            string tempa="", tempb="";
////            tempa+=a[i];
////            tempb+=b[i];
////            int x=stoi(tempa), y=stoi(tempb);
////            z = x+y+carry;
////            //if(carry)carry--;
////            if(z<10){
////                ans += to_string(z);
////            }else{
////                ans += to_string(z%10);
////                carry++;
////            }
////        }
////        int cnt=1;
////        while(carry){
////            string zeft="";
////            if(cnt==ans.length()-1){
////                zeft+=ans[cnt];
////                int k=stoi(zeft);
////                k+=1;
////                k%=10;
////                ans[cnt]=k+'0';
////                ans+="1";
////                break;
////            }
////            zeft+=ans[cnt];
////            int k=stoi(zeft);
////            k+=1;
////            if(k<10){ans[cnt]=k+'0'; break;}
////            else{
////                k%=10;
////                ans[cnt]=k+'0';
////            }
////            cnt++;
////            carry--;
////            //ans += to_string(k);
////        }
////        reverse(ans.begin(), ans.end());
////        cout<< ans<<ln;
////
////
//////        ll x = stoll(a);
//////        ll y = stoll(b);
//////        ll z = x+y;
//////        while(z%10==0){
//////            z/=10;
//////        }
//////        string ans = to_string(z);
//////        reverse(ans.begin(), ans.end());
//////        cout<<ans<<ln;
////    }
//}
 
//
//# include<bits/stdc++.h>
//using namespace std;
//
//#define ll              long long int
//#define ln              "\n"
//#define lp(i, n)        for (int i = 0; i < n; i++)
//#define all(v)   ((v).begin()), ((v).end())
//#define sz(v)   ((int)((v).size()))
//#define pb       push_back
//#define MP    make_pair
//
//const int mod = (int)(1e9 + 7);
//const int mxN = 1005, oo = 0x3f3f3f3f;
////vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
////printf("%0.6f\n",x)
//
//ll fact(ll i){
//    if(i == 1 || i == 0) return 1;
//    i %= mod;
//    return i *= fact(i-1);
//}
//
//ll llog(ll a, ll b){
//    return log2(a) / log2(b);
//}
//
//ll gcd(ll a, ll b){ // a > b
//    if(b==0) return a;
//    return gcd(b, a%b);
//}
//
//ll power(ll b, ll p, ll m){   // O(log(p) base 2)
// if(p == 0) return 1;
// ll sq = power(b, p/2, m);
// sq = (sq*sq) % m;
// if(p%2 == 1)
//  sq = (sq*b) % m;
// return sq%m;
//}
//
//// Very important function
//int FactN_PrimePower(int n, int p){  // O(log(n) base p)
//    int pow = 0;
//    for(int i = p; i <= n ; i = i * p)
//     pow += n/i;
//    return pow;
//}
//
//ll sumPows(ll a, int k){ // Return a^1+a^1+a^2+.....a^k in O(k)
// if (k == 0)
//  return 0;
// if (k % 2 == 1)
//  return a * (1 + sumPows(a, k - 1));
// ll half = sumPows(a, k / 2);
// return half * (1 + half - sumPows(a, k / 2 -1) );
//}
//
//// Function for finding sum of larger numbers
//string findSum(string str1, string str2){
//    // Before proceeding further, make sure length
//    // of str2 is larger.
//    if (str1.length() > str2.length())
//        swap(str1, str2);
//    // Take an empty string for storing result
//    string str = "";
//    // Calculate length of both string
//    int n1 = str1.length(), n2 = str2.length();
//    int diff = n2 - n1;
//    // Initially take carry zero
//    int carry = 0;
//    // Traverse from end of both strings
//    for (int i=n1-1; i>=0; i--){
//        // Do school mathematics, compute sum of
//        // current digits and carry
//        int sum = ((str1[i]-'0') + (str2[i+diff]-'0') + carry);
//        str.push_back(sum%10 + '0');
//        carry = sum/10;
//    }
//    // Add remaining digits of str2[]
//    for (int i=n2-n1-1; i>=0; i--){
//        int sum = ((str2[i]-'0')+carry);
//        str.push_back(sum%10 + '0');
//        carry = sum/10;
//    }
//    // Add remaining carry
//    if (carry)
//        str.push_back(carry+'0');
//
//    for (int i=0; i<str.length(); i++){
//        if(str[i]!='0') break;
//        if(str[i]=='0'){
//            str.erase(str.begin()+i);
//            i--;
//        }
//    }
//    // reverse resultant string
//    //reverse(str.begin(), str.end());
//    return str;
//}
//
//int main(){
//    std::ios_base::sync_with_stdio(false);
//    int a,b,c,d,x=0;
//    cin>>a>>b>>c>>d;
//    bool f = false;
//    if(a<=c){
//        for(int i=c; i>=d; i-=d){
////        for(int j=a; j<=b; j+=b){
////            x=j;
////            if(i-d<=j){
////                f=true;
////                break;
////            }
////        }
////        if(f) break;'
//        if(a+b>=i){
//                x=i;
//                f=true;
//                break;
//        }
//        else{
//                a+=b;
//                if(i-d<=a) break;
//            }
//        }
//        if(f) cout<<x;
//        else cout<<a;
//    }else cout<<a;
//}
 
//////////// Function for finding sum of larger numbers
//////////string findSum(string str1, string str2){
//////////    // Before proceeding further, make sure length
//////////    // of str2 is larger.
//////////    if (str1.length() > str2.length())
//////////        swap(str1, str2);
//////////    // Take an empty string for storing result
//////////    string str = "";
//////////    // Calculate length of both string
//////////    int n1 = str1.length(), n2 = str2.length();
//////////    int diff = n2 - n1;
//////////    // Initially take carry zero
//////////    int carry = 0;
//////////    // Traverse from end of both strings
//////////    for (int i=n1-1; i>=0; i--){
//////////        // Do school mathematics, compute sum of
//////////        // current digits and carry
//////////        int sum = ((str1[i]-'0') + (str2[i+diff]-'0') + carry);
//////////        str.push_back(sum%10 + '0');
//////////        carry = sum/10;
//////////    }
//////////    // Add remaining digits of str2[]
//////////    for (int i=n2-n1-1; i>=0; i--){
//////////        int sum = ((str2[i]-'0')+carry);
//////////        str.push_back(sum%10 + '0');
//////////        carry = sum/10;
//////////    }
//////////    // Add remaining carry
//////////    if (carry)
//////////        str.push_back(carry+'0');
//////////
//////////    for (int i=0; i<str.length(); i++){
//////////        if(str[i]!='0') break;
//////////        if(str[i]=='0'){
//////////            str.erase(str.begin()+i);
//////////            i--;
//////////        }
//////////    }
//////////    // reverse resultant string
//////////    //reverse(str.begin(), str.end());
//////////    return str;
//////////}
 
# include<bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ln              "\n"
#define lp(i, n)        for (int i = 0; i < n; i++)
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define pb(x)   push_back(x)
#define MP    make_pair
 
const int mod = (int)(1e9 + 7);
const int mxN = 1005, oo = 0x3f3f3f3f;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
//printf("%0.6f\n",x)
 
ll fact(ll i){
    if(i == 1 || i == 0) return 1;
    i %= mod;
    return i *= fact(i-1);
}
 
ll llog(ll a, ll b){
    return log2(a) / log2(b);
}
 
ll gcd(ll a, ll b){ // a > b
    if(b==0) return a;
    return gcd(b, a%b);
}
 
ll power(ll b, ll p, ll m){   // O(log(p) base 2)
 if(p == 0) return 1;
 ll sq = power(b, p/2, m);
 sq = (sq*sq) % m;
 if(p%2 == 1)
  sq = (sq*b) % m;
 return sq%m;
}
 
// Very important function
int FactN_PrimePower(int n, int p){  // O(log(n) base p)
    int pow = 0;
    for(int i = p; i <= n ; i = i * p)
     pow += n/i;
    return pow;
}
 
ll sumPows(ll a, int k){ // Return a^1+a^1+a^2+.....a^k in O(k)
 if (k == 0)
  return 0;
 if (k % 2 == 1)
  return a * (1 + sumPows(a, k - 1));
 ll half = sumPows(a, k / 2);
 return half * (1 + half - sumPows(a, k / 2 -1) );
}
 
 
int main(){
    std::ios_base::sync_with_stdio(false);
    int a; cin>>a;
    if((a%4==0 || a%7==0 || a%44==0 || a%47==0 || a%74==0 || a%77==0 || a%444==0 || a%447==0 || a%474==0 || a%477==0 || a%744==0 || a%747==0 || a%774==0 || a%777==0)){
            cout<<"YES";
    }else cout<<"NO";
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 