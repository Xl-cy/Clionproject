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
int main()
{
    int n;
    cin>>n;
    int s[10000];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++) {
            if (s[i] > s[j]) {
                swap(s[i], s[j]);
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}