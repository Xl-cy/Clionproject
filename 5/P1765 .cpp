#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ')
            count++;
        else if(s[i]>='a' && s[i]<='c')
            count+=(s[i]-'a'+1);
        else if(s[i]>='d' && s[i]<='f')
            count+=(s[i]-'d'+1);
        else if(s[i]>='g' && s[i]<='i')
            count+=(s[i]-'g'+1);
        else if(s[i]>='j' && s[i]<='l')
            count+=(s[i]-'j'+1);
        else if(s[i]>='m' && s[i]<='o')
            count+=(s[i]-'m'+1);
        else if(s[i]>='p' && s[i]<='s')
            count+=(s[i]-'p'+1);
        else if(s[i]>='t' && s[i]<='v')
            count+=(s[i]-'t'+1);
        else if(s[i]>='w' && s[i]<='z')
            count+=(s[i]-'w'+1);
    }
    cout<<count;
    return 0;
}