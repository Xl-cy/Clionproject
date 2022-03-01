#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
int main ()
{
    int dir[27];
    memset(dir,0,sizeof(dir));
    string s1,s2,s3,s4;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    getline(cin,s4);
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='A'&&s1[i]<='Z')
            dir[s1[i]-'A'+1]++;
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]>='A'&&s2[i]<='Z')
            dir[s2[i]-'A'+1]++;
    }
    for(int i=0;i<s3.length();i++){
        if(s3[i]>='A'&&s3[i]<='Z')
            dir[s3[i]-'A'+1]++;
    }
    for(int i=0;i<s4.length();i++){
        if(s4[i]>='A'&&s4[i]<='Z')
            dir[s4[i]-'A'+1]++;
    }
    int maxcount=0;
    for(int i=1;i<=26;i++)
        if(maxcount<dir[i])
            maxcount=dir[i];
    for(int j=maxcount;j>=1;j--){
        for(int k=1;k<=26;k++){
            if(dir[k]>=j)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    for(int l=1;l<=26;l++){
        cout<<char('A'+l-1)<<' ';
    }
    return 0;
}