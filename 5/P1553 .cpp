#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main ()
{
    string s,s1;
    cin>>s;
    int len1=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9')
            len1++; //符号位置
        else{
            s1+=s[i];    //符号
            break;
        }
    }
    int flag=0; //用于判断何时前导0消除
    for(int j=len1-1;j>=0;j--){
        if(s[j]!='0') {   //消除前一个数的末位0
            flag=1;
        }
        if(flag)
            cout << s[j];
    }   //输出符号前的数
    if(len1==1&&s[0]=='0')
        cout<<0;
    if(s1.length()==0)
        return 0;
    if(s1[0]=='.'){
        cout<<'.';
        int len2=len1+1;
        for(int j=len1+1;j<s.length();j++) {
            if(s[j]!='0')
                break;
            len2++;
        }
        if(len2==s.length()) {
            cout << '0';
            return 0;
        }
        else{
            for(int k=s.length()-1;k>=len2;k--)
                cout<<s[k];
        }
    }
    else if(s1[0]=='/'){
        cout<<'/';
        int flag=0;
        for(int j=s.length()-1;j>=len1+1;j--){
            if(s[j]!='0') {
                flag=1;
            }
            if(flag)
                cout << s[j];
        }
    }
    else if(s1[0]=='%')
        cout<<'%';
    return 0;
}