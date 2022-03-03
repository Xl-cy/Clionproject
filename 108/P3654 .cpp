#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int r,c,k;
string s[100];
int f1(int i){//行判断
    int count=0;
    for(int j=0;j<c-k+1;j++){
        int temp=0;
        for(int l=0;l<k;l++){ //判断连续的k个字符是否符合要求
            if (s[i][l+j] == '.')
                temp++;
            else
                break;
        }
        if(temp==k)
            count++;
    }
    return count;
}
int f2(int j){//列判断
    int count=0;
    for(int i=0;i<r-k+1;i++){
        int temp=0;
        for(int l=0;l<k;l++) {
            if (s[l+i][j] == '.')
                temp++;
            else
                break;
        }
        if(temp==k)
            count++;
    }
    return count;
}
int main ()
{
    cin>>r>>c>>k;
    for(int i=0;i<r;i++)
        cin>>s[i];
    int sum=0;
    for(int i=0;i<r;i++)
        sum+=f1(i);
    for(int j=0;j<c;j++)
        sum+=f2(j);
    if(k==1)//注意当k=1的时候，情况重复
        cout<<sum/2;
    else
        cout<<sum;
    return 0;
}