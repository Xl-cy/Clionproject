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
    int a;
    int i=0;
    long long count=0;
    long long sum=0;
    while(cin >> a && cin.get()!='\n'){
        sum+=a;
        i++;
    }
    count=sum*(2<<i-2);
    cout<<count;
    return 0;
}