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
struct Vol{
    int id;
    int s;
}v[5001];
int f(Vol v1,Vol v2){
    if(v1.s>v2.s)
        return 1;
    else if(v1.s==v2.s){
        return v1.id<v2.id;
    }
    else
        return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int peo=m*1.5;
    for(int i=1;i<=n;i++)
        cin>>v[i].id>>v[i].s;
    sort(v+1,v+n+1,f);
    int temp=v[peo].s;
    int count=0;
    for(int j=peo;j<=n;j++){//判断peo之后有多少成绩相同的人
        if(v[j].s==temp)
            count++;
    }
    if((peo+count-1)==0)//减1是因为上面的j是从peo开始的
        cout<<v[peo].s<<' '<<peo+count-1;
    else{
        cout<<v[peo].s<<' '<<peo+count-1;
        for(int k=1;k<=peo+count-1;k++)
            cout<<endl<<v[k].id<<' '<<v[k].s;
    }
    return 0;
}