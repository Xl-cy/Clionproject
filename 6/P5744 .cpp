#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
#include <cstring>
#include <string.h>
using namespace std;
struct TEST{
    string name[1000];
    int age[1000];
    int scorepre[1000];
}test;
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>test.name[i]>>test.age[i]>>test.scorepre[i];
        test.age[i]++;
        if(test.scorepre[i]*1.2>600)
            test.scorepre[i]=600;
        else
            test.scorepre[i]*=1.2;
    }
    for(int j=0;j<n;j++) {
        if(j==n-1)
            cout << test.name[j] << ' ' << test.age[j] << ' ' << test.scorepre[j];
        else
            cout << test.name[j] << ' ' << test.age[j] << ' ' << test.scorepre[j] << endl;
    }
    return 0;
}