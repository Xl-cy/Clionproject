#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	float m,n;
	cin>>m>>n;
	if(m/n/n<18.5)
		cout<<"Underweight";
	else if(m/n/n>=18.5 && m/n/n<24)
		cout<<"Normal";
	else
		cout<<m/n/n<<endl<<"Overweight";
	return 0;
} 
