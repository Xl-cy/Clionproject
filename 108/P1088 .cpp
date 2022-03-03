#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int s1[10001];//s1火星人手指排列顺序
int n,m;
void tran(int s[]){
    int l=n-2;
    for(;l>=0;l--)//找到前面较小的数
        if(s[l]<s[l+1])
            break;
    if(l>=0){
        int r=n-1;
        for(;r>=0;r--)//找到前面较大的数
            if(s[l]<s[r])
                break;
        swap(s[l],s[r]);//交换较小数和较大数，以把整个序列变大，且尽量缩小变化幅度
    }
    sort(s+l+1,s+n);
}
int main ()
{
    cin>>n;//手指数目
    cin>>m;//加上去的小整数
    for(int i=0;i<n;i++)
        cin >> s1[i];
    for(int j=0;j<m;j++)
        tran(s1);
    for(int k=0;k<n;k++)
        cout<<s1[k]<<' ';
    return 0;
}