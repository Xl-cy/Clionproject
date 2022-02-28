#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len=s.length();
    for (int i = 0; i < len; i++) {
        for(int j=0;j<n;j++){
            if(s[i]=='z')
                s[i]='a';
            else
                s[i]+=1;
        }
    }
    cout<<s;
    return 0;
}