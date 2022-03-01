#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main ()
{
    string s;
    int cb=0,cg=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y')
            cb++;
        if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l')
            cg++;
    }
    cout<<cb<<endl<<cg;
    return 0;
}