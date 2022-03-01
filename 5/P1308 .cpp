#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.length();i++)
        s1[i]= tolower(s1[i]);
    for(int j=0;j<s2.length();j++)
        s2[j]= tolower(s2[j]);
    s1=' '+s1+' ';
    s2=' '+s2+' ';
    int count=0,flag;
    int temp=s2.find(s1,0);
    if(temp == string::npos)
        cout<<-1;
    else{
        flag=temp;
        while(temp!=string::npos){
            count++;
            temp=s2.find(s1,temp+1);
        }
        cout<<count<<' '<<flag;
    }
    return 0;
}