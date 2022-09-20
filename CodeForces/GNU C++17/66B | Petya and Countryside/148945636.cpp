# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
bool cmp(int a, int b){
    return a>b;
}
 
int main(){
 
    int n;
    cin >> n;
    vector <int> h(n);
    vector <int> ans(n);
 
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
 
    if (n == 1){
        cout << 1;
        return 0;
    }else if (is_sorted(h.begin(), h.end())){
        cout << n;
        return 0;
    }else if (is_sorted(h.begin(), h.end(), cmp)){
        cout << n;
        return 0;
    }
 
    else{
 
        int c = 1, x = 0, next = 1;
        while (h[x] >= h[next] && next < n){
            c++;
            x++;
            next++;
        }
        ans.push_back(c);
        c = 1;
 
        int e = n-1, p = n-2;
        while (h[e] >= h[p] && p >= 0){
            c++;
            e--;
            p--;
        }
        ans.push_back(c);
        c = 1;
 
        for (int i = 1; i < n - 1; i++){
 
            int j = i;
 
                while (h[j] >= h[j+1] && (j+1) < n){
                    c++;
                    j++;
                }
                //ans.push_back(c);
                //c = 1;
 
            j = i;
 
                while (h[j] >= h[j-1] && (j-1) >= 0){
                    c++;
                    j--;
                }
                ans.push_back(c);
                c = 1;
        }
 
    }
    cout << *max_element(ans.begin(), ans.end());
    return 0;
}