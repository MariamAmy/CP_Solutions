# include <bits/stdc++.h>
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
 
int main(){
    string subw;
    cin >> subw;
    while(subw.find("WUB")!= -1){
        int x = subw.find("WUB");
        if(x == 0) subw.erase(x, 3);
        else subw.replace(x, 3," ");
    }
    cout << subw;
}