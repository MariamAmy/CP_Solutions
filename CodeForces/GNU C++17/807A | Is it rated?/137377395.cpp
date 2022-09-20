# include <bits/stdc++.h>
 
using namespace std;
 
#define lp(i,n) for(int i = 0; i < n; i++)
 
/*
int arraySortedOrNot(int arr[], int n)
{
    // Array has one or no element or the
    // rest are already checked and approved.
    if (n == 1 || n == 0)
        return 1;
 
    // Unsorted pair found (Equal values allowed)
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    // Last pair was sorted
    // Keep on checking
    return arraySortedOrNot(arr, n - 1);
}*/
 
bool cmp(int a, int b) {
   return (a > b);
}
 
int main(){
    int n;
    cin >> n;
    int ar[n];
    int c = 0;
    lp(i, n){
        int a, b;
        cin >> a >> b;
        if(a != b) c++;
        ar[i] = a;
    }
    if(c == 0){
            //if(arraySortedOrNot(ar, n) == 1) cout << "unrated";
            //else cout << "maybe";
            if(is_sorted(ar, ar + n, cmp)) cout << "maybe";
            else if(!is_sorted(ar, ar+n)) cout << "unrated";
            else cout << "unrated";
    }else cout << "rated";
}