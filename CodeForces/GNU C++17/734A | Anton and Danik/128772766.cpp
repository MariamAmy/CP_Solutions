#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>
using namespace std;
 
char A[1000001];
int main()
{
    int x,a=0, d=0;
    cin>>x;
    for(int i=0; i<x; i++){
        cin>>A[i];
        if(A[i]=='A'){
            a+=1;
        }else d+=1;
    }
    if(a>d) cout<<"Anton"<<endl;
    else if (a<d)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}