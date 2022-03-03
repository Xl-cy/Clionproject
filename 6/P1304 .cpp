#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
#include <cstring>
#include <string.h>
using namespace std;
int jud(int x){
    if(x==0 || x==1)
        return 0;
    else if(x==2)
        return 1;
    else{
        for(int i=2;i<=x/2;i++)
            if(x%i==0)
                return 0;
        return 1;
    }
}
int main ()
{
    int n;
    cin>>n;
    for(int i=4;i<=n;i+=2){
        for(int j=2;;j++){
            if(jud(j) && jud(i-j)) {
                cout << i << '=' << j << '+' << i - j << endl;
                break;
            }
        }
    }
    return 0;
}