#include <iostream>
#include <math.h>
using namespace std;
int f1(int n){	//判断回文数 
    int i=0;
    int m=n;
    while(m){
        i=m%10+10*i;
        m/=10;
    }
    if(i==n)
        return 1;
    else
        return 0;
}
int f2(int n){	//判断素数 
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main ()
{
    int a,b;
    cin>>a>>b;
    if(a%2==0)
        a+=1;
    if(b>9989899)
        b=9989899;
    for(int i=a;i<=b;i+=2){
        if(f1(i) && f2(i))
            cout<<i<<endl;
    }
    return 0;
}