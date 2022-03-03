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
    int n;
    cin>>n;
    int count=0;
    int s[10];
    if(n<10 || n>30)
        cout<<0;
    else{
        for(s[0]=1;s[0]<=3;s[0]++)
            for(s[1]=1;s[1]<=3;s[1]++)
                for(s[2]=1;s[2]<=3;s[2]++)
                    for(s[3]=1;s[3]<=3;s[3]++)
                        for(s[4]=1;s[4]<=3;s[4]++)
                            for(s[5]=1;s[5]<=3;s[5]++)
                                for(s[6]=1;s[6]<=3;s[6]++)
                                    for(s[7]=1;s[7]<=3;s[7]++)
                                        for(s[8]=1;s[8]<=3;s[8]++)
                                            for(s[9]=1;s[9]<=3;s[9]++)
                                                if(s[0]+s[1]+s[2]+s[3]+s[4]+s[5]+s[6]+s[7]+s[8]+s[9]==n)
                                                    count++;
        cout<<count<<endl;
        for(s[0]=1;s[0]<=3;s[0]++)
            for(s[1]=1;s[1]<=3;s[1]++)
                for(s[2]=1;s[2]<=3;s[2]++)
                    for(s[3]=1;s[3]<=3;s[3]++)
                        for(s[4]=1;s[4]<=3;s[4]++)
                            for(s[5]=1;s[5]<=3;s[5]++)
                                for(s[6]=1;s[6]<=3;s[6]++)
                                    for(s[7]=1;s[7]<=3;s[7]++)
                                        for(s[8]=1;s[8]<=3;s[8]++)
                                            for(s[9]=1;s[9]<=3;s[9]++)
                                                if(s[0]+s[1]+s[2]+s[3]+s[4]+s[5]+s[6]+s[7]+s[8]+s[9]==n)
                                                    cout<<s[0]<<' '<<s[1]<<' '<<s[2]<<' '<<s[3]<<' '<<s[4]<<' '<<s[5]<<' '<<s[6]<<' '<<s[7]<<' '<<s[8]<<' '<<s[9]<<endl;
    }
    return 0;
}