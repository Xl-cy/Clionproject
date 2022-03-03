#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int main ()
{
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double len=0;
    double dis1= sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    double dis2= sqrt(pow(x3-x1,2)+ pow(y3-y1,2));
    double dis3= sqrt(pow(x3-x2,2)+ pow(y3-y2,2));
    len=dis1+dis2+dis3;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<len;
    return 0;
}