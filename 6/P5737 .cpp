#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
using namespace std;
int f(int n){
    if(n%400==0 || (n%4==0 && n%100!=0))
        return 1;
    else
        return 0;
}
int main ()
{
    int x,y;
    cin>>x>>y;
    queue<int> s;
    int count=0;
    for(int i=x;i<=y;i++){
        if(f(i)==1){
            count++;
            s.push(i);
        }
    }
    if(count==0)
        cout<<count;
    else{
        cout<<count<<endl;
        for(int j=0;j<count;j++){
            cout<<s.front()<<' ';
            s.pop();
        }
    }
    return 0;
}