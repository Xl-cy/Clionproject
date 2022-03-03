#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
#include <cstring>
#include <string.h>
using namespace std;
int main ()
{
    int sum=1;
    int n;
    cin>>n;
    while(--n){
        sum=2*(sum+1);
    }
    cout<<sum;
    return 0;
}