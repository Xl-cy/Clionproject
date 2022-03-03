#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    int s[10];
    memset(s,0, sizeof(s));
    for(int j=0;j<n;j++)
        s[j]=j+1;
    do{
        for(int i=0;i<n;i++){
            if(s[i]<10)
                cout<<"    "<<s[i];
            else
                cout<<"   "<<s[i];
        }
        cout<<endl;
    }while(next_permutation(s,s+n));
    return 0;
}