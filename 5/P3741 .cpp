#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='V'&&s[i+1]=='K'){
            count++;
            s[i]='A';
            s[i+1]='B';
        }
    }
    for(int j=0;j<s.length()-1;j++){
        if(s[j]==s[j+1]){
            count++;
            break;
        }
    }
    cout<<count;
    return 0;
}