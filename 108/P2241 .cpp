//#include <iostream>
//#include <cstring>
//#include <string.h>
//#include <algorithm>
//#include <math.h>
//#include <iomanip>
//#include <cstdio>
//using namespace std;
//int main ()
//{
//    int n,m;
//    cin>>n>>m;
//    int len= min(n,m);
//    long long squ=0,rec=0;
//    for(int i=1;i<=len;i++){
//        squ+=((n-i+1)*(m-i+1));//正方形个数
//    }
//    //正方形个数+长方形个数=矩形个数
//    long long ns=0,ms=0;//ns记录n边组成的矩形边种类数，ms记录m边组成的矩形边种类数
//    for(int j=1;j<=n;j++)
//        ns+=(n-j+1);
//    for(int k=1;k<=m;k++)
//        ms+=(m-k+1);
//    long long sum=ns*ms;//矩形总数
//    rec=sum-squ;
//    cout<<squ<<' '<<rec;
//    return 0;
//}

#include <iostream>
#include <cstring>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstdio>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int len= min(n,m);
    long long squ=0,rec=0;
    for(int i=1;i<=len;i++){
        squ+=((n-i+1)*(m-i+1));
    }
    for(int j=1;j<len;j++){
        for(int k=j+1;k<=len;k++){
            rec+=((n-j+1)*(m-k+1));
            rec+=((n-k+1)*(m-j+1));
        }
    }
    if(n!=m) {
        for (int l = 1; l <= len; l++)
            for (int q = len + 1; q <= max(n, m); q++)
                rec += ((len - l + 1) * (max(n, m) - q + 1));
    }
    cout<<squ<<' '<<rec;
    return 0;
}