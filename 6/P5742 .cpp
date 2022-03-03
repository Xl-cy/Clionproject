#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <queue>
#include <cstring>
#include <string.h>
using namespace std;
struct STUDENT{
    int t;//同学人数
    int id[1000];//学号
    int p1[1000],p2[1000];//p1学业成绩，p2素质拓展成绩
    int to[1000];//总分数
    double tot[1000];//tot综合分数
};
void jud(STUDENT student){
    for(int j=0;j<student.t;j++){
        if(student.to[j]>140 && student.tot[j]>=80.0){
            if(j==student.t-1)
                cout<<"Excellent";
            else
                cout<<"Excellent"<<endl;
        }
        else{
            if(j==student.t-1)
                cout<<"Not excellent";
            else
                cout<<"Not excellent"<<endl;
        }
    }
}
int main ()
{
    STUDENT s;
    int n;
    cin>>n;
    s.t=n;
    for(int i=0;i<n;i++){
        cin>>s.id[i]>>s.p1[i]>>s.p2[i];
        s.tot[i]=0.7*s.p1[i]+0.3*s.p2[i];
        s.to[i]=s.p1[i]+s.p2[i];
    }
    jud(s);
    return 0;
}