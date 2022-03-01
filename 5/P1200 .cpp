#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
int main ()
{
    char s[27]={' ','A','B','C','D',
                'E','F','G','H','I',
                'J','K','L','M','N',
                'O','P','Q','R','S',
                'T','U','V','W','X',
                'Y','Z'};
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int temp1=1,temp2=1;
    for(int i=0;i< s1.length();i++){
        for(int j=1;j<=26;j++){
            if(s1[i]==s[j]){
                temp1*=j;
                break;
            }
        }
    }
    for(int k=0;k< s2.length();k++){
        for(int l=1;l<=26;l++){
            if(s2[k]==s[l]){
                temp2*=l;
                break;
            }
        }
    }
    if(temp1%47==temp2%47)
        cout<<"GO";
    else
        cout<<"STAY";
    return 0;
}