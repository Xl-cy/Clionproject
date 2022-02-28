#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()
{
	int T;
	cin>>T;
	if(T==1){
		cout<<"I love Luogu!";
	}
	else if(T==2){
		cout<<6<<" "<<4;
	}
	else if(T==3){
		cout<<3<<endl;
		cout<<12<<endl;
		cout<<2;
	}
	else if(T==4){
		cout<<setprecision(6)<<500.0/3;
	}
	else if(T==5){
		cout<<((260+220)/(12+20));
	}
	else if(T==6){
		cout<<sqrt(pow(6,2)+pow(9,2));
	}
	else if(T==7){
		int a=100;
		a=a+10;
		cout<<a<<endl;
		a=a-20;
		cout<<a<<endl;
		a=0;
		cout<<a;
	}
	else if(T==8){
		float pai=3.141593;
		int r=5;
		cout<<2*pai*r<<endl;
		cout<<pai*r*r<<endl;
		cout<<4*pai*r*r*r/3;
	}
	else if(T==9){
		int a=1;
		cout<<(((a+1)*2+1)*2+1)*2;
	}
	else if(T==10){
		 cout<<9;
	}
	else if(T==11){
		cout<<100.0/3;
	}
	else if(T==12){
		int i = 1;
		char x='A';
		char y=x;
		while(y!='M'){
			y=x+i;
			i++;
		}
		char z=x+18-1;
		cout<<i<<endl<<z;
	}
	else if(T==13){
		int a;
		int r1=4,r2=10;
		float pai=3.141593;
		float S=4.0*pai*r1*r1*r1/3+4.0*pai*r2*r2*r2/3;
		a=pow(S,1.0/3);
		cout<<a;
	}
	else if(T==14){
		cout<<50;
	}
	return 0;
}
