#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>
using namespace std;
 
char A[1000001];
int main()
{
    int l,b, c=0;
    cin>>l>>b;
    while(l<=b){
        l=l*3;
        b=2*b;
        c++;
    }
    cout<<c;
}