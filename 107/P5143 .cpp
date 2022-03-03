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
struct POINT{
    int x,y,z;
}p[50001];
int f(POINT p1,POINT p2){
    return p1.z<p2.z;
}
int main()
{
    int n;
    cin>>n;
    double len=0;
    for(int i=0;i<n;i++)
        cin >> p[i].x >> p[i].y >> p[i].z;
    sort(p,p+n,f);
    for(int j=1;j<n;j++)
        len+=sqrt(pow(p[j].x-p[j-1].x,2)+pow(p[j].y-p[j-1].y,2)+pow(p[j].z-p[j-1].z,2));
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<len;
    return 0;
}