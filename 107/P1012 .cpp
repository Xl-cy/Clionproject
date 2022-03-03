#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include <cstdio>
#include <set>
using namespace std;
int f(string s1,string s2){
    int len= min(s1.length(),s2.length());
    int count=0;//用于判断字符串相同长度中字符相等的个数，用于判断在len长度下字符都相等的情况
    for(int i=0;i<len;i++){
        if(s1[i]<s2[i])
            return 0;
        else if(s1[i]==s2[i])
            count++;
        else
            return 1;
    }
    if(count==len){
        if(s1.length()>s2.length()){
            if(s1[len]<s2[0])
                return 0;
            else
                return 1;
        }
        else if(s1.length()==s2.length())
            return 1;
        else{
            if(s2[len]<s1[0])
                return 1;
            else
                return 0;
        }
    }
    else
        return 1;
}
int main()
{
    int n;
    cin>>n;
    string s[20];
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n,f);
    for(int j=0;j<n;j++)
        cout<<s[j];
    return 0;
}