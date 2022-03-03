#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <string.h>
using namespace std;
int a[100001];
void f(int li,int rj) {
    if(li>=rj)
        return;
    int mid=a[(li+rj)/2];
    int i=li,j=rj;
    while(i<j) {
        while (a[i]<mid)
            i++;
        while (mid<a[j])
            j--;
        if(i<=j){
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if(li<j)
        f(li,j);
    if(i<rj)
        f(i,rj);
}
int main ()
{
    int n;
    cin>>n;
    for(int l=1;l<=n;l++)
        cin>>a[l];
    f(1,n);
    for(int p=1;p<n;p++)
        cout<<a[p]<<' ';
    cout<<a[n];
    return 0;
}