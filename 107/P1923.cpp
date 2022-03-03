#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include <cstdio>
using namespace std;
int s[5000010],n,k;
void f(int l,int r)
{
    int i=l,j=r;
    int mid=s[(l+r)/2];
    do
    {
        while(s[j]>mid)
            j--;
        while(s[i]<mid)
            i++;
        if(i<=j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }while(i<=j);
    //l<=j<=i<=r  优化时间复杂度，找寻k所在区间，缩小查找范围
    if(k<=j)
        f(l,j);
    else if(i<=k)
        f(i,r);
    else
    {
        printf("%d",s[j+1]);
        return;
    }
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    f(0,n-1);
    return 0;
}