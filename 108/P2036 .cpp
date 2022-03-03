#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int n;
int a[11][3];//配料量
int flag[11];//状态，代表是否被使用
int sum=0x7fffffff;
int s=1,b=0;//s酸度，b苦度
void dfs(int x){
    if(x<=n){
        for(int i=1;i<=n;i++){
            if(!flag[i]){
                s*=a[i][1];
                b+=a[i][2];
                sum= min(sum,abs(s-b));
                flag[i]=1;
                dfs(x+1);
                flag[i]=0;
                s/=a[i][1];
                b-=a[i][2];
            }
        }
    }
}
int main ()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i][1]>>a[i][2];
    dfs(1);
    cout<<sum;
    return 0;
}