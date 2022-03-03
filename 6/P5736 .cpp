#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int f(int x){
    if(x==0 || x==1)
        return 0;
    else if(x==2)
        return 1;
    else{
        for(int i=2;i<=x/2;i++)
            if(x%i==0)
                return 0;
        return 1;
    }
}
int main ()
{
    int n;
    cin>>n;
    int s[100];
    for(int i=0;i<n;i++) {
        cin >> s[i];
        if(f(s[i])==1)
            cout<<s[i]<<' ';
    }
    return 0;
}