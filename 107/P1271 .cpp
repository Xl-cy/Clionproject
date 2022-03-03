#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <string.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int a[1000];
    memset(a,0, sizeof(a));
    int i=m;
    while(i--){
        int x;
        cin>>x;
        a[x]++;
    }
    for(int j=1;j<=n;j++){
        if(a[j]){
            for(int k=1;k<=a[j];k++)
                cout<<j<<' ';
        }
    }
    return 0;
}