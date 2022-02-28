#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int f(int n){
    if(n==0 || n==1)
        return 0;
    else if(n==2)
        return 1;
    else{
        for(int i=2;i<=n/2;i++) {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}
int main ()
{
    char s[100];
    memset(s,'0',sizeof(s));
    int len=0;
    cin>>s;
    while(s[len]!='0')
        len++;
    len-=1;
    sort(s,s+len);
    int maxn=0,minn=100;
    char temp=s[0];
    int count=1;
    for(int i=1;i<len;i++){
        if(s[i]==temp){
            count++;
            if(i==len-1){
                if(maxn<count)
                    maxn=count;
                if(minn>count)
                    minn=count;
            }
        }
        else{
            temp=s[i];
            if(maxn<count)
                maxn=count;
            if(minn>count)
                minn=count;
            count=1;
        }
    }
    if(f(maxn-minn)==1)
        cout<<"Lucky Word"<<endl<<maxn-minn;
    else
        cout<<"No Answer"<<endl<<0;
    return 0;
}