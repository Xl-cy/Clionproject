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
int h[20001];
bool f(int a,int b){
    return a>b;
}
int main()
{
    int n,b;
    cin>>n>>b;
    for(int i=1;i<=n;i++)
        cin>>h[i];
    sort(h+1,h+n+1,f);
    long long sum=0;
    int j;
    for(j=1;j<=n;j++){
        if(sum>=b)
            break;
        sum+=h[j];
    }
    cout<<j-1;
    return 0;
}