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
int n;
struct Stu{
   int id;
   int x,y,z;
   int t;
}s[301];
bool f(Stu s1,Stu s2){
    if(s1.t>s2.t)//总分大于
        return 1;
    else if(s1.t<s2.t)//总分小于
        return 0;
    else{//总分相等
        if(s1.x>s2.x)
            return 1;
        else if(s1.x<s2.x)
            return 0;
        else{
            if(s1.id<s2.id)
                return 1;
            else
                return 0;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        s[i].id=i;
        cin>>s[i].x>>s[i].y>>s[i].z;
        s[i].t=s[i].x+s[i].y+s[i].z;
    }
    sort(s+1,s+n+1,f);
    for(int j=1;j<5;j++){
        cout<<s[j].id<<' '<<s[j].t<<endl;
    }
    cout<<s[5].id<<' '<<s[5].t;
    return 0;
}