#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>
using namespace std;
 
char A[1000001];
int main()
{
    int x, n=0;
    bool a,b,c;
    cin>>x;
    for(int i=0; i<x; i++){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            n++;
        }
    }
    cout<<n;
}