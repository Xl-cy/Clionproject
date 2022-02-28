#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()//边输入边输出
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            string s1;
            cin>>s1;
            s+=s1;
            cout<<s<<endl;
        }
        else if(x==2){
            int a,b;
            cin>>a>>b;
            s=s.substr(a,b);
            cout<<s<<endl;
        }
        else if(x==3){
            int a;
            string s1;
            cin>>a>>s1;
            s.insert(a,s1);
            cout<<s<<endl;
        }
        else if(x==4){
            string s1;
            cin>>s1;
            if(s.find(s1)==string::npos)
                cout<<-1<<endl;
            else
                cout<<to_string(s.find(s1))<<endl;
        }
    }
    return 0;
}