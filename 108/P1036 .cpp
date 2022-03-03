#include <iostream>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iomanip>
using namespace std;
int count;//素数个数
int c[20];
int n,k;
int judgeC(int x){  //判断素数
    if(x==0 || x==1)
        return 0;
    else if(x==2)
        return 1;
    else{
        for(int i=2;i<= sqrt(x);i++)
            if(x%i==0)
                return 0;
        return 1;
    }
}
int f(int x,int y,int l,int r){
    if(x==0)
        return judgeC(y);
    int sum=0;
    for(int i=l;i<=r;i++)
        sum+=f(x-1,y+c[i],i+1,r);
    return sum;
}
int main () {
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>c[i];
    count=f(k,0,0,n-1);
    cout<<count;
    return 0;
}