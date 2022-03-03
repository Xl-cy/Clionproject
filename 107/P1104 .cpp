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
struct Stu{
    string name;
    int year,month,day;
    int id;
}s[100];
int f(Stu s1,Stu s2){
    if(s1.year<s2.year)
        return 1;
    else if(s1.year==s2.year){
        if(s1.month<s2.month)
            return 1;
        else if(s1.month==s2.month){
            if(s1.day<s2.day)
                return 1;
            else if(s1.day==s2.day)
                return s1.id>s2.id;
            else
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].year>>s[i].month>>s[i].day;
        s[i].id=i+1;
    }
    sort(s,s+n,f);
    for(int j=0;j<n-1;j++)
        cout<<s[j].name<<endl;
    cout<<s[n-1].name;
    return 0;
}