#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    char a[105],b[105];
    cin >>a>>b;
    for(int i=0; i<strlen(a);i++)
        a[i] = tolower(a[i]) , b[i] = tolower(b[i]);
    cout << strcmp(a,b) << endl;
return 0;
}