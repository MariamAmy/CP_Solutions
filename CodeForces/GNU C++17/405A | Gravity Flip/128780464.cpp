#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int x;
    cin>>x;
    int A[x-1];
    for(int i=0; i<x; i++){
        cin>>A[i];
    }
    sort(A,A+x);
    for(int i=0; i<x; i++){
        cout<<A[i]<<" ";
    }
   return 0;
}