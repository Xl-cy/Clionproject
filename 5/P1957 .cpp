#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()//边输入边输出
{
    int i;
    cin>>i;
    char flag;//存储运算标志
    char s1[20];//s1用于输入判断
    for(int j=0;j<i;j++){
        cin>>s1;
        string s2;// s2用于存储运算式
        int x,y;//两个运算数
        if(s1[0]>='a' && s1[0]<='z'){
            flag=s1[0];
            cin>>x>>y;
        }
        else{
            x=atoi(s1);
            cin>>y;
        }
        if(flag=='a'){
            s2+=(to_string(x)+'+'+ to_string(y)+'='+ to_string(x+y));
            cout<<s2<<endl<<s2.length()<<endl;
        }
        else if(flag=='b'){
            s2+=(to_string(x)+'-'+ to_string(y)+'='+ to_string(x-y));
            cout<<s2<<endl<<s2.length()<<endl;
        }
        else{
            s2+=(to_string(x)+'*'+ to_string(y)+'='+ to_string(x*y));
            cout<<s2<<endl<<s2.length()<<endl;
        }
    }
    return 0;
}