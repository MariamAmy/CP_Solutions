#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
   string s;
   set <char> v;
   int c = 0, r = 0;
   getline(cin, s, '}');
   if (s.size() <= 2){
        cout << s.size() - 1;
   }else{
   for (int i=1; i < s.size(); i++){
        if (s[i] != ',' || s[i] != ' '){
            v.insert(s[i]);
        }
      }
      cout << v.size()-2;
   }
return 0;
}