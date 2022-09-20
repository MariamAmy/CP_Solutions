#include <bits/stdc++.h>
using namespace std;
 
void print_arr(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
}
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int x;
    cin>>x;
    int s=0, d=0;
    vector<int> v(x);
    for(int i=0; i< x; i++){
        cin >> v[i];
    }
 
    for(int j=0; j< x; j++){
        if(j % 2 == 0){
            if(*v.begin() > *(v.end() - 1)){
                    s+= *v.begin();
                    v.erase(v.begin());
            }else{
                s+= *(v.end() - 1);
                v.erase((v.end() - 1));
            }
        }else{
            if(*v.begin() > *(v.end() - 1)){
                    d+= *v.begin();
                    v.erase(v.begin());
            }else{
                d+= *(v.end() - 1);
                v.erase((v.end() - 1));
            }
        }
    }
    cout<< s << " " << d;
}