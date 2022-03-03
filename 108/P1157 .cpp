#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
using namespace std;
int n,r;
int s[22];
void f(int index){
    if(index==r){
        for(int i=1;i<=r;i++){
            if(s[i]<10)
                cout<<"  "<<s[i];//当s[i]是个位数时保证输出格式正确
            else
                cout<<' '<<s[i];
        }
        cout<<endl;
    }
    else{
        for(int j=s[index]+1;j<=n;j++){
            s[index+1]=j;
            f(index+1);
        }
    }
}
int main ()
{
    cin>>n>>r;
    memset(s,0, sizeof(s));
    f(0);
    return 0;
}