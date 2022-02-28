#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int f1(int a[3]){
	if((a[0]>a[2]-a[1]) || (a[1]>a[2]-a[0]) || (a[2]<a[0]+a[1]))
		return 1;
	else
		return 0;
}
int f2(int a[3]){
	if(pow(a[0],2)+pow(a[1],2)>pow(a[2],2))
		return 1;
	else if(pow(a[0],2)+pow(a[1],2)==pow(a[2],2))
		return 2;
	else
		return 3;
}
int f3(int a[3]){
	if(a[0]==a[1])
		return 1;
	else
		return 0;
}
int f4(int a[3]){
	if(a[0]==a[1] && a[1]==a[2])
		return 1;
	else
		return 0;
}
int main ()
{
	int a[3];
	for(int i=0;i<3;i++)
		cin>>a[i];
	sort(a,a+3);
	if(f1(a)==0)
		cout<<"Not triangle";
	else{
		if(f2(a)==1)
			cout<<"Acute triangle";
		else if(f2(a)==2)
			cout<<"Right triangle";
		else
			cout<<"Obtuse triangle";
		if(f3(a)==1)
			cout<<endl<<"Isosceles triangle";
		if(f4(a)==1)
			cout<<endl<<"Equilateral triangle";
	}
	return 0;
}
