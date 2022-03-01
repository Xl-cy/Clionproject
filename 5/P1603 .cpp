#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
int main ()
{
    string s;//句子
    getline(cin,s);
    string s1;//得到子串
    long long count=0;//数字个数
    long long c[6];//存放得到的数字
    int i;
    for(i=0;i<s.length();i++){
        if(s[i]==' '){
            s1=s.substr(0,i);
            if(s1=="one"||s1=="a"||s1=="first"||s1=="another"){c[count]=1;count++;}
            else if(s1=="two"||s1=="both"||s1=="second"){c[count]=4;count++;}
            else if(s1=="three"||s1=="third"){c[count]=9;count++;}
            else if(s1=="four"){c[count]=16;count++;}
            else if(s1=="five"){c[count]=25;count++;}
            else if(s1=="six"){c[count]=36;count++;}
            else if(s1=="seven"){c[count]=49;count++;}
            else if(s1=="eight"){c[count]=64;count++;}
            else if(s1=="nine"){c[count]=81;count++;}
            else if(s1=="eleven"){c[count]=21;count++;}
            else if(s1=="twelve"){c[count]=44;count++;}
            else if(s1=="thirteen"){c[count]=69;count++;}
            else if(s1=="fourteen"){c[count]=96;count++;}
            else if(s1=="fifteen"){c[count]=25;count++;}
            else if(s1=="sixteen"){c[count]=56;count++;}
            else if(s1=="seventeen"){c[count]=89;count++;}
            else if(s1=="eightteen"){c[count]=24;count++;}
            else if(s1=="nineteen"){c[count]=61;count++;}
            s.erase(0,i+1);
            i=0;
        }
        if(s[i]=='.')
            break;
    }
    if(count==0) {
        cout << 0;
        return 0;
    }
    long long sum=0;
    sort(c,c+count);
    for(int i=0;i<count;i++){
        sum+=c[i];
        sum*=100;
    }
    cout<<sum/100;
    return 0;
}