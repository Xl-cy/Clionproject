#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int le=0,ri=0;//左右脑
int s[5];//各科题目数量
int a[1000];
void f(int a[],int x,int y,int &cou){
    if(x==y+1){
        cou=min(cou,max(le,ri));
        return;
    }
    else{
        le+=a[x];
        f(a,x+1,y,cou);
        le-=a[x];
        ri+=a[x];
        f(a,x+1,y,cou);
        ri-=a[x];
    }
}
int main ()
{
    for(int i=1;i<=4;i++)
        cin>>s[i];
    int sum=0;//最终结果
    int cou;
    for(int i=1;i<=4;i++){
        memset(a,0, sizeof(a));
        cou=0x7fffffff;
        for(int j=1;j<=s[i];j++)
            cin>>a[j];
        f(a,1,s[i],cou);
        sum+=cou;
    }
    cout<<sum;
    return 0;
}