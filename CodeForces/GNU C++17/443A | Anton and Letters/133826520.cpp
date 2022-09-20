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
        if (s[i] != ',' && s[i] != ' ' && s[i] != '}'){
            v.insert(s[i]);
        }
      }
      cout << v.size();
   }
 
   /*cout << s.size()<<endl;;
   cout<<s<<endl;
   /*for (auto x : v) {
cout << x << "\n";
}
   /*do
    {
        if (c != '{' || c != ','){
                s[i] = c;
                i++;
        }
    }while(c!='}');
    cout << s;
    /*for (int j = 0; j < s.size(); j++){
        if (find(v.begin(), v.end(), s[i]) == v.end()){
            for(int k = j+1; k < s.size(); k++){
                if (s[j] == s[k]){
                    r++;
                    v.push_back(s[j]);
                }
            }
        }
    }
    cout << s.size() - r;*/
return 0;
}