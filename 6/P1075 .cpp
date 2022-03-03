#include <iostream>
using namespace std;
int main ()
{
    long long n;
    cin>>n;
    if(n==2)
        cout<<2;
    else{
        for(long long i=2;i<=n/2;i++){
            if(n%i==0){
                cout<<n/i;
                break;
            }
        }
    }
    return 0;
}