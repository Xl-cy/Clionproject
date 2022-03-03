#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
#include <cstring>
#include <string.h>
using namespace std;
struct TEST{
    string s[1000];
    int a[1000],b[1000],c[1000];
}test;
int main ()
{
    int n;
    cin>>n;
    int max=0;
    int j;
    for(int i=0;i<n;i++){
        cin>>test.s[i]>>test.a[i]>>test.b[i]>>test.c[i];
        if(max<test.a[i]+test.b[i]+test.c[i]) {
            max = test.a[i] + test.b[i] + test.c[i];
            j=i;
        }
    }
    cout<<test.s[j]<<' '<<test.a[j]<<' '<<test.b[j]<<' '<<test.c[j];
    return 0;
}