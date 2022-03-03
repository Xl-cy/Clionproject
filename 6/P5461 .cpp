#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
#include <cstring>
#include <string.h>
using namespace std;
int s[1025][1025]={1};
void f(int x,int y,int len){  //(x,y)为代处理正方形左上角坐标点，len为正方形边长
    if(len==1) {
        s[x][y] = 1;
        return;
    }
    f(x+len/2,y,len/2);
    f(x,y+len/2,len/2);
    f(x+len/2,y+len/2,len/2);
}
int main ()
{
    memset(s,0,sizeof(s));
    int n;
    cin>>n;
    int len=2<<n-1;
    f(1,1,len);
    for(int i=1;i<=len;i++){
        for(int j=1;j<len;j++)
            cout<<s[i][j]<<' ';
        cout<<s[i][len]<<endl;
    }
    return 0;
}