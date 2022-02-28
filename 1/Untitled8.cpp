#include <iostream>
using namespace std; 
int main()
{
	int s, v, t, temp;
	int hour, minute;
	cin>>s>>v;;
	if (s % v == 0)
		t = s / v + 10;
	else
		t = s / v + 11;	
	if (t <= 480)          
	{
		temp = 8 * 60 - t;
		hour = temp / 60;
		minute = temp % 60;
	}
	else
	{
		temp = t - 8 * 60;
		hour = 24 - temp / 60 - 1; 
		minute = 60 - temp % 60;
	}
	if(hour==0)
		cout<<"00:";
	else if(hour<10 && hour>0)
		cout<<'0'<<hour<<':';
	else
		cout<<hour<<':';
	if(minute==0)
		cout<<"00";
	else if(minute>0 && minute<10)
		cout<<'0'<<minute;
	else
		cout<<minute;
	return 0;
}
