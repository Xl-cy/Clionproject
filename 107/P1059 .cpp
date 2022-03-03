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
struct intComp {
    bool operator() (int a, int b) {
        return a < b;
    }
};

struct strComp
{
    bool operator() (const string& str1, const string& str2) const {
        return str1.length() < str2.length();
    }
};
int main()
{
    set<int,intComp> s;
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++) {
        int x;
        cin>>x;
        s.insert(x);
    }
    set<int>::iterator it;
    if(s.size()==0){
        cout<<0;
        return 0;
    }
    cout<<s.size()<<endl;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<' ';
    return 0;
}