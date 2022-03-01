#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    char s1='0',s2='0',s3='0';
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            if(s[i+1]==':'&&s[i+2]=='='&&s[i+4]==';'&&s[i+3]>='0'&&s[i+3]<='9')
                s1=s[i+3];
            else if(s[i+1]==':'&&s[i+2]=='='&&s[i+4]==';'&&s[i+3]=='b')
                s1=s2;
            else if(s[i+1]==':'&&s[i+2]=='='&&s[i+4]==';'&&s[i+3]=='c')
                s1=s3;
        }
        else if(s[i]=='b'){
            if(s[i+1]==':'&&s[i+2]=='='&&s[i+4]==';'&&s[i+3]>='0'&&s[i+3]<='9')
                s2=s[i+3];
            else if(s[i+1]==':'&&s[i+2]=='='&&s[i+4]==';'&&s[i+3]=='a')
                s2=s1;
            else if(s[i+1]==':'&&s[i+2]=='='&&s[i+4]==';'&&s[i+3]=='c')
                s2=s3;
        }
        else if(s[i]=='c'){
            if(s[i+1]==':'&&s[i+2]=='='&&s[i+4]==';'&&s[i+3]>='0'&&s[i+3]<='9')
                s3=s[i+3];
            else if(s[i+1]==':'&&s[i+2]=='='&&s[i+4]==';'&&s[i+3]=='a')
                s3=s1;
            else if(s[i+1]==':'&&s[i+2]=='='&&s[i+4]==';'&&s[i+3]=='b')
                s3=s2;
        }
    }
    cout<<s1<<' '<<s2<<' '<<s3;
    return 0;
}