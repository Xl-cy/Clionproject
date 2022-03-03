#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include <cstdio>
#include <set>
using namespace std;
struct Pre{
    int id;
    char t[100];
    int len;
}p[20];
bool f(Pre s1,Pre s2){
    if(s1.len>s2.len)
        return 1;
    else if(s1.len==s2.len){
        for(int i=0;i<s1.len;i++){
            if(s1.t[i]>s2.t[i])
                return 1;
            else if(s1.t[i]==s2.t[i])
                continue;
            else
                return 0;
        }
    }
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].t;
        p[i].id=i+1;
        p[i].len= strlen(p[i].t);
    }
    sort(p,p+n,f);
    cout<<p[0].id<<endl<<p[0].t;
    return 0;
}