# include<bits/stdc++.h>
using namespace std;
 
int main(){
//    int  x, c = 0; cin >> x;
//    bool r = false, l = false;
//    string s; cin >> s;
//    for(int i = 0; i < x; i++){
//        if (s[i] == 'R' && !r){
//            cout << i+1 << " ";
//            r = true;
//        }else if (s[i] == 'L' && !l){
//            cout << i;
//            l = true;
//        }else continue;
//    }
      int x; cin >> x;
      string s; cin >> s;
      for (int i = 0; i < x; i++){
        if (s[i] == '.') continue;
        else{
            x = i;
            cout << i+1 << " ";
            break;
        }
      }
      for (int i = x; i < s.length(); i++){
        if(s[i] == '.'){
            cout << i+1;
            return 0;
        }else if (s[i] == 'L'){
            cout << i;
            return 0;
        }
      }
}