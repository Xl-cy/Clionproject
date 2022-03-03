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
int main()
{
    int n;
    cin>>n;
    long long s[2000];
    long long com[2000];
    memset(com,0,sizeof(com));
    cin>>s[0];
    for(int i=1;i<n;i++) {
        cin >> s[i];
        if(abs(s[i]-s[i-1])<n)//此处防止数组越界，判断差的绝对值小于n才能加入数组
            if(!com[abs(s[i]-s[i-1])])
                com[abs(s[i]-s[i-1])]++;
    }
    for(int k=1;k<=n-1;k++){
        if(com[k]==0) {
            cout << "Not jolly";
            return 0;
        }
    }
    cout<<"Jolly";
    return 0;
}