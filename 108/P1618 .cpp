#include <iostream>
#include <cstring>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstdio>
using namespace std;
int tran(int x,int y,int z){//组合三位数
    return x*100+y*10+z;
}
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int s[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool flag = false;
    do {
        int s1 = tran(s[0], s[1], s[2]);
        int s2 = tran(s[3], s[4], s[5]);
        int s3 = tran(s[6], s[7], s[8]);
        if (a * s2 == b * s1 && b * s3 == c * s2 && a * s3 == c * s1) {
            cout << s1 << ' ' << s2 << ' ' << s3 << endl;
            flag = true;//有相应比例数据
        }
    } while (next_permutation(s, s + 9));//c++STL排列组合字典序
    if (flag == false)
        cout << "No!!!";
    return 0;
}