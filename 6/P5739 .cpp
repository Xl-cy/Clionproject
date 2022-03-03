#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
using namespace std;
int f(int n){
    if(n==1)
        return 1;
    else
        return n*f(n-1);
}
int main ()
{
    int n;
    cin>>n;
    int s=f(n);
    cout<<s;
    return 0;
}