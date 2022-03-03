#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;
const int mod = 1e9+7;//取余数
//先选出两个相同长度的木条，然后再分两种情况：（1.第三条边由两根长度相同的木条组成，此时
// 情况总数为C（n，2）*C（m，2）；2.第三条边由两根长度不相同的木条组成，此情况情况总数为
// C（n，2）*C（m1,1）*C（m2,1）。）
int main ()
{
    int n;//木条总数
    cin>>n;
    int s[100001];//输入的木条
    int cou[5050];//各长度木条总数
    int mi=0x7fffffff,ma=0;//mi是最短木条长度，ma是最长木条长度
    for(int i=0;i<n;i++) {
        cin >> s[i];
        mi=min(mi,s[i]);
        ma= max(ma,s[i]);
        cou[s[i]]++;
    }
    long long sum=0;//最终结果
    for(int i=mi+1;i<=ma;i++){//从+1开始是因为没有比最小的边还小的边作为组成第三条边的边
        if(cou[i]>1){//判断是否大于1，以找寻长度相等的两条边作为前两条边
            for(int j=mi;j<=i/2;j++){//此处到i/2，是为了防止重复计算，j<=i-j
                if(cou[j]>=1 && cou[i-j]>=1){//如果有组成第三条边的两条边
                    if(j*2!=i)//找寻组成第三条边的两条边不相等的情况
                        sum=(sum+(cou[i]*(cou[i]-1)/2)*cou[j]*cou[i-j]%mod)%mod;//组合数的计算，实时取模
                    else if(cou[j]>1)//找寻组成第三条边的两条边相等的情况，并且此种长度的边数量大于1
                        sum=(sum+((cou[i]*(cou[i]-1)/2)*(cou[j]*(cou[j]-1)/2)%mod)%mod)%mod;//组合数的计算，实时取模
                }
            }
        }
    }
    cout<<sum;
    return 0;
}