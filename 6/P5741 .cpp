#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
#include <cstring>
#include <string.h>
using namespace std;
struct TEST{
    string s[1000];
    int a[1000],b[1000],c[1000];
}test;
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>test.s[i]>>test.a[i]>>test.b[i]>>test.c[i];
    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(abs(test.a[j]-test.a[k])<=5 && abs(test.b[j]-test.b[k])<=5 && abs(test.c[j]-test.c[k])<=5 && abs(test.a[j]+test.b[j]+test.c[j]-test.a[k]-test.b[k]-test.c[k])<=10){
                if(k==n-1&&j==n-2)
                    cout<<test.s[j]<<' '<<test.s[k];
                else
                    cout<<test.s[j]<<' '<<test.s[k]<<endl;
            }
        }
    }
    return 0;
}