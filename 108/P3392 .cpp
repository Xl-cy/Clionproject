#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
string s[51];//字符集
int n,m;//n行数，m列数
int sum=0x7fffffff;
int main ()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)//按行输入
        cin>>s[i];
    for(int i=1;i<n-1;i++){//白、蓝分隔线
        for(int j=i+1;j<n;j++){//蓝、红分隔线
            int len=0;//记录需要涂改的方块的数目
            for(int k=0;k<n;k++){
                for(int l=0;l<m;l++){
                    if(k<i){
                        if(s[k][l]!='W')//白色区间需要涂改的
                            len++;
                    }
                    else if(k<j && k>=i){//蓝色区间需要涂改的
                        if(s[k][l]!='B')
                            len++;
                    }
                    else{//红色区间需要涂改的
                        if(s[k][l]!='R')
                            len++;
                    }
                }
            }
            if(len<sum)
                sum=len;
        }
    }
    cout<<sum;
    return 0;
}