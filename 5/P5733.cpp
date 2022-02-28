//
// Created by 10604 on 2022/2/28.
//
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int len=s.length();
    for (int i = 0; i < len; i++) {
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
    }
    cout<<s;
    return 0;
}

//char *s;
//gets(s);