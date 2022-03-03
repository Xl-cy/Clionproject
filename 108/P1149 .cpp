#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int s[10]={6,2,5,5,4,
           5,6,3,7,6};//0-9每个数各需要的火柴个数
int main ()
{
    int n;
    cin>>n;
    int sum=0;
    int a[2001]={6};//将前两千个数每个数要用的火柴数添加到此数组中，6是数0要用的火柴数
    for(int i=1;i<=2000;i++){
        int j=i;
        while(j>=1){
            a[i]+=s[j%10];
            j/=10;
        }
    }
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=1000;j++){
            if(a[i]+a[j]+a[i+j]+4==n)
                sum++;
        }
    }
    cout<<sum;
    return 0;
}