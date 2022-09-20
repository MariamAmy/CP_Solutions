#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>
using namespace std;
 
int A[1000001];
int main()
{
    int x,y, s=0;
    cin>>x>>y;
    for(int i=0; i<x; i++){
        cin>>A[i];
        if(A[i]>y){
            s+=2;
        }else s+=1;
    }
    cout<<s;
}