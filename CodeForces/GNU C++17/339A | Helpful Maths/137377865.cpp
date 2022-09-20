#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    char arr[105];
    cin >> s;
    memset(arr,'4',105);
    for (int i = 0; i < s.size(); i++){
            if (s[i] != '+'){
                arr[i] = s[i];
            }
    }
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len );
    cout << arr[0];
    for (int i = 1; i < len; i++){
         if (arr[i] != '4') cout << "+" << arr[i];
    }
    return 0;
}