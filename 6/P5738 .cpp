#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    double x=0;//较大的分数
    for(int i=0;i<n;i++){
        int a[m];
        double sum=0;
        for(int j=0;j<m;j++){
            cin>>a[j];
            sum+=a[j];
        }
        sort(a,a+m);
        sum-=a[0];
        sum-=a[m-1];
        sum=sum*1.0/(m-2);
        if(x<sum)
            x=sum;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<x;
    return 0;
}